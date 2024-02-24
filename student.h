#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <vector>
#include <string>

using namespace std;

struct Student {
  public:
   Student();
   Student( int id, string name, int midterm, int final_exam,vector<int> &hw_grades);
  //private:
    int id;
    string name;
    int final_exam;
    int midterm;
    vector<int> hw_grades;
};

Student get_student();
void print_student(Student s);
float class_score(Student student);

#endif