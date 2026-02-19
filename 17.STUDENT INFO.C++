#include <iostream>
using namespace std;


   
class student
{   
    int id;
    char name[30];
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void input();
    void calculate();
    void print();
};

void student::input()
{
    cout << "Enter student details\n";

    cout << "ID: ";
    cin >> id;

    cout << "Name: ";
    cin >> name;

    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++)
        cin >> marks[i];
}

void student::calculate()
{
    total = 0;

    for (int i = 0; i < 5; i++)
        total += marks[i];

    percentage = total / 5.0;

    
    if (percentage >= 90)
        grade = 'A';   
    else if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
}

void student::print()
{
    cout << "Student Details\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}
   
int main()
{
    
    student s;

    s.input();
    s.calculate();
    s.print();
    return 0;
}
