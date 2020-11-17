function sum(arr, n) 
{
  if(n<=0)
  {
    return 0;
  }  
  else
  {
    return sum(arr,n-1)+arr[n-1];
  }
}

var contacts = [
    {
        "firstName": "Akira",
        "lastName": "Laine",
        "number": "0543236543",
        "likes": ["Pizza", "Coding", "Brownie Points"]
    },
    {
        "firstName": "Harry",
        "lastName": "Potter",
        "number": "0994372684",
        "likes": ["Hogwarts", "Magic", "Hagrid"]
    },
    {
        "firstName": "Sherlock",
        "lastName": "Holmes",
        "number": "0487345643",
        "likes": ["Intriguing Cases", "Violin"]
    },
    {
        "firstName": "Kristian",
        "lastName": "Vos",
        "number": "unknown",
        "likes": ["JavaScript", "Gaming", "Foxes"]
    }
];

function lookUpProfile(name, prop)
{
   for (var x = 0; x < contacts.length; x++) 
   {
    if (contacts[x].firstName === name) 
    {
      if (contacts[x].hasOwnProperty(prop))
       {
        return contacts[x][prop];
       } 
       else 
       {
        return "No such property";
       }
    }
  }
   return "No such contact";
}

lookUpProfile("Akira", "likes");

function rangeOfNumbers(startNum, endNum) 
{
  if (endNum - startNum === 0) 
  {
    return [startNum];
  } 
  else {
    var numbers = rangeOfNumbers(startNum, endNum - 1);
    numbers.push(endNum);
    return numbers;
     }
};

function countdown(n) 
{
  if (n < 1)
  {
    return [];
  } 
  else 
  {
    const arr = countdown(n - 1);
    arr.unshift(n);
    return arr;
  }
}
