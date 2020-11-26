// Remove whitespace
let sample = "Whitespace is important in separating words";
let countNonWhiteSpace = /\s/g; 
let result = sample.match(countNonWhiteSpace);

//Count non whitespace
let sample = "Whitespace is important in separating words";
let countNonWhiteSpace = /\S/g; 
let result = sample.match(countNonWhiteSpace);

//Specify upper and  number of matches
let ohStr = "Ohhh no";
let ohRegex = /Oh{3,6}\sno/; 
let result = ohRegex.test(ohStr);

//specify only lower number of matches
let haStr = "Hazzzzah";
let haRegex = /Haz{4,}ah/; 
let result = haRegex.test(haStr);

//Exact number of matches
let timStr = "Timmmmber";
let timRegex = /Tim{4}ber/; 
let result = timRegex.test(timStr);

//Check All or none
let favWord = "favorite";
let favRegex = /favou?rite/; 
let result = favRegex.test(favWord);

//Mixed Grouping of characters check
let myString = "Eleanor Roosevelt";
let myRegex = /(Franklin|Eleanor).*Roosevelt/; 
let result = myRegex.test(myString); 

