function sayHello() {
  console.log("Hello Buddy");
}

function add(a, b) {
  console.log(a + b);
}

sayHello();

add(10, 15);

function normalFunc() {
  return "Normal Function";
};

let arrowFunc = () => {
  return "Arrow Function";
};

let arrowFuncQuic = () => "Arrow Function Quick";

console.log(normalFunc());
console.log(arrowFunc());
console.log(arrowFuncQuic());
