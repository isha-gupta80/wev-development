const playerRock = document.getElementById('player-rock');
const playerPaper = document.getElementById('player-paper');
const playerScissors = document.getElementById('player-scissors');

const result = document.getElementById('result');
const score = document.getElementById('score');

const computerChoices = ['rock', 'paper', 'scissors'];

const computerChoice = () => {
    const randomIndex = Math.floor(Math.random() * 3);
    console.log(randomIndex);
    // console.log(computerChoices[randomIndex]);
    return computerChoices[randomIndex];
}

let playerScore = 0;

const win = () => {
    console.log('win');
    playerScore++;
    score.innerHTML = playerScore;
    result.innerHTML = 'You win!';
}

const lose = () => {
    console.log('I am from lose function');
    result.innerHTML = 'You lose!';
    
    
}

const draw = () => {
    result.innerHTML = 'It\'s a draw!';
}

const playGame = (playerChoice) => {
    const computer = computerChoice();
    console.log(computer)
    if ((playerChoice === 'rock' && computer === 'scissors') || (playerChoice === 'paper' && computer === 'rock') || (playerChoice === 'scissors' && computer === 'paper')) {
        win();
    } else if (playerChoice === computer) {
        draw();
    } else {
        lose();
    }
}

playerRock.addEventListener('click', () => {
    playGame('rock');
}
)

playerPaper.addEventListener('click', () => {
    playGame('paper');
}
)

playerScissors.addEventListener('click', () => {
    playGame('scissors');
}
)
