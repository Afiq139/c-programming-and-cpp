#include <iostream>

using namespace std;

int main()
{
    cout << "----------------------------" << endl;
    cout << "While Loops --- 2.10.47 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    int index = 0;
    do{
        cout << index << endl;
        index++;
    }while(index <= 5);

    /*while(index <= 5){
        cout << index << endl;
        index++;
    }*/


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Building a Guessing Game --- 2.18.53 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }else {
            outOfGuesses = true;
        }
    }

    if(outOfGuesses){
        cout << "You lose!";
    }else {
        cout << "You Win!";
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "For Loops --- 2.29.17 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;


    cout << "" << endl;
    cout << "" << endl;

    return 0;
}
