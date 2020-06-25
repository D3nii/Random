let random;
let rock = 'https://paintingvalley.com/drawings/rock-cartoon-drawing-31.jpg';
let paper = 'https://cdn3.iconfinder.com/data/icons/hand-drawn-common-icons/100/sketch_drawn_handdrawn_sketchy-18-512.png';
let scissors = 'https://cdn.clipart.email/35f00e6ae12bdc19632452634fa4d9de_black-and-white-scissor-tools-free-black-white-clipart-scissors-_880-880.jpeg';
let option = ['https://paintingvalley.com/drawings/rock-cartoon-drawing-31.jpg', 'https://cdn3.iconfinder.com/data/icons/hand-drawn-common-icons/100/sketch_drawn_handdrawn_sketchy-18-512.png', 'https://cdn.clipart.email/35f00e6ae12bdc19632452634fa4d9de_black-and-white-scissor-tools-free-black-white-clipart-scissors-_880-880.jpeg'];
let user, compc;

function checkmove(x) {
	document.getElementById('lol').innerHTML = document.getElementById('move').options[e.selectedIndex].value;
	alert('lol');
}

function check() {
	let x = document.getElementById('move');

	if(x.options[x.selectedIndex].value === '1') {
		document.getElementById('choiceimg').src = rock;
		user = 'rock';
	} else if(x.options[x.selectedIndex].value === '2') {
		document.getElementById('choiceimg').src = paper;
		user = 'paper';
	} else {
		document.getElementById('choiceimg').src = scissors;
		user = 'scissors';
	}

	random = Math.floor(Math.random() * 3);
	let comp = option[random];

	if(random === 0) {
		document.getElementById('compimg').src = comp;
		compc = 'rock';
	} else if(random === 1) {
		document.getElementById('compimg').src = comp;
		compc = 'paper';
	} else {
		document.getElementById('compimg').src = comp;
		compc = 'scissors';
	}

	winner(user, compc);
}

function winner(x, y) {
	if(x === y) {
		document.getElementById('winner').innerHTML = 'DRAW!';
	} else if(x === 'rock' && y === 'scissors') {
		document.getElementById('winner').innerHTML = `${document.getElementById('name').value} won!`;
	} else if(x === 'rock' && y === 'paper') {
		document.getElementById('winner').innerHTML = 'Bot won!';
	} else if(x === 'paper' && y === 'rock') {
		document.getElementById('winner').innerHTML = `${document.getElementById('name').value} won!`;
	} else if(x === 'paper' && y === 'scissors') {
		document.getElementById('winner').innerHTML = 'Bot won!';
	} else if(x === 'scissors' && y === 'rock') {
		document.getElementById('winner').innerHTML = 'Bot won!';
	} else if(x === 'scissors' && y === 'paper') {
		document.getElementById('winner').innerHTML = `${document.getElementById('name').value} won!`;
	}
}

