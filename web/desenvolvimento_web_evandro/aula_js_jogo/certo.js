let numeroAleatorio = Math.floor(Math.random() * 100) + 1;

const tentativas = document.querySelector('.tentativas');
const lastResult = document.querySelector('.lastResult');
const maiorOuMenor = document.querySelector('.maiorOuMenor');

const guessSubmit = document.querySelector('.guessSubmit');
const guessField = document.querySelector('.guessField');

let tentativaCount = 1;
let resetButton;

function checaNumero(){
    const tentativaUsuario = Number(guessField.value);
    if (tentativaCount === 1){
        tentativas.textContent = 'Tentativas anteriores: ';
    }
    tentativas.textContent += `${tentativaUsuario} `;

    if (tentativaUsuario === numeroAleatorio){
        lastResult.textContent = 'Acertô Mizerávi!';
        lastResult.style.backgroundColor = 'green';
        maiorOuMenor.textContent = '';
        setGameOver();
    } else if (tentativaCount === 10){
        lastResult.textContent = '!!!PERDEU MANÉ!!!';
        maiorOuMenor.textContent = ''; // colocou isso pro maior ou menor n receber nd
        setGameOver();
    } else{
        lastResult.textContent = 'Errooooooou!';
        lastResult.style.backgroundColor = 'red';
        if (tentativaUsuario < numeroAleatorio){
            maiorOuMenor.textContent = 'Tente um número maior...';
        }else if(tentativaUsuario > numeroAleatorio){
            maiorOuMenor.textContent = 'Tente um número menor...';
        }
    }

    tentativaCount++;
    guessField.value = '';
    guessField.focus();
}

guessSubmit.addEventListener('click', checaNumero);

function setGameOver(){
    guessField.disabled = true;
    guessSubmit.disabled = true;
    resetButton = document.createElement('button');
    resetButton.textContent = 'Novo Jogo';
    document.body.append(resetButton);
    resetButton.addEventListener('click', resetGame);
}

function resetGame(){
    tentativaCount = 1;

    const resetParas = document.querySelectorAll('.resultParas p');
    for (const resetPara of resetParas){
        resetPara.textContent = '';
    }

    resetButton.parentNode.removeChild(resetButton);

    guessField.disabled = false;
    guessSubmit.disabled = false;
    guessField.value = '';
    guessField.focus();

    lastResult.style.backgroundColor = 'white';

    numeroAleatorio = Math.floor(Math.random() * 100) + 1;
}