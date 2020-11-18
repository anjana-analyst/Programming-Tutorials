let catName;
let quote;
function catTalk() 
{
  catName = "Oliver";
  quote = catName + " says Meow!";

}
catTalk();

//let keyword vs var
//var
var printNumTwo;
for (var i = 0; i < 3; i++) {
  if (i === 2) {
    printNumTwo = function() {
      return i;
    };
  }
}
console.log(printNumTwo());
// returns 3
// so the fn returns the global i and not the value i had when the function was created in the for loop. 

//let
function checkScope() 
{
  let i = 'function scope';
  if (true) {
    let i ="block scope";
    console.log('Block scope i is: ', i);
  }
  console.log('Function scope i is: ', i);
  return i;
}

//const keyword
function printManyTimes(str) 
{
  const SENTENCE = str + " is cool!";
  for (let i = 0; i < str.length; i+=2) 
  {
    console.log(SENTENCE);
  }
}
printManyTimes("Javascript");


//const keywords are still mutable for arrays
const s = [5, 7, 2];
function reassignA() 
{
  s[0]=2;
  s[1]=5;
  s[2]=7;
}
reassignA();

//to stop the object mutation
function freezeObj() {
  'use strict';
  const MATH_CONSTANTS = {
    PI: 3.14
  };
  Object.freeze(MATH_CONSTANTS);
  
  try 
  {
    MATH_CONSTANTS.PI = 99;
  } 
  catch(ex) 
  {
    console.log(ex);
  }
  return MATH_CONSTANTS.PI;
}
const PI = freezeObj();
