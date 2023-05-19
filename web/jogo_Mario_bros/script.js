const mario = document.querySelector('.mario');
const tubo = document.querySelector('.tubo')
const game_ouver = document.querySelector('.game-ouver')
const butao = document.querySelector('.reiniciar')
const pontos = document.querySelector('.contador')
let tempo = 0
let segunsdos = 0

const jump = () => {
    mario.classList.add('jump')
    setTimeout(() => {
        mario.classList.remove('jump')
    }, 600)
}

const loop = setInterval(() => {
    const posicao_tupo = tubo.offsetLeft // deslocamento esquerdo do tubo
    const posicao_mario = +window.getComputedStyle(mario).bottom.replace('px', '')
    // o getCOmputerStyle permiti pegar propriedades do css que ainda n existe uma função especifica. o + serve para converter de str para number.
    butao.style.display = 'none' // fazer o botão desaparecer
    /*console.log(`tudo ${posicao_tupo}`)
    console.log(`mario ${posicao_mario}`)*/
    tempo = tempo + 1
    if (tempo % 100 == 0) {
        segunsdos = segunsdos + 1
        pontos.textContent = `Pontos: ${segunsdos}`
    }
    
    if (posicao_tupo <= 130 && posicao_tupo > 10 && posicao_mario < 120) {
        tubo.style.animation = 'none'
        tubo.style.left = `${posicao_tupo}px`
        mario.style.animation = 'none'
        mario.style.bottom = `${posicao_mario}px`
        game_ouver.setAttribute('src', 'img/game_ouver.png')
        butao.style.display = 'block' // faz o botão aparecer
        clearInterval(loop) // faz com que o loop para de ser executado
        document.addEventListener('keydown', function(KeyboardEvent){
            if(KeyboardEvent.keyCode == 32){
                window.location.reload()
            }
        })
    }
}, 10)

butao.addEventListener('click', reiniciar_jogo)
document.addEventListener('keydown', jump)

function reiniciar_jogo() {
    window.location.reload()
}
