let numeroAleatorio = Math.floor(Math.random() * 100) + 1; // calcula um numero aleatorio e add 1 para garantir o intervalo de 1 -100
const tentativas = window.document.querySelector('.tentativas')
const resultado = window.document.querySelector('.lastResult')
const dica = window.document.querySelector('.maiorOuMenor')
const busca = window.document.querySelector('.guessSubmit')
const input = window.document.querySelector('.guessField')

let cont_erro = 1; 
let resrtbutton; 

function estarCerto() {
    const tentativaUsuario = Number(tentativas.value);
    if (cont_erro === 1) {
        tentativaUsuario.textContent = 'tentativas anteriores'
    }
    tentativas.textContent = `${tentativaUsuario}`
}