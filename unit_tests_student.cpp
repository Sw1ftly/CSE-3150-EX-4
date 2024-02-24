#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "student.h"


TEST_CASE("Student"){
    SUBCASE("Edge Cases"){
        Student student;
        CHECK(0== student.hw_grades.size());

        Student student_1 = get_student();
        string name= student_1.name;
        CHECK (4== student_1.hw_grades.size());
        CHECK (name == student_1.name);
    }
    SUBCASE("small cases"){
        string name = "Grace Hopper";
        vector<int>hws = {99,98,100,100};
        Student student(99999,name,100,99,hws);
        CHECK (student.name==name);
        int i=0;
        for (auto hw : student.hw_grades){
            CHECK(hws[i++]== hw);
        }
    }
    SUBCASE("Total Class Score"){
        Student first_student = get_student();
        float actual_first_student_total_score= float(0.3*99)+float(0.3*90)+(float(89+100+98+100)/4)*0.4;  // 95.4
        CHECK(class_score(first_student) == actual_first_student_total_score);



        vector<int>hws2 = {69,72,50,80};
        Student student2(22222,"John",50,75,hws2);
        float actual_second_student_total_score= float(0.3*50)+float(0.3*75)+(float(69+72+50+80)/4)*0.4;  
        CHECK(class_score(student2) == actual_second_student_total_score);



        vector<int>hws3 = {0,0,0,0};
        Student student3(55224,"Dave",0,0,hws3);
        CHECK(class_score(student3) == 0);


        vector<int>hws4 = {100,100,100,100};
        Student student4(11111,"Marie",100,100,hws4);
        CHECK(class_score(student4) == 100);
    }
}