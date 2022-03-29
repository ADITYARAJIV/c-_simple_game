/*

CREATOR: ADITYA RAJIV.

GAME: HAND CRICKET.

YOU ARE ALWAYS WELCOME TO SUGGEST ME SOME CHANGES IN THE GAME TO MAKE IT MORE EXCITING!.

ENJOY THE GAME!.

*/


#include <bits/stdc++.h>

using namespace std;

int getrandomnumber(int low,int high)//random number generating function.
{ 
    //method 1
    int num=0;
    srand(time(NULL));// it will take seed as input.
    num=low+(rand()%((high+1)-low));
    return num;//low is lowest possible result and high is highest possible result.
    


    //method 2
   /* 
    std::random_device rd;//this will generate even non deterministic random numbers.
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 6);
    return dis(gen)%n;
    */
    
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   //variables required
   
   int num1=0,num2=0,plscore=0,cpscore=0;
   string s;
   string s1[2]={"BATTING","BOWLING"};
   string s2;
   cout<<"\t\tWELCOME TO THE GAME MY DEAR FRIEND."<<endl<<endl;
   cout<<"THIS IS THE FAMOUS GAME \"HAND CRICKET\" "<<endl<<endl;
   
   cout<<"OKAY SO LET'S START!."<<endl;
   
   cout<<"ODD OR EVEN ?."<<endl;
   
   cin>>s;
   
   cout<<"ENTER ANY NUMBER FROM 1 TO 6."<<endl;
   cin>>num1;
   num2=getrandomnumber(1,6);
   if((num1+num2)%2==0)
     {
         if(s=="EVEN")
           {
               cout<<"YOU HAVE WON THE TOSS. WOULD DO YOU WANT TO DO ? "<<endl;
               cout<<"TYPE BATTING OR BOWLING RESPECTIVELY."<<endl;
               
               cin>>s2;
               
               if(s2=="BATTING")
                 {
                     cout<<"OKAY SO YOU ARE BATTING AND YOU HAVE ONLY ONE WICKET "<<endl;
                     
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         plscore+=num1;
                         if(num1==num2)
                           {   plscore-=num1;
                               break;
                           }
                            
                       
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                     
                    cout<<"TARGET SCORE FOR COMPUTER IS"<< plscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BOWLING AND COMPUTER IS BATTING "<<endl;
                    
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                            {  cpscore-=num2;
                                break;
                            }
                          
                         if(cpscore>plscore)
                            break;
                       
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                      
                    else if(cpscore==plscore)
                        cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<< cpscore<<" RUNS"<<endl;
                 }
                 
               else
                {
                        cout<<"OKAY SO YOU ARE BOWLING AND COMPUTER HAS ONLY ONE WICKET "<<endl;
                        
                         
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                            {  cpscore-=num2;
                                break;
                            }
                            
                       
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                     cout<<"TARGET SCORE FOR YOU IS "<< cpscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BATTING AND COMPUTER IS BOWLING "<<endl;
                    
                      
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         plscore+=num1;
                         num2=getrandomnumber(1,6);
                         if(num1==num2)
                           {   plscore-=num1;
                               break;
                           }
                         
                         if(plscore>cpscore) 
                            break;
                        
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                       
                      
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                    
                    else if(cpscore==plscore)
                      cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<< cpscore<<" RUNS"<<endl;   
                       
                }
               
           }
           
         else
          {
              cout<<"COMPUTER HAS WON THE TOSS."<<endl;
              cout<<"COMPUTER HAS DECIDED TO DO "<<endl;
              num2=getrandomnumber(0,1);
              cout<<s1[num2];
              
              if(s1[num2]=="BATTING")
              {
                 cout<<"OKAY SO YOU ARE BOWLING AND COMPUTER HAS ONLY ONE WICKET "<<endl;
                        
                         
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                           {  cpscore-num2;
                               break;
                           }
                            
                         
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                     cout<<"TARGET SCORE FOR YOU IS "<< cpscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BATTING AND COMPUTER IS BOWLING "<<endl;
                    
                      
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         plscore+=num1;
                         if(num1==num2)
                           {   plscore-=num1;
                               break;
                           }
                         
                         if(plscore>cpscore)
                            break;
                         
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                       
                      
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                    
                    else if(cpscore==plscore)
                      cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<< cpscore<<" RUNS"<<endl;   
              }
              
             else
              {
                   cout<<"OKAY SO YOU ARE BATTING AND YOU HAVE ONLY ONE WICKET "<<endl;
                     
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         plscore+=num1;
                         num2=getrandomnumber(1,6);
                         if(num1==num2)
                           {   plscore-=num1;
                               break;
                           }
                            
                       
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                     
                    cout<<"TARGET SCORE FOR COMPUTER IS "<< plscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BOWLING AND COMPUTER IS BATTING "<<endl;
                    
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                          {   cpscore-=num2;
                              break;
                          }
                         
                         if(cpscore>plscore)
                            break;
                     
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                      
                    else if(cpscore==plscore)
                        cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<<cpscore<<" RUNS"<<endl;
              }
              
          }
     }
     
    else
     {
         if(s=="EVEN")
           {
              cout<<"COMPUTER HAS WON THE TOSS."<<endl;
              cout<<"COMPUTER HAS DECIDED TO DO "<<endl;
              num2=getrandomnumber(0,1);
              cout<<s1[num2];
            
              if(s1[num2]=="BATTING")
              {
                   cout<<"OKAY SO YOU ARE BOWLING AND COMPUTER HAS ONLY ONE WICKET "<<endl;
                        
                         
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                            {   cpscore+=num2;
                                 break;
                            }
                            
                      
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                     cout<<"TARGET SCORE FOR YOU IS "<< cpscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BATTING AND COMPUTER IS BOWLING "<<endl;
                    
                      
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         plscore+=num1;
                         if(num1==num2)
                            {   plscore-=num1;
                                break;
                            }
                         if(plscore>cpscore)
                            break;
                  
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                       
                      
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                    
                    else if(cpscore==plscore)
                      cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<< cpscore<<" RUNS"<<endl;
              }
              
             else
              {
                    cout<<"OKAY SO YOU ARE BATTING AND YOU HAVE ONLY ONE WICKET "<<endl;
                     
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         if(num1==num2)
                            break;
                            
                         else
                           plscore+=num1;
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore<<endl<<endl;  
                     }
                     
                    cout<<"TARGET SCORE FOR COMPUTER IS "<< plscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BOWLING AND COMPUTER IS BATTING "<<endl;
                    
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                           {   cpscore-=num2;
                               break;
                           }
                         
                         if(cpscore>plscore)   
                             break;
                         
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<< cpscore<<" RUNS"<<endl;
                      
                    else if(cpscore==plscore)
                        cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<<cpscore<<" RUNS"<<endl;
              }
           }
           
         else
          {
               cout<<"YOU HAVE WON THE TOSS. WOULD DO YOU WANT TO DO ? "<<endl;
               cout<<"TYPE BATTING OR BOWLING RESPECTIVELY."<<endl;
               
               cin>>s2;
               
               if(s2=="BATTING")
                 {
                      cout<<"OKAY SO YOU ARE BATTING AND YOU HAVE ONLY ONE WICKET "<<endl;
                     
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         plscore+=num1;
                         num2=getrandomnumber(1,6);
                         if(num1==num2)
                           {  plscore-=num1;
                               break;
                           }
                            
                         
                         cout<<"YOUR CURRENT SCORE IS "<<plscore<<endl<<endl;  
                     }
                     
                    cout<<"TARGET SCORE FOR COMPUTER IS "<< plscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BOWLING AND COMPUTER IS BATTING "<<endl;
                    
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         cpscore+=num2;
                         if(num1==num2)
                            {  cpscore-=num2;
                                break;
                            }
                          
                         if(cpscore>plscore)
                            break;
                         
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<<cpscore<<" RUNS"<<endl;
                      
                    else if(cpscore==plscore)
                        cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS COMPUTER GOT OUT AFTER SCORING "<<cpscore<<" RUNS"<<endl;
                 }
                 
               else
                {
                     cout<<"OKAY SO YOU ARE BOWLING AND COMPUTER HAS ONLY ONE WICKET "<<endl;
                        
                         
                    while(1)
                    {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                        
                         num2=getrandomnumber(1,6);
                          cpscore+=num2;
                         if(num1==num2)
                           {   cpscore-=num2;
                               break;
                           }
                            
                         
                           
                         cout<<"COMPUTER'S CURRENT SCORE IS "<< cpscore<<endl;  
                    }
                    
                     cout<<"TARGET SCORE FOR YOU IS "<< cpscore+1<<endl<<endl;
                    
                    cout<<"NOW YOU ARE BATTING AND COMPUTER IS BOWLING "<<endl;
                    
                      
                     while(1)
                     {
                         cout<<"ENTER A NUMBER FROM 1 TO 6 "<<endl;
                         cin>>num1;
                         num2=getrandomnumber(1,6);
                         plscore+=num1;
                         if(num1==num2)
                            {  plscore-=num1;
                                break;
                            }
                          
                         if(plscore>cpscore)
                            break;
                        
                           
                         cout<<"YOUR CURRENT SCORE IS "<< plscore <<endl<<endl;  
                     }
                       
                      
                    if(cpscore>plscore)
                      cout<<"SORRY FRIEND YOU HAVE LOST THE MATCH AS COMPUTER SCORED "<<cpscore<<" RUNS"<<endl;
                    
                    else if(cpscore==plscore)
                      cout<<"IT WAS A DRAW MATCH!.BETTER LUCK NEXT TIME"<<endl;
                      
                    else
                     cout<<"CONGRAGULATIONS YOU HAVE THE GAME AS YOU HAVE SCORED "<< plscore<<" RUNS"<<endl;
                }
          }
     }
   
     return 0;
}