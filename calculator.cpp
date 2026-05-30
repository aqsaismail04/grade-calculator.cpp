//name: AQSA ISMAIL
// Roll No: L1F25BSCS0055
//SECTION: B17
//ASSIGNMENT 2:  GRADE CALCULATOR
//SUBJECT: PF
#include<iostream>
#include<fstream>

using namespace std;
// Function prototypes
void initialize(int arr[], int size)
{
	for (int i = 0; i < size; i++) // Initialize all elements  to array 
    {
        arr[i] = 0;
    }
}

void read_file(ifstream& fin, int marks_arr[], int size) 
{
	for (int i = 0; i < size; i++)  // Read marks from the input file into the array
    {
        fin >> marks_arr[i];
    }
}
// Function to calculate the average of marks
void calculateAverage(int marks[], int size, float& sum)
 {

    for (int i = 0; i < size; i++) 
    {
		sum = sum + marks[i];// Calculate the sum of marks
    }

}
// Function to calculate the grade based on average
char calculateGrade(float average) 
{
    if (average >= 90)
    {
        return 'A';
    }
    else if (average >= 80)
    {
        return 'B';
    }
    else if (average >= 70)
    {
        return 'C';
    }
    else if (average >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
	return 'F';// Default return value 
}
// Function to write student data to the output file
void write_file(ofstream& fout, char name[], int marks[], float average, char grade)
{
    fout << name << "\t";
    for (int i = 0; i < 5; i++) 
    {
		fout << marks[i] << "\t"; // Write marks to the output fil
    }
	fout << average << "\t" << grade << endl; // Write average and grade to the output file
}

int main() // Main function
{
    // Variable declarations
    char name[50];       // Char array for name 
    int marks_arr[5];    // Array for 5 test scores 
    // Initialize the marks array 
    initialize(marks_arr, 5);
   
	char grade; // Variable to store grade

    float classTotalAvg = 0.0;
    int studentCount = 0;

 

    // Open files 
    ifstream fin("data.txt");
    ofstream fout("output.txt");

    if (!fin.is_open())
    {
        cout << "Error: Could not open input file!" << endl;
    }
	//  output file some formatting
    fout << "==============================================================" << endl;
    fout << "Student\tTest1\tTest2\tTest3\tTest4\tTest5\tAverage\tGrade" << endl;
    fout << "==============================================================" << endl;

	while (fin >> name) // Read student name from the input file
    {
        float avg = 0.0;
        float sum = 0.0;  

		read_file(fin, marks_arr, 5); // Read marks from input file

		calculateAverage(marks_arr, 5, sum);  // Calculate sum of marks
		avg = sum / 5.0;    // Calculate average

		grade = calculateGrade(avg); // Calculate grade based on average

		write_file(fout, name, marks_arr, avg, grade);  // Write student data to output file

		classTotalAvg = classTotalAvg + avg;   //  class total average
		studentCount++;  // Increment student count
    }
	fout << "==============================================================" << endl;
    fout << "Class Average = \t\t\t\t" << (classTotalAvg / studentCount) << endl;
    fout << "==============================================================" << endl;

    // Close files
    fin.close();   //close input file 
	fout.close(); //close output file

    cout << "Your output file is ready..............." << endl;
	system("pause"); 
    return 0;
}