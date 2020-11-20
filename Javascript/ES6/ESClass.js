class Vegetable
{
    constructor(name)
    {
        this.name=name;
    }
}

const carrot = new Vegetable('carrot');
console.log(carrot.name); 

//get and set method in class
class Thermostat
{
    constructor(farenheit)
    {
        this.farenheit=farenheit;
    }
    get temperature()
    {
        return (5/9)*(this.farenheit-32);
    }
    set temperature(celsius)
    {
        this.farenheit=((celsius*9)/5)+32;
    }
}
const thermos = new Thermostat(76); 
let temp = thermos.temperature; 
thermos.temperature = 26;
temp = thermos.temperature; 
