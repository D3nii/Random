let b1 = document.getElementById('b1');
let b2 = document.getElementById('b2');
let b3 = document.getElementById('b3');
let b4 = document.getElementById('b4');
let b5 = document.getElementById('b5');
let b6 = document.getElementById('b6');
let b7 = document.getElementById('b7');
let b8 = document.getElementById('b8');
let b9 = document.getElementById('b9');
let pbotton = document.getElementById('playAgain');
let winner = document.getElementById('winner');
let pname = prompt('Enter your name: ');

let t = 0;
let play = false;
let pchoice;

document.getElementById('pname').innerHTML += " " + pname;

function player(x) {
	play = true;
	pchoice = x;
	if(x == 'X') {
		t = 2;
	} else {
		t = 3;
	}
}

function Winner() {
	if((b1.innerHTML === b2.innerHTML && b2.innerHTML === b3.innerHTML)) {
		if(b1.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b4.innerHTML === b5.innerHTML && b5.innerHTML === b6.innerHTML)){
		if(b4.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b7.innerHTML === b8.innerHTML && b8.innerHTML === b9.innerHTML)){
		if(b7.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b1.innerHTML === b5.innerHTML && b5.innerHTML === b9.innerHTML)){
		if(b1.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b3.innerHTML === b5.innerHTML && b5.innerHTML === b7.innerHTML)){
		if(b3.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b1.innerHTML === b4.innerHTML && b4.innerHTML === b7.innerHTML)){
		if(b1.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b2.innerHTML === b5.innerHTML && b5.innerHTML === b8.innerHTML)){
		if(b2.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}

	if((b3.innerHTML === b6.innerHTML && b6.innerHTML === b9.innerHTML)){
		if(b3.innerHTML === pchoice) {
			winner.innerHTML = 'The Winner is ' + pname + '!';	
		} else {
			winner.innerHTML = 'The Winner is Bot!';
		}
		
		play = false;
		pbotton.innerHTML = 'Play Again?';
	}
}

function draw(x) {
	if(play) {
		if(t%2 == 0) {
			document.getElementById(x).innerHTML = 'X';	
		} else {
			document.getElementById(x).innerHTML = 'O';
		}
		Winner();
		t++;
	}
}

function Again() {
	play = true;
	b1.innerHTML = '1';
	b2.innerHTML = '2';
	b3.innerHTML = '3';
	b4.innerHTML = '4';
	b5.innerHTML = '5';
	b6.innerHTML = '6';
	b7.innerHTML = '7';
	b8.innerHTML = '8';
	b9.innerHTML = '9';
	playAgain.innerHTML = '';
	winner.innerHTML = '';
}
