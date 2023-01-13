#include <iostream>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }
    return result;
}

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

    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    }

    cout << "" << endl;

    int nums[] = {1, 2, 5, 7, 3};
    for(int x = 0; x < 5; x++){
        cout << nums[x] << endl;
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Exponent Function --- 2.39.32 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    cout << power(4, 2) << endl;


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "2D Arrays & Nested Loops --- 2.45.20 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;


    cout << "" << endl;
    cout << "" << endl;

    return 0;
}
