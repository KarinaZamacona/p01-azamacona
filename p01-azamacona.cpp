#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
        string x;

        srand ( time( NULL ) ); //random seed
        int randomNumber,  guess;
        do
        {
                cout<<"Select a difficulty level: Easy, Medium, or Hard"<<endl;
                cout<<"Select Q to quit game"<<endl;
                cin>>x;
                if(x== "Easy")
                {
                        cout<<"Guess a number between 1 and 2!"<<endl;
                        cin>>guess;
                        randomNumber=rand()%2+1;

                        if (randomNumber==guess)
                        {
                                cout<< "You, guessed correctly! You win!"<<endl;
                        }
                        else
                        { 
                                cout<< "You lose, you were off by: "<< abs(randomNumber-guess)<<endl;
                        }
                }
                else if(x=="Medium")
                {
                        cout<<"Guess a number between 1 and 10!"<<endl;
                        randomNumber=rand()%10+1;
                        for(int i=0; i<2;i++)
                        {
                                cin>>guess;
                                if (randomNumber==guess)
                                {
                                        cout<<"You, guessed correctly! You win!"<<endl;
                                        break;
                                }
                                else if (randomNumber<guess)
                                {
                                        cout<<"Try one more time, guess lower!"<<endl;
                                }
                                else
                                {
                                        cout<<"Try one more time, guess higher!"<<endl;
                                }
                        }
                        if (randomNumber!=guess)
                        {
                                cout<<"You were off by: "<<abs(randomNumber-guess)<< ". Sorry you lose!"<<endl;
                        }
                }
                else if(x=="Hard")
                {
                        cout<<"Guess a number between 1 and 100!"<<endl;
                        randomNumber=rand()%100+1;
                        for(int i=0; i<3;i++)
                        {
                                cin>>guess;
                                if (randomNumber==guess)
                                {
                                        cout<<"You, guessed correctly! You win!"<<endl;
                                        break;
                                }
                                else if (randomNumber<guess)
                                {
                                        cout<<"Try one more time, guess lower!"<<endl;
                                }
                                else
                                {
                                        cout<<"Try one more time, guess higher!"<<endl;
                                }
                        }
                        if (randomNumber!=guess)
                        {
                                cout<<"You were off by: "<<abs(randomNumber-guess)<< ". Sorry you lose!"<<endl;
                        }
                }

        }while (x!="Q");
        return 0;
}
