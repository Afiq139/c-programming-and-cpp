#include <iostream>
#include <cmath>

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

    cout << -30.45 << endl;
    cout << -30 << endl;
    cout << 5 + 7 << endl;
    cout << 10 % 7 << endl; /* getting remainders */
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5)* 10 << endl;

    int wnum = 5;
    double dnum = 5.5;

    /*wnum++, wnum--,wnum += 80, wnum *=, wnum -=, wnum /= */

    cout << wnum + dnum <<endl;

    cout << 10/3 << endl;
    cout << 10.0/3.0 << endl;

    cout << pow(2, 5) << endl; /* fromm #include <cmath> */
    cout << sqrt(36) << endl; /* fromm #include <cmath> */
    cout << round(36.7) << endl; /* fromm #include <cmath> */
    cout << ceil(36.1) << endl; /* fromm #include <cmath> */
    cout << floor(36.8) << endl; /* fromm #include <cmath> */
    cout << fmax(36, 8) << endl; /* telling which one is bigger, fromm #include <cmath> */
    cout << fmin(36, 8) << endl; /* telling which one is smaller, fromm #include <cmath> */

    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Getting User Input --- 59.41" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "You are " << name << endl;

    cout << "" << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    cout << "" << endl;

    char age0;
    cout << "Enter your age: ";
    cin >> age0;
    cout << "You are " << age0 << " years old" << endl;

    cout << "" << endl;





    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Building a Calculator --- 1:05:31" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;


    cout << "" << endl;
    cout << "" << endl;

    return 0;
}
