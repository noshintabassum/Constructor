#include<iostream>
#include<conio.h>
using namespace std;


class student{


public:

    int id;

    double gpa;


//constructor........
    student(int x, double y){


        id = x;

        gpa = y;


    }


    void display(){


         cout<<id<<"         "<<gpa<<endl<<endl;


    }

};





int main(){




cout<<"student kylie :"<<endl<<endl;

cout<<"id          gpa"<<endl;
   student kylie(796, 4.73);

   kylie.display();




cout<<"student kendall : "<<endl<<endl;

cout<<"id          gpa"<<endl;

   student kendall(797, 4.65);

   kendall.display();





getch();



}
