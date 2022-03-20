function randomInRange(min,max){
    return Math.floor(Math.random()*(max-min+1)+min);
}
function randomBetween0andn(n){
    return Math.floor(Math.random()*n);
}

function convertToInteger(str){
    return parseInt(str);
}

function intToBinary(str){
    return parseInt(str,2);
}

let number = Math.random();

console.log(number*200);

console.log(randomBetween0andn(15));

console.log(randomInRange(10,30));

let num = '568'

console.log(convertToInteger(num),typeof(num),typeof(convertToInteger(num)));

console.log(intToBinary('1111'));