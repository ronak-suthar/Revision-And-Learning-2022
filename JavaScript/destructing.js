let dht11 = {
  temprature: 50,
  humidity: 33,
};

let { temprature: dht11Temp , humidity: dht11Humidity} = dht11;
// let { humidity: dht11Humidity } = dht11;

console.log(dht11Temp,dht11Humidity);

//create a new copy of dht11 using spread operator
let dataCopy = {...dht11};

console.log(dataCopy);