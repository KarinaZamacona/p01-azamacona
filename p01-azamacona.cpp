#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{

        srand ( (unsigned) time( NULL ) ); //random seed
        int randomNumber, guess;
        randomNumber = rand()%10+1;
                do
                {
                        cout<<"Guess the computer's number!"<<endl;
                        cin>>guess;
                        if (randomNumber==guess)
                        {
                                cout<< "You, guessed correctly! You win!"<<endl;
                        }
                        else
                        { 
                                cout<< "Try again! You were off by: "<< abs(randomNumber-guess)<<endl;
                        }
                }while (randomNumber!=guess);
        return 0;
}
