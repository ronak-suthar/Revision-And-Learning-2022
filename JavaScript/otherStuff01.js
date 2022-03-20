//ternary operator

function checkEquals(a,b){
    return a===b?true:false;
}

function Sign(num){
    return num > 0 ? 'positive' : num<0 ? 'negative' : 'zero' ; 
}

console.log(checkEquals(10,10));

console.log(Sign(10),Sign(0),Sign(-25));