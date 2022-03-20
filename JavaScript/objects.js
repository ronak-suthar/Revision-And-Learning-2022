let data = {
    'origin':'nagpur',
    'destination':'bangalore',
    'adults':5,
    'coachType':'Sleeper',
    'coachNumber':11,
    'food':false
};

//accessing the property
console.log(data.food,data['food']);

//lets update property

data.coachType = 'Air Conditioner'

console.log(data)

//add new property

data.pnr = 456856745652;

console.log(data);

//remove property

delete data.coachNumber

console.log(data);

//doing some stuff

data.seatDetails = {'number':55,'type':'SL'}

console.log(data);

console.log(data.seatDetails.type)

//2:30:00

console.log(JSON.stringify(data));