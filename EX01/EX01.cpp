#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char const *argv[]){
    // argc is the number of string given to this program
    //agrv is the array of strings
    cout<<"Hello, World!"<<endl;
    //This is a comment
    /*
    this is a multiline comment
    */
    int x = 3;
    cout<<"The number x is "<<x<<endl;
    int y;
    cout<<"Please enter a number of y: ";
    cin>>y;
    cout<<"The number y is "<<y<<endl; 
    /*
    Data types in C++ are:
         int, float, double, bool, and char(one character only)

    */
    int a;
    cout<<"The value of a is: "<<a<<endl;
    
// You can covert a double to an int without casting

double b = 5.3;
int c = b;
cout<<"b is: "<<b<<endl<<"c is: "<<c<<endl;

string name = "Sophie Yokoo"; //Strings start with a kowercase unlike Java
cout<<"My name is "<<name<<endl;
//Strings work as you think they do. You can look up the functions for them when it matters. 

//We have no arguments. Don't worry about syntax, but know this is how you use it.
cout<<"You gave "<<argc<<" arguments and they are:"<<endl;
for(int i = 0; i<argc; i++){
    cout<<argv[i]<<endl;
}
/* 
Most of the time you will take command line arguments instead of cin
the thing above is an array. Never use arrays, you should use vectors instead
Here's why:
*/
int daArray[] = {2,4,6,8};
cout<<"Number at position 2 is "<<daArray[2]<<endl;

//You are allowed to go past the array bound. Very dangerous!
/*
C++ does not do error checking, nor can you check for the size
When you make an array, C++ allocates that amount of memmory. End of story!
*/
//Vectors are like ArrayList
vector<int> foo;
foo.push_back(53);
foo.push_back(5);
foo.push_back(7);
cout<<foo[0]<<endl;//Access like a vector
cout<<foo.size()<<endl;// gets the size of the vector
foo.push_back();//Gets rid of the last item
foo[2]=2;//Change the value at position 0 to 2
foo.erase(foo.begin()+1);//Removes the element at postion 1
for (unsigned int i = 0; i<foo.size(); i++){
    cout<<foo[i]<<endl;
}
/*
You get a warning if you don't use an unsigned int because you are wasting memory.
The size can't be negative so why even have it as an option?
*/
return 0;
}