function abrirProduto(nome, imagem, preco) {
  const html = `
    <html>
    <head>
      <title>${nome}</title>
      <link rel="stylesheet" href="style.css">
    </head>
    <body>
      <div style="padding: 30px; text-align: center;">
        <img src="${imagem}" alt="${nome}" style="width:300px; border-radius: 10px;">
        <h1>${nome}</h1>
        <p style="color: #ffd700; font-size: 24px;">${preco}</p>
        <a href="https://wa.me/5521997480420" target="_blank">
          <button style="padding: 12px 30px; font-size: 16px; border-radius: 10px; background-color: #25d366; color: white; border: none;">
            Comprar agora
          </button>
        </a><br/><br/>
        <a href="index.html" style="color: #00ffff;">← Voltar</a>
      </div>
    </body>
    </html>
  `;
  const novaJanela = window.open();
  novaJanela.document.write(html);
}

document.addEventListener("DOMContentLoaded", () => {
  const patrocinadores = document.getElementById("patrocinadores-grid");
  const nosso = document.getElementById("nosso-grid");

  for (let i = 1; i <= 12; i++) {
    patrocinadores.innerHTML += `
      <div class="produto" onclick="abrirProduto('Perfume Marca ${i}', 'images/exemplo${(i % 6) + 1}.jpg', 'R$ ${299 + i * 10}')">
        <img src="images/exemplo${(i % 6) + 1}.jpg" alt="Marca ${i}">
        <h3>Marca ${i}</h3>
        <button>Comprar</button>
      </div>
    `;
    nosso.innerHTML += `
      <div class="produto" onclick="abrirProduto('Nosso Perfume ${i}', 'images/exemplo${(i % 6) + 1}.jpg', 'R$ ${399 + i * 10}')">
        <img src="images/exemplo${(i % 6) + 1}.jpg" alt="Nosso ${i}">
        <h3>Nosso ${i}</h3>
        <button>Comprar</button>
      </div>
    `;
  }
});