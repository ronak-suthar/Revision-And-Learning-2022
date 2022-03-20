function isEqualOnlyValue(a,b){
    if(a==b){
        return true;
    }

    return false;
}

function isEqualBothValueAndType(a,b){
    if(a===b){
        return true;
    }

    return false;
}

console.log(isEqualOnlyValue('ronak','Ronak'),isEqualBothValueAndType(10,'10'));

//Similary we have in inequality we have != and !==
