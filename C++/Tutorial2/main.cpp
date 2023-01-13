#include <iostream>

using namespace std;

/*void sayHi(string name, int age){
    cout << "Hello " << name << ".\nYou are "<< age << " years old."<< endl;
     }
*/ /* Function */


void sayHi(string name, int age); /*function's stop/signature   */

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number ";

    }

    return dayName;

}

int getMax(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    }else {
        result = num2;
    }

    return result;
    /* == -> for comparing if equal to, != -> not equal to */
}

int getMax1(int numx1, int numx2, int numx3){
    int resultx;

    if(numx1 >= numx2 && numx1 >= numx3){
        resultx = numx1;
    } else if(numx2 >= numx1 && numx2 >= numx3){
        resultx = numx2;
    } else {
        resultx = numx3;
    }

    return resultx;

}

double cube(double num){
    double result = num * num * num;
    return result;
    /* return num * num * num; */

}

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

    double answer = cube(5.0);
    cout << answer << endl;




    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "If Statements --- 1.35.23 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    bool isMale = true;
    bool isTall = false;

    if(isMale && isTall){
        cout << "You are a tall male.";
    } else if(isMale && !isTall){
        cout << "You're a short male.";
    } else if(!isMale && isTall){
        cout << "You're tall but not male.";
    } else {
        cout << "You're not male and not tall.";
    }

    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "More If Statements --- 1.47.15 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    cout << getMax(2, 5);
    cout << "" << endl;
    cout << getMax1(200, 50, 10);


    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Building a Better Calculator --- 1.55.58 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    int numy1, numy2;
    char op;

    cout << "Enter first number: ";
    cin >> numy1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> numy2;

    int resulty;

    if(op == '+'){
        resulty = numy1 + numy2;
    }else if(op == '-'){
        resulty = numy1 - numy2;
    }else if(op == '/'){
        resulty = numy1 / numy2;
    }else if(op == '*'){
        resulty = numy1 * numy2;
    }else{
        cout << "Invalid Operator\n";
    }

    cout << resulty;


    cout << "" << endl;
    cout << "" << endl;
    cout << "----------------------------" << endl;
    cout << "Switch Statements --- 2.02.21 " << endl;
    cout << "----------------------------" << endl;
    cout << "" << endl;

    cout << getDayOfWeek(0) << endl;
    cout << getDayOfWeek(1) << endl;
    cout << getDayOfWeek(9) << endl;
    cout << getDayOfWeek(3) << endl;





    cout << "" << endl;
    cout << "" << endl;
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ".\nYou are "<< age << " years old."<< endl;
}
