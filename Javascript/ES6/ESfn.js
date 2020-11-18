// inline fn --> there is no need to name a fn when there is a req to pass it to another fn in js so we use => arrow operator
//general
const myFunc = function() 
{
  const myVar = "value";
  return myVar;
}
//using arrow operator
const myFunc = () =>
{
  const myVar = "value";
  return myVar;
}

//with parameters
const doubler= (number) => number*2;
const multiply= (a,b) => a*b;
const tripler=number=>number*3;

//array concat using concat keyword
const myConcat = (arr1,arr2)=>arr1.concat(arr2);

console.log(myConcat([1, 2], [3, 4, 5]));

//default arguments
const increment = (number, value=1) => number + value;

//we can use rest operator to create n number of arguments to a fn
//The reduce() method reduces the array to a single value. The reduce() method executes a provided function for each value of the array (from left-to-right). The return value of the function is stored in an accumulator (result/total).
const sum = (...args) => 
{
  return args.reduce((a, b) => a + b, 0);
}

//spread operator
var domains=["Cyber Security","Web Development","Data Science"];
var certs=["CEH","Hacker Rank","Kaggle"];
var othercerts=["CHFI",...certs,"GCAI"];

//spread operator to pass as an argument
function Add(a,b)
{
  console.log(a+b);
}
var s=[10,20];
Add(...s);

//to copy from one array to another array
const arr1 = ['JAN', 'FEB', 'MAR', 'APR', 'MAY'];
let arr2;

arr2 = [...arr1];

console.log(arr2);

//to concat arrays
var a1=[1,2,3];
var a2=[4,5,6];
var a3=[...a1,...a2];


//Destructing assignment
const user={name:'John Doe', age: 34};
const { name, age } = user;

//normal assignment
const user = { name: 'John Doe', age: 34 };
const name = user.name;
const age = user.age;

//other way
const HIGH_TEMPERATURES = 
{
  yesterday: 75,
  today: 77,
  tomorrow: 80
};  
const {today:highToday,tomorrow:highTomorrow}=HIGH_TEMPERATURES;

//nested elements
const LOCAL_FORECAST = {
  yesterday: { low: 61, high: 75 },
  today: { low: 64, high: 77 },
  tomorrow: { low: 68, high: 80 }
};

//Destructive way
const{today:{low:lowToday,high:highToday}}=LOCAL_FORECAST;

//normal way
//const lowToday = LOCAL_FORECAST.today.low;
//const highToday = LOCAL_FORECAST.today.high;

//destructive assignment to swap array
let a = 8, b = 6;
[a,b]=[b,a];

//slice using destructive assignment
const source = [1,2,3,4,5,6,7,8,9,10];
function removeFirstTwo(list) 
{
  const [a,b,...arr] = list; 
  return arr;
}
const arr = removeFirstTwo(source);
