#include <iostream>
#include <string>
#include <vector>
#include "student.h"


int main(){
    Student first_student = get_student();
    print_student(first_student);
    class_score(first_student);

    return 0;


}