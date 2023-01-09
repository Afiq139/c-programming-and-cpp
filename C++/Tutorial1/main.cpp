#include <iostream>

using namespace std;

int main()
{
    cout << "----------------------------" << endl;
    cout << "Drawing a Shape --- 12.30" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;
    cout << "   /|" << endl;
    cout << "  / |" << endl;
    cout << " /  |" << endl;
    cout << "/___|" << endl;


    cout << "" << endl;
    cout << "" << endl;
    /* cout - console out */
    /* endl - endline */

    cout << "----------------------------" << endl;
    cout << "Variables --- 19.54" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    string characterName = "John";
    int characterAge;
    characterAge = 35;

    cout << "there once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    characterName = "Mike";
    cout << "He like the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;


    cout << "" << endl;
    cout << "" << endl;



    cout << "----------------------------" << endl;
    cout << "Data Types --- 31.43" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;
        /* data types - types of information 32.47 */
    char grade = 'A'; /*1 character */
    string phrase = "Shafiq Engineering"; /* many Characters */
    float gpa1 = 3.3;   /*few decimals*/
    double  gpa2 = 3.3;  /*many decimals*/
    bool isMale = true; /*true or false */

    cout << grade << endl;
    cout << phrase << endl;
    cout << gpa1 << endl;
    cout << gpa2 << endl;
    cout << isMale << endl;

    cout << "" << endl;
    cout << "" << endl;

    cout << "----------------------------" << endl;
    cout << "Working with Strings --- 39.15" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    cout << "Shafiq Engineering\n";
    cout << "Hello" << endl;

    string phrase1 = "Shafiq Engineering";
    cout << phrase1 << endl;;
    cout << phrase1.length() << endl; /* how many characters in that variable */
    cout << phrase1[0] << endl; /* accessing individual characters */
    cout << phrase1[4] << endl;

    phrase1[3] = 'B';
    cout << phrase1[3]<< endl;
    cout << phrase1 << endl;;

    cout << phrase1.find("Engineering", 0); /* finding index position from 0 */
    cout << "" << endl;
    cout << phrase1.substr(8,3); /* start with 'i' will grab 3 characters */

    cout << "" << endl;
    string phrase2 = "My website is nice";
    string phrase2sub;
    phrase2sub = phrase2.substr(8, 3);
    cout << phrase2sub;


    cout << "----------------------------" << endl;
    cout << "Working with Numbers --- 48.59" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;



    cout << "" << endl;
    cout << "" << endl;

    return 0;
}
