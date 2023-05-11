#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll_no;
    string name;
    string father_name;
    int marks[6];
};

int main()
{
    Student students[20] =
    {
        {1, "Ali Raza", "Ahmed Khan", {80, 90, 70, 85, 75, 90}},
        {2, "Ahmed Khan", "M. Khan", {75, 80, 65, 70, 80, 85}},
        {3, "Sara Ali", "Ahmed Ali", {90, 85, 80, 95, 70, 80}},
        {4, "Fatima Shahid", "Shahid Khan", {85, 70, 75, 80, 90, 85}},
        {5, "Ahsan Ali", "Ali Raza", {70, 75, 80, 85, 90, 95}},
        {6, "Zunaira", " Ahmad Raza", {95, 90, 85, 75, 80, 70}},
        {7, "Afshan Ahmed", "Ahmed", {80, 85, 75, 70, 90, 80}},
        {8, "Hassnain", "Abbas", {85, 56, 80, 75, 70, 85}},
        {9, "Kamran Khan", "Imran Khan", {75, 70, 85, 80, 95, 90}},
        {10, "Zainab", "Ahmed ", {90, 80, 75, 85, 70, 95}},
        {11, "Ahmad Raza", "Mazhar Iqbal", {90, 85, 83, 80, 80, 75}},
        {12, "Hannan Rasool", "Ghulam Rasool", {88, 83, 75, 85, 70, 90}},
        {13, "Maheen", "Mushtaq", {60, 56, 70, 79, 89, 85}},
        {14, "Raba", "Nadeem", {70, 75, 83, 88, 80, 95}},
        {15, "Hamza", "Hussain", {85, 80, 75, 77, 79, 80}},
        {16, "Danish", "Ghafoor", {75, 80, 65, 70, 80, 85}},
        {17, "Saqib", "Zaman", {80, 60, 70, 85, 73, 88}},
        {18, "Sheraz Rauf", "Muhammad Rauf", {90, 83, 75, 81, 77, 88}},
        {19, "Haroon", "Murtaza", {60, 67, 77, 73, 88, 90}},
        {20, "Moiz", "Mushtaq", {90, 45, 79, 63, 84, 86}},
    };


    // #####################################################################
    // #####################################################################
    // Initiate Roll no. and total marks integers.
    int roll;
    bool found = false;
    int total_marks, start;

    // Ask user for roll number
    cout << "\n\tEnter Roll Number of the student: ";
    cin >> roll;
    cout << "\n\n";


    // #####################################################################
    // #####################################################################
    // Search for student with the given roll number.
    // And Print their details on the Console Window.
    for(int i = 0; i < 20; i++)
    {
        if(students[i].roll_no == roll)
        {
            found = true;
            cout << "\t\tName: " << students[i].name << endl;
            cout << "\t\tFather Name: " << students[i].father_name << endl;

            cout << "\t========================================================================" << endl;

            cout << "\t\tMarks in given subjects are:\n\n";
            cout << "\t\tEnglish:\t" << students[i].marks[0] << endl;
            cout << "\t\tICT: \t\t" << students[i].marks[1] << endl;
            cout << "\t\tPF: \t\t" << students[i].marks[2] << endl;
            cout << "\t\tAccounting: \t" << students[i].marks[3] << endl;
            cout << "\t\tApplied Physics:" << students[i].marks[4] << endl;
            cout << "\t\tIslamiat: \t" << students[i].marks[5] << endl;

            break;
        }
    }


    // #####################################################################
    // Display error message if roll number not found
    if(!found)
    {
        cout << "\nError: Student with roll number " << roll << " not found." << endl;
    }

    // #####################################################################
    // This will add the total marks of the selected student.

    for(int i = 0; i < 20; i++)
    {
        if(students[i].roll_no == roll)
        {
            found = true;
            total_marks = students[i].marks[0] + students[i].marks[1] + students[i].marks[2]
                          + students[i].marks[3] + students[i].marks[4] + students[i].marks[5];

            cout << "\t========================================================================" << endl << endl;
            cout  << "\t\tThe total marks of " << students[i].name << " is: " << total_marks << endl;
            cout << "\t========================================================================" << endl;
            break;
        }
    }

    // #####################################################################
    // This code will calculate the students max marks and minimum marks
    int topper = 0;
    int sabkeMarks[20];
    int new_marks;
    for(int i = 0; i < 20; i++)
    {
        new_marks = students[i].marks[0] + students[i].marks[1] + students[i].marks[2]
                    + students[i].marks[3] + students[i].marks[4] + students[i].marks[5];
        sabkeMarks[i] = new_marks;
        if (topper < new_marks) {
                topper = new_marks;
        }
    }

    cout  << "\t\tThe Topper has got marks: " << topper << endl;

    cout << "\t========================================================================" << endl << endl;


    for(int i = 0; i < 20; i++)
    {
        cout << sabkeMarks[i] << "\t";
    }
    cout << endl;
    cout << "\t========================================================================" << endl;

    // The percentage of given numbers is declared and assigned here......

    float percent = total_marks/6;
    cout  << "\t\tYour Percentage is: " << percent << "%" << endl;

    cout << "\t========================================================================" << endl << endl;


    // #####################################################################
    // The grading system is defined here...
    if (percent >0 && percent <=100) {
        if (percent > 80 && percent <= 100) {
            cout << "\tYour CGPA is 4 " << endl;
        }
        else if (percent > 75 && percent <= 80) {
            cout << "\tYour CGPA IS 3.5" << endl;
        }
        else if (percent > 70 && percent <= 75) {
            cout << "\tYour CGPA is 3" << endl;
        }
        else if (percent > 65 && percent <= 70) {
            cout << "\tYour CGPA is 2.5" << endl;
        }
        else if (percent > 60 && percent <= 65) {
            cout << "\tYour CGPA is 2" << endl;
        }
        else {
            cout << "\tYour CGPA is below 2,You have failed.";
        }
    }


    return 0;
}
