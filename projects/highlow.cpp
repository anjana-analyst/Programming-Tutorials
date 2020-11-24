#include <iostream>
#include <cstdlib>
using namespace std;
void highlow()
{
    const int total_chance=3;
    int number;
    int guesses;
    int chances=0,score=0;
    char ans;
    number=(int)(rand()%100);
    do
    {
     cout<<"What is your guess? (0 to 100) ";
     cin>>guesses;
     if((guesses<0)||(guesses>100))
     {
	   cout<<"Sorry, but your guess "<<guesses<<"must be from 0 to 100.";
     }
     else if(guesses < number)
     {
	   cout<<guesses<<" is low.Try a higher number.";
     }
     else if(guesses > number)
     {
	   cout<<guesses<<" is high.Try a lower number.";
     }
     else
     {
	  cout<<guesses<<" is correct. Congratulations!";
	  score=100;   
	  cout<<"Your score is "<<score<<endl;
      break;
     }
     chances++;
     if(guesses!=number)
	 cout<<"Now you have "<<total_chance-chances<<"chances left."<<endl;
     if(chances==total_chance)
	 { 
	     cout<<"Only "<<total_chance<<"chances are allowed.Better luck next time";
	     cout<<"The actual number was "<<number<<endl;
	     break;
	 }
     }while (guesses!=number);
}
int main()
{
     char choice;
     cout<<"Hello!";
     do
     {
      cout<<"\n"<<"Welcome to High Low game"<<endl;
      cout<<"I will choose a number from 0-100 predict what number it is\n";
      cout<<"Ready to play?";
      cin>>choice;
      if(choice=='y'|| choice=='Y')
      {
        highlow();
        cout<<"want to play again?";
        cin>>choice;
      }
      cout<<"Thanks for playing";
    }while(choice=='y' || choice=='Y');

    return 0;
}
