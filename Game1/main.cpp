//
//  main.cpp
//  Game1
//
//  Created by willis kabuye on 2025-01-09.
//

#include <iostream>

#include <cstring>

#include <iomanip>

#include <ctime>

#include <cstdlib>

#include <sstream>

using namespace std;


char color;

char svar;
char svar2;
bool loop=true;

char num;
char insats;

char slumptal;

char Lose;
bool lop=true;
int bet;

int saldo;

int main(){
    
    
    int number;
    int Slump=rand() % 36 + 1;
    int Color=rand() %  4 + 1;
    
    srand(time_t(0));
    
    
    while(true){
    
    
    
    cout << "Welcome to Roulette!\n";
    
    cout << endl;
    
    cout <<"Start Meny " << endl <<endl;
    
    
    
        while(loop){ // loop börjar när jag lägger bet
            //while (loop3)
            cout <<"Choose your bet: 100, 300, or 500\n";
            
            cin >> bet;
            
            
            
            
            
            if( bet ==100){
                
                cout<< " Your Bet " << bet <<endl;
                
                loop=false;
                
            }
            
            
            
            else if( bet ==300){
                
                cout<< "Your bet " << bet <<endl;
                
                loop=false;
                
            }
            
            
            
            
            
            else if( bet ==500){
                
                cout<< "Your bet " <<bet <<endl;
                
                loop=false;
                
            }
            
            else{
                
                cout << "Please try again\n";
                
                loop=true;
                
            }
            
        }
        
        
        
        while(lop){ // loop för välja färg eler nummer
            
            cout << "Choose A color Or Number( n or c):" << endl;
            
            cin>> svar;
            
            
            
            
            
            
        if(svar=='c'){
                
                
                cout << "Choose color: red or Black: " << endl;
                
                cin>> color;
                
            
                
                
                
                
                if(color == 'r'){
                    
                    
                    cout<< "Your color is red\n";
                    cout << "Wining Color:\n" << Color<< endl;
                    
                        if(Color == 2){
                        bet = bet * 2;
                        cout << "You Won" << endl;
                        cout << "Profit:" << bet << endl;
                        }
                        else {
                        bet = bet / 2;
                        cout << "Sorry you love\n";
                        cout << " Left: " << bet << endl;
                        }
                    /*cout << " spela igen j/n\n"; // loopa här med loop 4
                    if( svar2 == 'j'){
                        spelloop = true;
                        
                    }else if( svar2 == 'n'){
                        spelloop= false;} // loop med loop 4*/

                    
                    
                    
                        }
                else if(color == 'b'){
                    
                    cout<< "Your color is black\n";
                    cout << "Winning Color:\n" << Color << endl;
                    
                    if(Color == 1){
                        bet = bet * 2;
                        cout << "You Won" << endl;
                        cout << " Profit" << bet << endl;
                    }
                    else
                    {
                        bet = bet / 2;
                        cout <<"Sorry You Lose\n";
                        cout << "Saldo: " << bet << endl;
                    }
                    
                }
                lop=false;
            }
            
            
        
            
        
            else if(svar=='n'){
                
                cout << "Choose Number: 1-36: "; // ta bort slump om det in funkae.;//
                
                cin>> number;
                
                
                
                
                
                if((number >=1) && (number <=36)){
                    
                    cout<< "Your Number: " << number <<endl;
                    
                    
                    
                    // ändra slumptal på alla
                        
                        cout << "Random Winning Number: " << 1+(rand()%36)<< endl;
                        
                            if(number == 2){
                            
                            bet = bet * 10;
                            
                            cout << "You Won" << endl;
                            
                            
                            cout << "Profit: "<< bet << endl;
                            }
                        
                            else
                            {
                            bet = bet / 10; // vid förlust
                            cout <<"Sorry You Lose\n";
                            cout <<"saldo"<<bet <<endl;
                            }
                    
                            lop=false;
                }
                
                else{
                    cout<<"wrong input";
                    lop=true;
                }
                
               

                cout << " spela igen j/n\n"; // loop till start meny
                cin >> svar2;
                if( svar2 == 'n'){
                    cout<<"Game over" << endl;
                    return 0;
                    }
                    

        
        }
        
            }
        

    }
    
    }

