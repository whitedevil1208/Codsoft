#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num=(rand() %10)+1;

    cout<<"********************Welcome To Guessing Game!!******************* "<<endl;

    do
    {
      cout<<"Enter your guess(1-10): ";
      cin>>guess;
      tries++;

      if(guess>num){
        cout<<"Too High!"<<endl;
      }
      else if (guess<num)
      {
        cout<<"Too low !!"<<endl;
      }
      else{
        cout<<"Correct you guessed in "<<tries<<" tries"<<endl;
        cout<<"Thanks for Playing!!"<<endl;
      }
      
    } while (guess!=num);
    
    return 0;
    
  }