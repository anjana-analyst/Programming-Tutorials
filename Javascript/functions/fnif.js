function larger(a,b)
{
   if(a>b)
   {
     return true;
   }
   return false;
}
larger(10,20);

function testElse(val) 
{
  var result = "";
  if (val > 5) 
  {
    result = "Bigger than 5";
  }
  else
  {
    result = "5 or Smaller";
  }
  return result;
}

testElse(4);

function testElseIf(val) 
{
  if (val > 10) 
  {
    return "Greater than 10";
  }

 else if (val < 5) 
 {
    return "Smaller than 5";
  }

else
{
  return "Between 5 and 10";
}
}

testElseIf(7);

unction orderMyLogic(val) 
{
  if(val< 5)
  {
    return "Less than 5";
  } 
  else if (val < 10) 
  {
    return "Less than 10";
  } 
  else
  {
    return "Greater than or equal to 10";
  }
  
}

console.log(orderMyLogic(4));
