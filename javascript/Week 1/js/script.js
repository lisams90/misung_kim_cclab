
var square = null;

function init(){

	square=document.getElementById('square');
	square.style.left='0px';
	square.style.position='relative';

	square1=document.getElementById('square1');
	square1.style.position='relative';
	square1.style.top='80px';
}

function moveRight(){
	square.style.left = parseInt(square.style.left) + 10 + 'px';
}

function moveDown(){
	square1.style.top = parseInt(square1.style.top) + 10 + 'px';
}


window.onload = init;



// var currentPos=0;
// var intervalHandles;

// function beginAnimate(){

// 	document.getElementById('crab').className="c"
// 	intervalHandles=setInterval(animateCrab,70);

// 	function animateCrab(){
// 		currentPos+=5;
// 		document.getElementById('crab').style.left=currentPos+'px';
// 		if(currentPos>1200){
// 			clearInterval(intervalHandles);
// 			document.getElementById('crab').className=''
// 		}

// 	}
// }

// window.onload=beginAnimate;

