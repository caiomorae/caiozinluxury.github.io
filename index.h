<!DOCTYPE html>
<html lang="pt-BR">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Caio Luxury – Perfumes de Luxo</title>
  <link rel="stylesheet" href="style.css"/>
  <script src="script.js" defer></script>
</head>
<body>
  <header>
    <h1>Caio Luxury</h1>
    <nav>
      <ul>
        <li><a href="#lancamentos">Lançamentos</a></li>
        <li><a href="#favoritos">Favoritos</a></li>
        <li><a href="#patrocinadores">Patrocinadores / Outras Marcas</a></li>
        <li><a href="#nosso">Nosso Próprio</a></li>
      </ul>
    </nav>
  </header>

  <section id="lancamentos">
    <h2>Lançamentos</h2>
    <div class="grid">
      <div class="produto" onclick="abrirProduto('212 VIP', 'images/212vip.jpg', 'R$ 599')">
        <img src="images/212vip.jpg" alt="212 VIP"/>
        <h3>212 VIP</h3>
        <button>Comprar</button>
      </div>
    </div>
  </section>

  <section id="favoritos">
    <h2>Favoritos</h2>
    <div class="grid">
      <div class="produto" onclick="abrirProduto('Ralph Lauren', 'images/ralph.jpg', 'R$ 499')">
        <img src="images/ralph.jpg" alt="Ralph Lauren"/>
        <h3>Ralph Lauren</h3>
        <button>Comprar</button>
      </div>
      <div class="produto" onclick="abrirProduto('Dior Sauvage', 'images/dior.jpg', 'R$ 659')">
        <img src="images/dior.jpg" alt="Dior Sauvage"/>
        <h3>Dior Sauvage</h3>
        <button>Comprar</button>
      </div>
      <div class="produto" onclick="abrirProduto('Gucci Guilty', 'images/gucci.jpg', 'R$ 529')">
        <img src="images/gucci.jpg" alt="Gucci Guilty"/>
        <h3>Gucci Guilty</h3>
        <button>Comprar</button>
      </div>
      <div class="produto" onclick="abrirProduto('Chanel Bleu', 'images/chanel.jpg', 'R$ 589')">
        <img src="images/chanel.jpg" alt="Chanel Bleu"/>
        <h3>Chanel Bleu</h3>
        <button>Comprar</button>
      </div>
    </div>
  </section>

  <section id="patrocinadores">
    <h2>Patrocinadores / Outras Marcas</h2>
    <div class="grid" id="patrocinadores-grid"></div>
  </section>

  <section id="nosso">
    <h2>Nosso Próprio</h2>
    <div class="grid" id="nosso-grid"></div>
  </section>

  <footer>
    <p>Siga no Instagram: @caio.luxury</p>
    <a href="https://wa.me/5521997480420" target="_blank" class="whatsapp-float">WhatsApp</a>
  </footer>
</body>
</html>
