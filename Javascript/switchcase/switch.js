function caseInSwitch(val) {
  var answer = "";
  switch(val)
  {
    case 1:
      answer="alpha";
      console.log("alpha");
      break;
    case 2:
      answer="beta";
      console.log("beta");
      break;
    case 3:
      answer="gamma";
      console.log("gamma");
      break;
    case 4:
      answer="delta";
      console.log("delta");
      break;

  }
  return answer;
}

caseInSwitch(1);
function switchOfStuff(val) {
  var answer = "";
  switch(val)
  {
    case "a":
       answer="apple";
       console.log("apple");
       break;
    case "b":
       answer="bird";
       console.log("bird");
       break;
    case "c":
       answer="cat";
       console.log("cat");
       break;
    default:
       answer="stuff";
       console.log("stuff");
       break;
  }
  return answer;
}

switchOfStuff(1);

function sequentialSizes(val) 
{
  var answer = "";
  switch(val)
  {
  case 1:
  case 2:
  case 3:
     answer="Low";
     console.log("Low");
     break;
  case 4:
  case 5:
  case 6:
     answer="Mid";
     console.log("Mid");
     break;
  case 7:
  case 8:
  case 9:
     answer="High";
     console.log("High");
     break;
  }
  return answer;
}

sequentialSizes(1);

function chainToSwitch(val) {
  var answer = "";
  switch(val)
  {
   case "bob":
      answer = "Marley";
      break;
   case  42:
      answer = "The Answer";
      break;
   case  1: 
      answer = "There is no #1";
      break;
   case 99: 
      answer = "Missed me by this much!";
      break;
   case 7:
      answer = "Ate Nine";
      break;
  }
  return answer;
}

chainToSwitch(7);
