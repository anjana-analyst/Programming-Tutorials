var myArray;
myArray=["Cabbage","Cauliflower","Carrot"];
myArray=["Sauce",10];
myArray=[["Cabbage",10],["Carrot",40]];
myArray=[50,60,70,80];
//accessing using index
var myData= myArray[0];
//to change the value or modify
myArray[0]=20;
//2-D array
myArray = [[1,2,3], [4,5,6], [7,8,9], [[10,11,12], 13, 14]];
myData=myArray[2][2];
//to add data to last position
myArray=[["John", 23], ["cat", 2]];
myArray.push(["Dog",3]);
//to delete last element
myArray.pop();
//to delete the first element
myArray.shift();
//to add in the first position
myArray.unshift(["Paul",35]);
