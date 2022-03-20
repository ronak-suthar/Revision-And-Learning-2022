let data = [10,'Mango',true]

console.log(data)

//lets modify the array

data[2]=false;

console.log(data)

//lets append data to array

let items = [data]

items.push([20,'Banana',false])

console.log(items);

//remove the last element
let removedItem = items.pop();

console.log(removedItem)

console.log(items)

//remove the first element

items.push([20,'Banana',false]);

removedItem = items.shift();

console.log(removedItem)

console.log(items)

//add element to starting of array

items.unshift([25,'Guava',true])

console.log(items)