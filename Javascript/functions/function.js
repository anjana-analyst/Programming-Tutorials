//global and local
var myGlobal=10;

function fun1() {
  oopsGlobal=5;

}

function fun2() {
  var output = "";
  if (typeof myGlobal != "undefined") {
    output += "myGlobal: " + myGlobal;
  }
  if (typeof oopsGlobal != "undefined") {
    output += " oopsGlobal: " + oopsGlobal;
  }
  console.log(output);
}

var outerWear = "T-Shirt";

function myOutfit() {
  var outerWear="sweater";
  console.log(outerWear);
  return outerWear;
}

myOutfit();

function nextInLine(arr, item) 
{
  arr.push(item);
  return arr.shift();
}
var testArr = [5,6,7,8,9];
console.log("Before: " + JSON.stringify(testArr));
console.log(nextInLine(testArr, 1));
console.log("After: " + JSON.stringify(testArr));
