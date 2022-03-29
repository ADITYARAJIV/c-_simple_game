#include <bits/stdc++.h>
 
using namespace std;
 
int getrandomnumber(int n)//random number generating function.
{ 
    //method 1
    srand(time(NULL));// it will take seed as input.
    return rand()%n;
    
    //method 2
    std::random_device rd;//this will generate even non deterministic random numbers.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    return dis(gen)%n;
} 
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   
   //game description.
   cout<<"\t\t\tWELCOME TO THE GAME MY DEAR FRIEND"<<endl<<endl;
   
   cout<<"THIS IS DRAGON BALL Z"<<endl<<endl;
   
   cout<<"YOU ARE GOKU AND YOUR OPPONENT(COMPUTER) IS VEGETA "<<endl<<endl;
   
   cout<<"\t\tBOTH OF YOU HAVE A TOTAL INITIAL HEALTH EQUAL TO 200"<<endl;
   
   cout<<"EACH TURN YOU CAN PERFORM ONE OF THE FOLLOWING MOVES."<<endl<<endl;
   cout<<"1.ATTACK(CHOOSING AN ATTACK OUT OF 4 AVAILABLE OPTIONS)"<<endl;
   cout<<"2.BLOCK"<<endl;
   cout<<"3.CHARGE UP"<<endl;
   cout<<"EVEN THE COMPUTER CAN PERFORM ANY OF THESE MOVES."<<endl;
   
   cout<<"WHOSEVER HEALTH BECOMES 0 OR NEGATIVE FIRST LOSSES THE GAME!."<<endl<<endl;
   
   cout<<"OKAY SO LET'S GET STARTED.";
   
   
   //making the GAME
   
   string attack1[4]={"kamehameha","spiritbomb","solarflare","kaioken"};//goku's moves.
 
   string attack2[4]={"galickgun","bigbang","greatape","fireblast"};//vegeta's moves.
   
   /*
   
   for goku:
       attack      damage      charge needed
    1. kaioken       20             2 
    2. kamehameha    40             3
    3. solarflare    -              4    (oppenent turn is skipped)         
    4. spiritbomb    120            5
    
    for vegeta:
       attack      damage      charge needed
    1. galickgun      20             2 
    2. fireblast      40             3
    3. greatape       -              4    (attack for next turn will give damage+ 20)         
    4. bigbang       120             5
    
   */
   
   int flag=0,d=0;//extra damge for greaterape.
   int num1=0,num2=0,ch1=0,ch2=0;//ch1-charge of goku ch2-charge of vegeta
   int hp1=200,hp2=200;
   
   while(1)
   {
       cout<<"ENTER YOUR OPTION ACCORDING TO WHAT YOU WANT TO DO."<<endl;
       cout<<"1.ATTACK\n2.BLOCK\n3.CHARGEUP"<<endl;
       
       cin>>num1;
       if(num1==1)
        {
            if(ch1<2)
            {
              cout<<"SORRY YOU DON'T HAVE ENOUGH CHARGE"<<endl;
              
            num2=getrandomnumber(3);
            if(num2==0)
             {
                 if(ch2>=5)
                    {
                        cout<<"VEGETA USED BIGBANG ON YOU"<<endl;
                     if(d==1)    
                     {
                        hp1-=120;
                        hp1-=20;
                        ch2-=5;
                        d=0;
                     }
                     
                     else
                      {
                          hp1-=120;
                          ch2-=5; 
                      }
                    }
                    
                 else if(ch2>=4)
                 {
                     
                    cout<<"VEGETA USED GREATERAPE MODE"<<endl; 
                     if(d==0)
                        d=1;
                        
                     ch2-=4;        
                 }
                 
                 else if(ch2>=3)
                  {
                        cout<<"VEGETA USED FIREBLAST ON YOU"<<endl;
                     if(d==1)    
                     {
                        hp1-=40;
                        hp1-=20;
                        ch2-=3;
                        d=0;
                     }
                     
                     else
                      {
                          hp1-=40;
                          ch2-=3; 
                      }
                  }
                  
                  else if(ch2>=2)
                   {
                          cout<<"VEGETA USED GALICKGUN ON YOU"<<endl;
                     if(d==1)    
                     {
                        hp1-=20;
                        hp1-=20;
                        ch2-=2;
                        d=0;
                     }
                     
                     else
                      {
                          hp1-=20;
                          ch2-=2; 
                      }
                   }
                   
                   else
                    {
                        cout<<"LESS CHARGE VEGETA CAN'T MAKE A MOVE."<<endl;
                    }
                   
             }
             
             else if(num2==1)
               {
                   cout<<"VEGETA USED BLOCK"<<endl;
               }
               
             else
              {
                   cout<<"VEGETA IS CHARGING NOW"<<endl;
                   ch2++;
              }
              
            }
            
            else
            {
                cout<<"ENTER YOUR OPTION ACCORDING TO THE ATTACK YOU WANT TO DO"<<endl;
                
                cout<<"1.kamehameha 2.spiritbomb 3.solarflare 4.kaioken"<<endl;
                cin>>num1;
                if(num1==1)
                 {
                     
                 }
                 
                else if(num2==1)
                  {
                      
                  }
            }
        }
        
       else if(num1==2)
       {
           cout<<"GOKU USED BLOCK"<<endl;
       }
       
       else
        {
            
        }
        
       
   }
   
   
   
     return 0;
}