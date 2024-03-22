#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int subsection;
int correct;


int checkQuestions(const int student_answers[], const int teacher_answers[], int total_answers)
{
    int correct_answers = 0;
    for(int answer = 0; answer < total_answers; answer++)
    {
        if(student_answers[answer] == teacher_answers[answer])
        {
            correct_answers += 1;
        }
    }
    return 0;
}

void assignLetterGrade(int total_answers, int incorrect_answers) {
    double percentage = 100.0 * (total_answers - incorrect_answers) / total_answers;
    char letterGrade;

    if (percentage <= 100.0) {
        letterGrade = 'A';
    } else if (percentage <= 89.0) {
        letterGrade = 'B';
    } else if (percentage <= 79.0) {
        letterGrade = 'C';
    } else if (percentage <= 69.0) {
        letterGrade = 'F';
    } 
    cout << "The amount of questions: " << total_answers << endl;
    cout << "The amount of incorrect answers: " << incorrect_answers << endl;
    cout << "The overall letter grade: " << letterGrade << endl;
}

void calculateAssignmentGrade(int incorrect_answers, int total_answers) {
    double percentage = 100.0 * (total_answers - incorrect_answers) / total_answers;
    cout << "The overall grade percentage: " << percentage << "%" << endl;
}

void displayAssignmentResults(const string assignment_name, int incorrect_answers, int total_answers) {
    //string assignment_name;
    cout << "Enter Assignment Name: " << endl;
    //cin >> assignment_name;
    //cout <<  assignment_name << endl;
    double percentage = 100.0 * (total_answers - incorrect_answers) / total_answers;
    char letterGrade;

    if (percentage <= 100.0) {
        letterGrade = 'A';
    } else if (percentage <= 89.0) {
        letterGrade = 'B';
    } else if (percentage <= 79.0) {
        letterGrade = 'C';
    } else if (percentage <= 69.0) {
        letterGrade = 'F';
    } 
    cout << "The overall letter grade: " << letterGrade << endl;
    cout << "The overall grade percentage: " << percentage << "%" << endl;
}
int menu(int);
int menu(int choice)
{
    while(true)
    {
        cout << "Enter a choice: " << endl;
        cout << "1. Load assignment solutions" << endl;
        cout << "2. Grade student submissions" << endl;
        cout << "3. Exit to quit" << endl;
    }
    cin >> choice;
//need if/else statement if the user types in 1 they are using char datatypes so they will be stored in a char array and so forth
     if(choice == 1) 
     {     
            
                    cout << "  1. Single answer solutions" << endl; 
                    cout << "  2. String responses" << endl; 
                    cout << "  3. Numeric responses" << endl; 
                
                    cin >> subsection;
                    vector<double> intTeacher_submission;
                    vector<double> intStudent_submission;
                    vector<char> char_teacher_submission;
                    vector<char> char_student_submission;
                    vector<string> stringTeacher_submission;
                    vector<string> stringStudent_submission;
                    if(subsection == 1)
                    {
                        cout << "Enter the single answer key: " << endl;
                        ifstream teacher_submissionFile;
                        char_teacher_submissionFile.open("teacher_submission.txt");
                        
                        ifstream c_student_submissionFile;
                        c_student_submissionFile.open("student_submission.txt");

                        char answers;
                        while (char_teacher_submission >> answers)
                        {
                            char_teacher_submission.push_back(answers);
                        }
                        char_teacher_submissionFile.close();

                        char responses;
                        while ()
                    }
                    string teacher_answers;
                    string student_answers;
                // they not letting me use teacher_answers as an inialization what do I do?
                    ifstream teacher_submissionFile;
                    teacher_submissionFile.open("teacher_submission.txt");
                    
                    teacher_submissionFile >> teacher_answers;

                    ifstream student_submissionFile;
                    student_submissionFile.open("student_submission.txt");
                    string student_submission[] = {student_answers};


                        if(subsection == 1)
                        {
                            cout << "Enter the single answer key: " << endl;
                            string teacher_submissionFile = "teacher_submission.txt";
                            ofstream outputFile(teacher_submissionFile);
                        } 
                        if(subsection == 2)
                        {
                            cout << "Enter the short-answer answer key: " << endl;
                            string teacher_submissionFile = "teacher_submission.txt";
                            ofstream outputFile(teacher_submissionFile);
                        }
                        if(subsection == 3)
                        {
                            cout << "Enter the numeric answer key: " << endl;
                            string teacher_submissionFile = "teacher_submission.txt";
                            ofstream outputFile(teacher_submissionFile);
                        }
                    //input the student responses as well
                    //question: so will we be reading in these files or will we already have the files made and just refer back to them?
                    // -answer so for choice 2 you will look at student submissions so they will already be on a file so it will be ofstream.
                    // -use parallel arrays to compare the teacher file and the student file to see if each index matches and if not create code that will show how many dont match.
                    // like use teacher_submission[i] != student_submission[i] then you will make a count
                    // keep the same variables and a little bit of code that you have for choice 2 tho
                        
                  }
      if (choice == 2)
      {
                cout << "You selected Option 2." << endl;
                int student_answers[] = {};
                int teacher_answers[] = {};
                int total_answers = sizeof(student_answers) / sizeof(student_answers[0]);
                int correct = checkQuestions(student_answers, teacher_answers, total_answers);
                cout << "The total amount of correct answers are: " << correct << endl;
                int incorrect = total_answers - correct;
                assignLetterGrade(total_answers, incorrect);
                calculateAssignmentGrade(incorrect, total_answers);
               // displayAssignmentResults(assignment_name, incorrect, total_answers);

     }
        if(choice == 3)
        {
                cout << "Exiting the program." << endl;
                return 0; 
        }
        
    return 0;
        
}
int main(){
    int choice;
    menu(choice);
}

