#include <iostream>
#include <string>
using namespace std;

struct Data
{
    int roll_no;
    string name, father_name;
    int marks[6];
};

int main()
{
    system ("color 7D");
    Data student[60] =
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
        {10, "Fizza Ishtiaq", "Ishtiaq Ahmad", {90, 80, 75, 85, 70, 95}},
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
        {21, "Amna", "Azam", {80, 91, 90, 73, 55, 90}},
        {22, "Mariyam", "M. Khan", {76, 81, 62, 78, 81, 84}},
        {23, "Bushra Maqbool", "Ahmed Ali", {70, 45, 55, 45, 73, 80}},
        {24, "Faizan", "Shahid Khan", {85, 70, 75,67, 90, 85}},
        {25, "Abdul Rehman", "Hussnain", {70, 75, 84, 85, 90, 95}},
        {26, "Sheeza", " Ahmad Raza", {95, 90, 88, 75, 80, 70}},
        {27, "Afshan Ahmed", "Ahmed", {80, 85, 75, 74, 90, 80}},
        {28, "Hassan", "Ali", {85, 56, 80, 75, 74, 85}},
        {29, "Yousaf", "Imran", {75, 70, 85, 84, 95, 90}},
        {30, "Farhan Ishtiaq", "Ishtiaq Ahmad", {93, 80, 75, 85, 70, 95}},
        {31, "Ahmad Raza", "Shafique", {90, 84, 83, 80, 80, 75}},
        {32, "Hannan", "Rafique", {88, 83, 74, 85, 70, 90}},
        {33, "Maheen", "Muhammad Bilal", {61, 59, 73, 79, 83, 85}},
        {34, "Ishtiaq", "Nadeem", {70, 78, 83, 87, 80, 95}},
        {35, "Hamza", "Khan", {85, 82, 75, 74, 79, 80}},
        {36, "M.Ali", "Ghafoor", {75, 81, 65, 70, 80, 85}},
        {37, "Awais", "Zaman", {80, 61, 70, 82, 73, 88}},
        {38, "Rauf", "Muhammad Rauf", {90, 53, 75, 81, 77, 78}},
        {39, "Hareem", "Murtaza", {60, 67, 37, 73, 68, 90}},
        {40, "Moiza", "Mushtaq", {90, 45, 59, 63, 84, 96}},
        {41, "Ali amin", "Ahmed Khan", {80, 87, 73, 85, 79, 90}},
        {42, "Ameer Hamza", "M. Khan", {75, 80, 61, 73, 80, 85}},
        {43, "Ayesha Maqbool", "Ahmed Ali", {90, 82, 82, 93, 70, 80}},
        {44, "Rida  Shahid", "Shahid Khan", {85, 71, 73, 83, 90, 85}},
        {45, "Ali khan", "Muhammad Raza", {70, 72, 80, 85, 78, 95}},
        {46, "Rasool", "Ahmad Raza", {95, 90, 73, 71, 82, 72}},
        {47, "Muhammad Ahmed", "Amin", {80, 85, 72, 70, 90, 80}},
        {48, "Huma", "Tariq", {75, 57, 83, 75, 73, 85}},
        {49, "Kumail", "Imran ", {75, 71, 84, 81, 93, 92}},
        {50, "Zahra", "Jafar", {90, 80, 75, 84, 70, 95}},
        {51, "Roshan", "Iqbal", {90, 82, 83, 80, 80, 75}},
        {52, "Zayan", "Ghulam Rasool", {68, 83, 75, 85, 70, 90}},
        {53, "Ahmad", "Mushtaq", {60, 56, 97, 79, 89, 85}},
        {54, "ALi", "Nadeem", {70, 75, 82, 88, 80, 95}},
        {55, "Hassan", "Hussain", {85, 80, 72, 77, 79, 80}},
        {56, "Danish", "Ghafoor", {75, 80, 63, 70, 80, 85}},
        {57, "Saqib", "Ali", {80, 60, 70, 83, 73, 89}},
        {58, "Sheraz Rauf", "Muhammad Rauf", {90, 83, 75, 83, 77, 88}},
        {59, "Haroon", "Murtaza", {60, 67, 78, 73, 84, 90}},
        {60, "Moiz", "Mushtaq", {90, 45, 79, 65, 84, 86}},
    };

    int choice;
    cout << "\n\n";
    cout << "\t\t\tWelcome to Students Data Portal\n";
    cout << "\t1 for selected student data\n";
    cout << "\t2 for the Toppers data\n";
    cout << "\t3 for Whole Class Data\n";
    cout << "\tSelect: ";
    cin  >> choice;

    // #####################################################################
    // #####################################################################
    // Initiate Roll no. and total marks integers.
    int roll;
    bool found = false;
    int total_marks, start;

    // Ask user for roll number
    if(choice==1)
    {
start:
    system("color 70");
    
        cout << "\n\tEnter Roll Number of the student: ";
        cin >> roll;
        cout << "\n\n";


        // #####################################################################
        // #####################################################################
        // Search for student with the given roll number.
        // And Print their details on the Console Window.

        for(int i = 0; i < 60; i++)
        {
            if(student[i].roll_no == roll)
            {
                found = true;
                cout << "\t\tName: " << student[i].name << endl;
                cout << "\t\tFather Name: " << student[i].father_name << endl;

                cout << "\t========================================================================" << endl;

                cout << "\t\tMarks in given subjects are:\n\n";
                cout << "\t\tEnglish:\t" << student[i].marks[0] << endl;
                cout << "\t\tICT: \t\t" << student[i].marks[1] << endl;
                cout << "\t\tPF: \t\t" << student[i].marks[2] << endl;
                cout << "\t\tAccounting: \t" << student[i].marks[3] << endl;
                cout << "\t\tApplied Physics:" << student[i].marks[4] << endl;
                cout << "\t\tIslamiat: \t" << student[i].marks[5] << endl;
                break;
            }
        }
    }

    // #####################################################################
    // Display error message if roll number not found
    if(!found)
    {
        cout << "\nError: Student with roll number " << roll << " not found." << endl;
        goto start;
    }

    // #####################################################################
    // This will add the total marks of the selected student.

    for(int i = 0; i < 60; i++)
    {
        if(student[i].roll_no == roll)
        {
            found = true;
            total_marks = student[i].marks[0] + student[i].marks[1] + student[i].marks[2]
                          + student[i].marks[3] + student[i].marks[4] + student[i].marks[5];

            cout << "\t========================================================================" << endl << endl;
            cout  << "\t\tThe total marks of " << student[i].name << " is: " << total_marks << endl;
            cout << "\t========================================================================" << endl;
            break;
        }
    }

    // #####################################################################
    // This code will calculate the students max marks and minimum marks
    if(choice == 2)
    {
        int topper = 0;
        int sabkeMarks[60];
        int new_marks;
        int topper_roll;
        for(int i = 0; i < 60; i++)
        {
            new_marks = student[i].marks[0] + student[i].marks[1] + student[i].marks[2]
                        + student[i].marks[3] + student[i].marks[4] + student[i].marks[5];
            sabkeMarks[i] = new_marks;
            if (topper < new_marks)
            {
                topper = new_marks;
                topper_roll = i;
            }
        }
        int j = topper_roll;
        total_marks = topper;
        cout << "\t\tThe Topper has got marks: " << topper << endl;
        cout << "\t\tName: " << student[j].name << endl;
        cout << "\t\tFather Name: " << student[j].father_name << endl;

        cout << "\t========================================================================" << endl;

        cout << "\t\tMarks in given subjects are:\n\n";
        cout << "\t\tEnglish:\t" << student[j].marks[0] << endl;
        cout << "\t\tICT: \t\t" << student[j].marks[1] << endl;
        cout << "\t\tPF: \t\t" << student[j].marks[2] << endl;
        cout << "\t\tAccounting: \t" << student[j].marks[3] << endl;
        cout << "\t\tApplied Physics:" << student[j].marks[4] << endl;
        cout << "\t\tIslamiat: \t" << student[j].marks[5] << endl;



        cout << "\t========================================================================" << endl << endl;
    }
    // The percentage of given numbers is declared and assigned here......

    float percent = total_marks/6;
    cout  << "\t\tYour Percentage is: " << percent << "%" << endl;

    cout << "\t========================================================================" << endl << endl;


    // #####################################################################
    // The grading system is defined here...
    if (percent >0 && percent <=100)
    {
        if (percent > 80 && percent <= 100)
        {
            cout << "\tYour CGPA is 4 " << endl;
        }
        else if (percent > 75 && percent <= 80)
        {
            cout << "\tYour CGPA IS 3.5" << endl;
        }
        else if (percent > 70 && percent <= 75)
        {
            cout << "\tYour CGPA is 3" << endl;
        }
        else if (percent > 65 && percent <= 70)
        {
            cout << "\tYour CGPA is 2.5" << endl;
        }
        else if (percent > 60 && percent <= 65)
        {
            cout << "\tYour CGPA is 2" << endl;
        }
        else
        {
            cout << "\tYour CGPA is below 2,You have failed.";
        }
    }
    char again;
    system ("color 79");
    cout << "Want to get another student data (y/n): ";
    cin  >> again;
    switch(again)
    {
    case 'y':
        cout << endl << endl;
        goto start;
    }
    return 0;
}
