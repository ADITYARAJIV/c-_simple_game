/*

CREATOR: ADITYA RAJIV
THIS GAME IS THE VERY FAMOUS SNAKE AND LADDER GAME!.

YOU ARE MOST WELCOME TO SHARE YOUR OPINION'S AND ALSO PROVIDE SUGGESTION'S FOR INMPROVING IT.

ENJOY THE GAME!.

THANK YOU.

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

void display(vector<string> v) //printing the board
{
    cout<<std::setw(10);
    int i,j,cnt2=0;
    for(i=0;i<10;++i)
     {
         for(j=0;j<10;++j)
          {
            cout<<v[cnt2]<<std::setw(10);
             cnt2++;
          }
          
          cout<<endl;
         
     }
   
}

void display1(int mat[10][10],int pl,int cp) //printing the board
{
    cout<<std::setw(10);
    int i,j;
    for(i=0;i<10;++i)
     {
         for(j=0;j<10;++j)
          {
            if(mat[i][j]==cp && mat[i][j]==pl)
              cout<<"pl cp"<<std::setw(10);
              
            else if(mat[i][j]==cp)
               cout<<"cp"<<std::setw(10);
               
             else if(mat[i][j]==pl)
               cout<<"pl"<<std::setw(10);   
               
            else
              cout<<mat[i][j]<<std::setw(10);
             
          }
          
          cout<<endl;
         
     }
   
}



int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   //game description
   cout<<"\t\t\t WELCOME TO THE GAME MY DEAR FRIEND"<<endl<<endl;
   
   cout<<"THIS IS THE VERY FAMOUS SNAKE AND LADDER GAME"<<endl<<endl;
   
   cout<<"YOU SHALL PLAY AGAINST THE COMPUTER"<<endl<<endl;
   
   cout<<"\t\t\t RULES OF THE GAME ARE AS FOLLOWS "<<endl<<endl;
   
   cout<<"1.YOU START THE GAME BY CHOOSING A NUMBER FROM 1 TO 6"<<endl<<endl;
   
   cout<<"2.RANDOM NUMBER WILL BE GENERATED ACCORDING TO THE NUMBER YOU CHOOSE(THIS NUMBER WILL BE FROM 1 TO THE NUMBER YOU HAVE CHOOSEN)"<<endl<<endl;
   
   cout<<"3.SIMILARLY THE COMPUTER WILL ALSO PLAY IT'S TURN"<<endl<<endl;
   
   cout<<"4.WHO EVER REAHCES 100 FIRST WINS THE GAME!.STAY AWAY FROM SNAKES!!"<<endl<<endl;
   
   cout<<"5.THE BOARD SITUATION AFTER EVERY ROUND WILL BE DISPLAYED"<<endl<<endl;
   
   //variable needed for making of the game
   
   int r=10,c=10,num=0,pl=0,cp=0,num1=0,num2=0,num3=0;
   vector<string> v;
   vector<pair<int,pair<char,int>>>v1;
   //p is player's position and cp is computer's position
   
   string s;
   string s1="NA";
   int cnt=100,i,j,cnt1=1,cnt2=0,ch1=0,ch2=0,g=0;
   int mat[10][10];
   
   for(i=0;i<10;++i)
    {
        if(cnt1%2==0)
         {
             for(j=9;j>=0;--j)
               {
                   mat[i][j]=cnt;
                   cnt--;
               }
         }
         
        else
         {
             for(j=0;j<10;++j)
               {
                    mat[i][j]=cnt;
                    cnt--;
               }
         }
         
        cnt1++; 
    }

   
   //normal snake and ladder board without snakes and ladders.
   /* for(i=0;i<10;++i)
     {
         for(j=0;j<10;++j)
          {
             cout<<mat[i][j]<<"\t";
          }
          
          cout<<endl;
         
     }
     */
   
   //snake and ladder arrangement.
    for(i=0;i<10;++i)
     {
         for(j=0;j<10;++j)
           {
               
               if(mat[i][j]==4)
                {
                    s="L20";
                    v.push_back(s);
                 
                }
                
             else if(mat[i][j]==13)
                {
                    s="L35";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==29)
                {
                    s="L68";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==47)
                {
                    s="L62";
                    v.push_back(s);
                }
                
           else if(mat[i][j]==71)
                {
                    s="L94";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==21)
                {
                    s="S7";
                    v.push_back(s);
                }
                
           else if(mat[i][j]==39)
                {
                    s="S22";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==96)
                {
                    s="S45";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==57)
                {
                    s="S32";
                    v.push_back(s);
                }
                
            else if(mat[i][j]==78)
                {
                    s="S60";
                    v.push_back(s);
                }    
             
            else if(mat[i][j]==91)
                {
                    s="S72";
                    v.push_back(s);
                }
                
            else
             {
                
                num=mat[i][j];
                v.push_back(to_string(num));
               
              
             }
             
                    
                   
           }
           
          
     }
     
     for(i=1;i<=100;++i)
      {
           if(i==4)
                {
                    
                    v1.push_back(make_pair(i,make_pair('L',20)));
                 
                }
                
             else if(i==13)
                {
                 
                     v1.push_back(make_pair(i,make_pair('L',35)));
                }
                
            else if(i==29)
                {
               
                     v1.push_back(make_pair(i,make_pair('L',68)));
                }
                
            else if(i==47)
                {
               
                     v1.push_back(make_pair(i,make_pair('L',62)));
                }
                
           else if(i==71)
                {
                    
                     v1.push_back(make_pair(i,make_pair('L',94)));
                }
                
            else if(i==21)
                {
                    
                     v1.push_back(make_pair(i,make_pair('S',7)));
                }
                
           else if(i==39)
                {
                    
                     v1.push_back(make_pair(i,make_pair('S',22)));
                }
                
            else if(i==96)
                {
                    
                     v1.push_back(make_pair(i,make_pair('S',45)));
                }
                
            else if(i==57)
                {
                   
                    v1.push_back(make_pair(i,make_pair('S',32)));
                }
                
            else if(i==78)
                {
                   
                    v1.push_back(make_pair(i,make_pair('S',60)));
                }    
             
            else if(i==91)
                {
                    
                     v1.push_back(make_pair(i,make_pair('S',72)));
                }
                
            else
             {
                
                
                v1.push_back(make_pair(i,make_pair('N',0)));
               
              
             }
      }
    
    
    cout<<"DO YOU WANT TO SEE HOW THE BOARD LOOKS LIKE?.IF YES PRESS 1"<<endl;
    cin>>g;
    if(g==1)
        display(v);
    
    
    cout<<endl; 
    cout<<"WHERE EVER THERE IS A SNAKE OR A LADDER,IT IS INDICATED BY 'S' OR 'L' FOLLOWED BY AN INTEGER WHICH MEANS YOU END UP AT THAT POINT."<<endl<<endl;
    cout<<"OKAY SO LET'S START."<<endl;
   
    cnt=30;
    while(cnt--)
    {
        cout<<"ENTER ANY NUMBER OF YOUR CHOICE BETWEEN 1 AND 6 "<<endl;
        cin>>num1;
        ch1=getrandomnumber(1,num1);
        cout<<"NUMBER YOU ACTUALLY GOT IS "<<ch1<<endl;
        if(pl+ch1<=100)//you cant win if you get more than 100.
           pl+=ch1;
        if(pl==100)
          break;
           
        num2=getrandomnumber(1,6);
        ch2=num2;
        cout<<"NUMBER COMPUTER ACTUALLY GOT IS "<<ch2<<endl;
         if(cp+ch2<=100)//computer can't win if it gets more than 100. cp+=ch2;
           cp+=ch2;
           
         if(cp==100)
            break;
        
         
         for(i=0;i<100;++i)
          {
              if(v1[i].first==pl)
                {
                    if(v1[i].second.first=='N')
                      break;
                      
                    else
                     { pl=v1[i].second.second;
                        break;
                     }
                }
          }
         
         for(i=0;i<100;++i)
          {
              if(v1[i].first==cp)
                {
                    if(v1[i].second.first=='N')
                      break;
                      
                    else
                     { cp=v1[i].second.second;
                        break;
                     }
                }
          } 
          
          
          
         
         
         cout<<"DO YOU WANT TO SEE THE CURRENT SITUATION OF THE GAME BOARD?.IF YES ENTER 1"<<endl;
         cin>>g;
         if(g==1)
            {  cout<<endl<<endl;
                display1(mat,pl,cp);
                cout<<endl<<endl;
            }
           
        
        
    }
  
   //displaying winner of the game
    if(pl==100)
      cout<<"WOW YOU WON!!!!!!!"<<endl;
      
    else if(cp==100)
      cout<<"SORRY YOU LOST."<<endl;
  
    else
      cout<<"GAME WENT ON FOR TOO LONG!!"<<endl;
   
     return 0;
}