function isLess(a, b)
{  
  return a<b;
  
}

isLess(10, 15);

function abTest(a, b) 
{
  if(a<0 || b<0)
   return undefined;
  else
   return Math.round(Math.pow(Math.sqrt(a) + Math.sqrt(b), 2));
}

abTest(2,2);
