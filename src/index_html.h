String INDEX_HTML_HEAD = R"=====(
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Smart Mailbox</title>

    <link
      rel="icon"
      href="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653572185/1fe27358ddc05f8e59e60ffb589ed116_d9hc9i.svg"
    />

    <style>
      body {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
        font-family: 'Poppins', sans-serif;
        display: flex;
        align-items: center;
        flex-direction: column;
      }
      header {
        width: 100vw;
        height: 80px;
        background-color: #6d28d9;
        color: #fff;
        display: flex;
        align-items: center;
        justify-content: center;
      }

      img {
        margin-right: 10px;
      }

      .content {
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: center;
      }
      span {
        font-weight: 500;
        font-size: 24px;
        margin-bottom: 20px;
      }

      footer {
        width: 100vw;
        height: 90px;
        background-color: #6d28d9;
        position: fixed;
        bottom: 0;
        color: #fff;
        display: flex;
        justify-content: space-around;
      }

      .socialMedia {
        height: 100%;
        width: 50%;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
      }

      .contact {
        height: 100%;
        width: 50%;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
      }

      .social {
        display: flex;
        align-items: center;
        justify-content: center;
        width: 30%;
        height: 30px;
      }

      .footerSpan {
        font-size: 18px;
        font-weight: 500;
      }

      .imgFooter {
        height: 20px;
        width: 20px;
      }

      .socialImg {
        height: 24px;
        width: 24px;
        margin-bottom: 16px;
      }

      .mailImg {
        margin-bottom: 16px;
      }

      a {
        color: #fff;
        text-decoration: none;
      }

      .have {
        font-size: 28px;
        font-weight: 600;
      }

      .subContent {
        margin-top: 40px;
        width: 80%;
        display: flex;
        justify-content: space-around;
      }

      .inside {
        height: 200px;
        width: 40%;
        border: 2px solid #5c5c5c;
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: center;
      }
    </style>
  </head>
  <body>
    <header>
      <img
        src="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653572475/1fe27358ddc05f8e59e60ffb589ed116_1_ksnger.svg"
        alt="Ícone Caixa de email inteligente"
      />
      <h1>Smart Mailbox</h1>
    </header>

    <div class="content">
      <h1>Aqui voce pode ver informações da sua Smart Mailbox</h1>

      <span class="have">Você tem:</span>

      <div class="subContent">
        <div class="inside">
          <span>  )====="; 
      
      
      
String INDEX_HTML_MID = R"=====(</span>
          <span>carta(s)</span>
        </div>

        <div class="inside">
          <span>  )====="; 

String INDEX_HTML_MID2 = R"=====(</span>
          <span>       )====="; 
  
 String INDEX_HTML_END =  R"=====(  g</span>
        </div>
      </div>
    </div>

    <footer>
      <div class="socialMedia">
        <span class="footerSpan">Redes Sociais:</span>

        <div class="social">
          <a
            href="https://www.instagram.com"
            class="networks-links"
            target="_blank"
          >
            <img
              class="socialImg"
              src="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653575030/akar-icons_twitter-fill_nrry4j.svg"
              alt="Twitter"
            />
          </a>

          <a
            href="https://www.twitter.com"
            class="networks-links"
            target="_blank"
          >
            <img
              class="socialImg"
              src="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653575031/akar-icons_instagram-fill_bg58ki.svg"
              alt="Instagram"
            />
          </a>

          <a
            href="https://www.facebook.com"
            class="networks-links"
            target="_blank"
          >
            <img
              class="socialImg"
              src="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653575098/Vector_qoju8m.svg"
              alt="Facebook"
            />
          </a>
        </div>

        <div class="imgSocial"></div>
      </div>

      <div class="contact">
        <span class="footerSpan">Fale conosco:</span>

        <div class="social">
          <img
            class="mailImg"
            src="https://res.cloudinary.com/dxaxgalyl/image/upload/v1653575276/ant-design_mail-outlined_trogvw.svg"
            alt="Email"
          />
          <span class="footerSpan"
            ><a href="mailto:contato@kidsup.com.br"
              >contato@smartbox.com</a
            ></span
          >
        </div>
      </div>
    </footer>
  </body>
</html>

)=====";
