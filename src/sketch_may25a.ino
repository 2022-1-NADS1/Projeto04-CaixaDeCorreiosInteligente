#define pinSensorCarta D0 //Pino do sensor de movimento
#define pinTranca D1 //Pino da tranca
#define botao D2 //Pino do botão
#define botaoTranca D5 // Botão da tranca
#define LED D3 // led 

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Arduino.h>
#include "HX711.h"
#include "index_html.h"
ESP8266WebServer server(80);

String letter = "0"; // Váriavel que vai o número de cartas
String package = "Você não tem nenhuma encomenda!!!"; // Váriavel que vai a informação da encomenda
String weight; //Váriavel que vai o valor do peso
int numCartas = 0; // Váriavel que vai contar o número de cartas
float pesoEncomenda = 0; //Váriavel que vai ser atribuido o valor do sensor de peso

const int LOADCELL_DOUT_PIN = D6; //Pinos do sensor de peso
const int LOADCELL_SCK_PIN = D7; //Pinos do sensor de peso
HX711 scale;

void setup() {
Serial.begin(115200);
WiFi.mode(WIFI_STA);
WiFi.begin("Mogeko","754215ra"); // Nome da Rede e Senha
Serial.println("");
// espera a conexao
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.print(".");
}

pinMode (pinSensorCarta, INPUT); //Definição de porta
pinMode (pinTranca, OUTPUT); //Definição de porta
pinMode (botao, INPUT); //Botão de reset
pinMode (botaoTranca, INPUT); //Botão para abrir a porta
pinMode(LED, OUTPUT);
  
Serial.println("");
Serial.print("Conectado ");
Serial.println(WiFi.localIP());

  server.on("/",Site); //Funcão para chamar o site
  server.begin();
  digitalWrite(pinTranca, LOW);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN); //Definição de porta
  scale.set_scale(-320.043); //Definição da tara da balança
  scale.tare();
}

void Site(){
server.send(200,"text/html",INDEX_HTML_HEAD+letter+INDEX_HTML_MID+package+INDEX_HTML_MID2+weight+INDEX_HTML_END);
}


String carta(){
    while (digitalRead(pinSensorCarta) == LOW){
      return String(numCartas);
      delay(2000);
  }
    numCartas++;
    delay(2000);
    return String(numCartas);
  }

 String peso(){
  if(pesoEncomenda < 50.0){
    package = "Você não tem nenhuma encomenda.";
    return "0";
  }
  else
 {
    delay(1000);  
    digitalWrite(pinTranca, LOW);
    package = "Você tem encomenda.";
    return String(pesoEncomenda);
 }
 }

void resetar() {
  numCartas = 0;
  pesoEncomenda = 0;
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
 }

void abrirPorta() {
  digitalWrite(pinTranca, HIGH);
  delay(3000);
  digitalWrite(pinTranca, LOW);
}
  

void loop() {
  pesoEncomenda = scale.get_units(), 1;
  weight = peso();
  letter = carta();

 if (pesoEncomenda < 50){
 if(digitalRead(botaoTranca) == HIGH) {
     abrirPorta();
  }
 }
      if (digitalRead(botao) == HIGH){
      resetar();
    }
  
  
  server.handleClient();
}
