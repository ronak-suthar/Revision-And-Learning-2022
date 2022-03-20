"use strict";

const data = [10,20,30];

data[0]=55;

console.log(data);

//now the object is really freezed after line 10
Object.freeze(data)

data[0] = 22;

console.log(data);
