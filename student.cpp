#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;
Student:: Student () {}
Student:: Student( int id, string name, int midterm, int final_exam,vector<int> &hw_grades)
    :id(id),name(name),midterm(midterm),final_exam(final_exam),hw_grades(hw_grades){

};

Student get_student (){
    Student student;

    student.name = "Johnny van Neummann";
    //vector <int> hws ={89,100,98,100};
    //Student student ( 9999,name,99,90,hws);
    student.final_exam= 90;
    student.midterm=99;
    student.id=9999;
    student.hw_grades.push_back(89);
    student.hw_grades.push_back(100);
    student.hw_grades.push_back(98);
    student.hw_grades.push_back(100);

    return student;
}

void print_student(Student student){
    cout << "ID: " 
    << student.id 
    << " Name: " 
    << student.name << endl;
    cout << "Midterm: " << student.midterm << endl;
    cout << "Final: " <<  student.final_exam << endl;
    cout << "Homeworks:" << endl;
    for (auto hw : student.hw_grades){
        cout << hw << " ";
    }
    cout << endl;
}


float class_score(Student student){
    float mid= student.midterm * 0.3;
    float fin= student.final_exam * 0.3;
    int i=0;
    float hw_total=0;
    for (auto hw : student.hw_grades){
        i++;
        hw_total += hw;
    }
    float hw_grade= (float((hw_total/i))*0.4);
    float class_score = mid+fin+hw_grade;
    //cout << mid << fin << hw_grade << endl;
    //cout << class_score << endl;
    return class_score;
}