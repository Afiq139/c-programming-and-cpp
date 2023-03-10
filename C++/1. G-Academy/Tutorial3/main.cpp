#include <iostream>

using namespace std;


//constructor functions
class Book {
   public:
       string title;  //atttributes
       string author;
       int pages;

       Book(){
            title = "no title";
            author = "no author";
            pages = 0;
       }

       Book(string aTitle, string aAuthor, int aPages){ //connstructor
        //cout << aTitle << endl;
        title = aTitle;
        author = aAuthor;
        pages = aPages;
       }
};

//object functions
class student{
    public:
        string nameOne;
        string majorOne;
        double gpaOne;
        student(string a1Name, string a1Major, double a1Gpa){
            nameOne = a1Name;
            majorOne = a1Major;
            gpaOne =a1Gpa;
       }

        bool hasHonors(){
            if(gpaOne >= 3.5){
                return true;
             }
            return false;

          }
};

// getter and setter
class Movie{

private: // can't be access outside of class but can work inside the class
    string ratingTwo;


public: // can be access outside of class
    string titleTwo;
    string directorTwo;
    //string ratingTwo;
    //constructor below
    Movie(string aTitleTwo, string aDirectorTwo, string aRatingTwo){
        titleTwo = aTitleTwo;
        directorTwo = aDirectorTwo;
        //ratingTwo = aRatingTwo;
        setRating(aRatingTwo);
    }

    //setter
    void setRating(string aRatingTwo){
        //ratingTwo = aRatingTwo;
        if(aRatingTwo == "G" || aRatingTwo == "PG" || aRatingTwo == "PG-13" || aRatingTwo == "R" || aRatingTwo == "NR"){
            ratingTwo = aRatingTwo;
        } else {
            ratingTwo = "NR";
        }
    }


    //getter
    string getRating(){
        return ratingTwo;
    }

};


int power(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }
    return result;
}


//Inheritance - 1
class Chef{
    //this is Super Class
    public:
        void makeChicken(){
            cout << "The chef makes yummy chicken" << endl;
            }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
            }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;

            }
};

//Inheritance - 2
class ItalianChef : public Chef{
    // this is sub class
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }

        //overriding function in chef class
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }


    //will inherit from chef class without any stuff in this class
};





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

    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {5, 6},
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    cout << "" << endl;
    cout << numberGrid[0][1];


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Comments --- 2.54.56 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    // comment in C++ , single line
    /* multiple line */

    cout << "Comments are fun" << endl; // output
    //cout << "Comments are fun" << endl;


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Pointers --- 2.59.10 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    int age = 19;
    int *pAge = &age; //pointer variables storing address
    double gpa = 2.7;
    double *pGpa = &gpa;//pointer variables storing address
    string name = "Mike";
    string *pName = &name; //pointer variables storing address

    cout << "Pointer of Age:  "<< &age << endl; // accessing memory address
    cout << "Pointer of GPA:  "<< &gpa << endl;
    cout << "Pointer of Name: "<< &name << endl;
    cout << endl;
    cout << *pAge  << ":"<< pAge  << endl;
    cout << *pGpa  << ":"<< pGpa  << endl;
    cout << *pName << ":"<< pName << endl;

    //deferencing pointers -- grab directly from physical memory address
    // deferencing pointers: *pAge, *&Gpa, *&Name( can do &*&gpa)



    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Classes & Objects --- 3.13.26 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    //string name1 = "Mike";
    //double pi = 3.14;
    //char favoriteLetter = 'G';

    Book book1("nana", "Harry Potter", 500); //from constructor
    //book1.title = "Harry Potter";
    //book1.author = "JK Rowling";
    //book1.pages = 500;

    Book book2("Harith", "Tolkein", 700); //from constructor
    //book2.title = "Lord of the Rings";
    //book2.author = "Tolkein";
    //book2.pages = 700;
    //book2.title = "Hunger Games";

    cout << book1.pages << endl;
    cout << book2.title << endl;



    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Constructor Functions --- 3.25.40 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    Book book3("Shafiq's book", "Hunger Games", 300);

    cout << book3.title << endl;

    book1.title = "Homes";

    cout << book1.title << endl;

    Book book4;

    cout << book4.title;


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Object Functions --- 3.34.41 " << endl; //or instance Functions
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    student student1("Jim", "Business", 2.4);
    student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Getters & Setters --- 3.41.42 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;
    //control the access of different attributes and elements inside classes

    Movie avengers("The Avengers", "Joss Whedon", "PG-15");

    cout << avengers.getRating();

    //avengers.ratingTwo = "Dog"; --- its in private, can't change

    //cout << avengers.ratingTwo;  --- its in private, can't change


    cout << "" << endl;
    cout << "" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Inheritance --- 3.54.06 " << endl;
    cout << "-------------------------------------" << endl;
    cout << "" << endl;

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();
    cout << "" << endl;

    //inherit from Chef class
    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();
    italianchef.makeSpecialDish();



    cout << "" << endl;
    cout << "" << endl;

    return 0;
}
