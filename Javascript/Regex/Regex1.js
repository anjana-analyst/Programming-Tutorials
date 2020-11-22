let myString = "Hello, World!";
let myRegex = /Hello/;
let result = myRegex.test(myString); //it will be either 0 if true 1-false
//It's case sensitive too
//you can search for more than one string
let petString = "James has a pet cat.";
let petRegex = /dog|cat|bird|fish/; 
let result = petRegex.test(petString);

//to search irrespective of any case use ignoreCase-i flag
let myString = "freeCodeCamp";
let fccRegex = /FreeCodeCamp/i; 
let result = fccRegex.test(myString);

//match method returns the word it found
let extractStr = "Extract the word 'coding' from this string.";
let codingRegex = /coding/; 
let result = extractStr.match(codingRegex); 

//to find pattern use g flag-global
let twinkleStar = "Twinkle, twinkle, little star";
let starRegex = /Twinkle/ig; 
let result = twinkleStar.match(starRegex); 

//match using wildcard period(.)
let exampleStr = "Let's have fun with regular expressions!";
let unRegex = /.un/; 
let result = unRegex.test(exampleStr);

//match single character with multiple possibilities
let bigStr = "big";
let bagStr = "bag";
let bugStr = "bug";
let bogStr = "bog";
let bgRegex = /b[aiu]g/;
bigStr.match(bgRegex); // Returns ["big"]
bagStr.match(bgRegex); // Returns ["bag"]
bugStr.match(bgRegex); // Returns ["bug"]
bogStr.match(bgRegex); // Returns null

//match letters using character set using (-) character
let quoteSample = "The quick brown fox jumps over the lazy dog.";
let alphabetRegex = /[a-z]/gi; 
let result = quoteSample.match(alphabetRegex); 

//match charcters other than specified
let quoteSample = "3 blind mice.";
let myRegex = /[^0-9aeiou]/gi; 
let result = quoteSample.match(myRegex); 

//find more than one match for a single character 
//eg-missisippi
let difficultSpelling = "Mississippi";
let myRegex = /s+/g; 
let result = difficultSpelling.match(myRegex);

//zero or more times
let chewieRegex = /Aa*/; 
let result = chewieQuote.match(chewieRegex);



