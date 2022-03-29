/*

CREATOR: ADITYA RAJIV
THIS GAME IS SIMILAR TO THE GUESS THE NUMBER WIN THE PRIZE GAME IN CASINO'S.

YOU ARE MOST WELCOME TO SHARE YOUR OPINION'S AND ALSO PROVIDE SUGGESTION'S FOR INMPROVING IT.

ENJOY THE GAME!.

THANK YOU.

*/


#include <bits/stdc++.h>

using namespace std;

int getrandomnumber(int n)//random number generating function.
{ 
    //method 1
    srand(time(NULL));// it will take seed as input.
    return rand()%n;
    
    /*
    //method 2
    std::random_device rd;//this will generate even non deterministic random numbers.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    return dis(gen)%n;
    */
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   int i,n,g,p=5,num=0;
   string s;//variables needed to play
   
  
   cout<<"\t\t\tWELCOME TO CASINO ROYALE "<<endl<<endl;
   
   cout<<"ENTER THE NUMBER OF GAMES YOU WANT TO PLAY"<<endl<<endl;
   cin>>n;
   
   //game description
   cout<<"THE GAME GOES LIKE THIS\nYOU WILL HAVE TO GUESS A NUMBER(RANGE IS 0 TO 100) BY ASKING QUESTIONS"<<endl<<endl;
   
   cout<<"QUESTIONS CAN BE LIKE : "<<endl;
   cout<<"\t\t 1. GREATER (IT MEANS THE NUMBER YOU CHOSE IS GREATER THAN THE ACTUAL NUMBER)"<<endl;
   
   cout<<"\t\t 2. LESSER (IT MEANS THE NUMBER YOU CHOSE IS LESSER THAN THE ACTUAL NUMBER)"<<endl;
   
   cout<<"\t\t IF YOU GUESS THE NUMBER CORRECTLY WITHIN 5 TRIALS..YOU WIN!!"<<endl<<endl;
   
   cout<<"YOU SHALL RECIEVE ANSWER FROM THE COMPUTER IN THE FORM OF YES OR NO"<<endl<<endl;
   
   cout<<"SO LET'S BEGIN! "<<endl<<endl;
   
   for(i=0;i<n;++i)
    {
        g=getrandomnumber(100);
      
        p=5;
        while(p--)
        {
            cout<<"ENTER THE NUMBER YOU ARE GUESSING :"<<endl;
            cin>>num;
            if(num==g)
               break;
               
            else
             {
               if(p!=0)
			   {
				   
                  cout<<"ENTER YOUR QUESTION : "<<endl;
                 cin>>s;
                 if(num<g)
                  {
                      if(s=="LESSER")
                        cout<<"YES"<<endl;
                        
                     else
                       cout<<"NO"<<endl;
                  }
                  
                 else
                  {
                      if(s=="GREATER")
                        cout<<"YES"<<endl;
                        
                     else
                       cout<<"NO"<<endl;
                  }
                  
              }
             }
        }
        
        if(num==g)
           cout<<"YOU WIN CONGRAGULATIONS!!!!!!"<<endl;
           
        else
          cout<<"SORRY YOU LOST!"<<"THE NUMBER WAS "<<g<<endl;
    }
     
   
     return 0;
}