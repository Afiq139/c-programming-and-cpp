#include <iostream>

using namespace std;

/*void sayHi(string name, int age){
    cout << "Hello " << name << ".\nYou are "<< age << " years old."<< endl;
     }
*/ /* Function */


void sayHi(string name, int age); /*function's stop/signature   */

int main()
{

    cout << "----------------------------" << endl;
    cout << "Building a Mad Libs Game --- 1:09:27" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);



    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << "I love " << celebrity << endl;



    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Arrays --- 1:13:44" << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    /*int luckyName[] = {4, 8, 15, 16, 23, 42};
    luckyName[0] = 19;
    cout << luckyName[0]; */

    /*int luckyName[20] = {4, 8, 15, 16, 23, 42};
    luckyName[10] = 100;
    cout << luckyName[10]; */

    int luckyName[20];
    luckyName[10] = 100;
    cout << luckyName[10];

    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Functions --- 1.20.03 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    cout << "Top" << endl;
    cout << "" << endl;
    sayHi("Shafiq", 32); /* calling function */
    cout << "" << endl;
    sayHi("Elia", 13);
    cout << "" << endl;
    sayHi("Nani", 24);
    cout << "" << endl;
    cout << "Bottom" << endl;



    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Return Statement --- 1.29.47 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;




    cout << "" << endl;
    cout << "" << endl;

    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ".\nYou are "<< age << " years old."<< endl;
}
