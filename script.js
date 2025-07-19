function mostrarSecao(id) {
  const secoes = document.querySelectorAll('.secao');
  secoes.forEach(secao => secao.classList.remove('ativa'));
  document.getElementById(id).classList.add('ativa');
}

function comprar(produto) {
  const mensagem = encodeURIComponent(`Olá! Gostaria de comprar o perfume: ${produto}`);
  const numero = '5521997480420';
  const link = `https://wa.me/${numero}?text=${mensagem}`;
  window.open(link, '_blank');
}