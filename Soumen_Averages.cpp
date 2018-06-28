//Preprocessor Directives
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{  
    //Variable Declarations:
    int ID; //Varible that stores the student identification number
    int termMark; //Varible that stores the term mark
    int sumMark1; //Varible that stores the summative mark (10%)
    int sumMark2; //Varible that stores the summative mark (20%)
    int semAvg; //Variable that stores the semester average for each student
    int semAvgTotal = 0; //Variable that stores the sum of all the semester averages
    string lvlGrade; //Variable that stores the level grade
    //Variables that keep track of how many students achieved each level
    int level4 = 0;
    int level3 = 0;
    int level2 = 0;
    int level1 = 0;
    int levelR = 0;
    int classAvg = 0; //Variable that stores the class average.
    int studentCounter = 0; //Variable that stores the total number of students
    
	//Function Body
	//Displays the following statements
    cout<<"Please enter the data for the categories below. "<<endl<<endl;
    cout<<"After entering all the required marks for each student,"<<endl;
	cout<<"please press 2 when asked for the next student identification number"<<endl;
	cout<<"to terminate the input."<<endl;
	for (; ;) //Infinite loop
    {
    	cout<<"\nPlease enter the student identification number: "; //Displays this statement
    	cin>>ID; //Accepts user input
    	while (!cin.good())  //While the  user didn't enter a number, they will be asked to enter a number.
		{
			cout<<"Please enter a number for the identification number: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin>>ID;	
		}
    	if (ID == 2) //If the user pressed 2, the grade distribution and the class average will be displayed
    	{
    		cout<<"Grade Distribution"<<endl<<endl;
    		cout<<"Level 4\t\t"<<level4<<endl;
    		cout<<"Level 3\t\t"<<level3<<endl;
    		cout<<"Level 2\t\t"<<level2<<endl;
    		cout<<"Level 1\t\t"<<level1<<endl;
    		cout<<"R\t\t"<<levelR<<endl<<endl;
    		cout<<"Class Average:\t"<<classAvg;
			break;
		}
    	while (ID <1000 || ID>9999) //While the user didn't enter four digits, they will be asked to enter four digits 
    	{
    		cout<<"Please enter 4 digits: ";
    		cin>>ID;
    	}
	    cout<<"Please enter term mark: "; //Displays this statement
		cin>>termMark; //Accepts the user input
		while (!cin.good()) //While the  user didn't enter a number, they will be asked to enter a number
		{
			cout<<"Please enter a number for the term mark: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin>>termMark;	
		}
		while (termMark <0 || termMark>100) //While the  user didn't enter a number in the correct range, they will be asked to enter a number between 0 and 100
	    {	
	    	cout<<"Please enter a number between 0 and 100: ";
	    	cin>>termMark; //Accepts the user input
	   	}
		cout<<"Please enter summative mark (20%): "; //Displays this statement
		cin>>sumMark2; //Accepts the user input
		while (!cin.good()) //While the  user didn't enter a number, they will be asked to enter a number
		{
			cout<<"Please enter a number for the summative mark: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin>>sumMark2;	
		}
		while (sumMark2 <0 || sumMark2>100) //While the  user didn't enter a number in the correct range, they will be asked to enter a number between 0 and 100
		{
		    cout<<"Please enter a number between 0 and 100: ";
		    cin>>sumMark2;
		}
		cout<<"Please enter summative mark (10%): "; //Displays this statement
		cin>>sumMark1; //Accepts the user input
		while (!cin.good()) 
		{
			cout<<"Please enter a number for the summative mark: "; //While the  user didn't enter a number, they will be asked to enter a number
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin>>sumMark1;	
		}
		while (sumMark1 <0 || sumMark1>100) //While the  user didn't enter a number in the correct range, they will be asked to enter a number between 0 and 100
	    {
	    	cout<<"Please enter a number between 0 and 100: ";
	    	cin>>sumMark1;
	    }
		semAvg = round((0.7 * termMark) + (0.2 * sumMark2) + (0.1 * sumMark1)); //Calculation for the semester average based on user input
		if (semAvg >=0 && semAvg <=49) //If the semester average is between 0 and 40 than:  
		{
			lvlGrade = "R"; //lvlGrade becomes R
			levelR++; //levelR increases by 1 
		}
		else if (semAvg >=50 && semAvg <=52) //If the semester average is between 50 and 52 than:
		{
			lvlGrade= "1-"; //lvlGrade becomes 1-
			level1++; //level1 increases by 1 
	    }
		else if (semAvg >=53 && semAvg <=56) //If the semester average is between 53 and 56 than:
		{
			lvlGrade= "1"; //lvlGrade becomes 1
			level1++; //level1 increases by 1 
		}
		else if (semAvg >=57 && semAvg <=59) //If the semester average is between 57 and 59 than:
		{
			lvlGrade= "1+"; //lvlGrade becomes 1+
			level1++; //level1 increases by 1 
		}
		else if (semAvg >=60 && semAvg <=62) //If the semester average is between 60 and 62 than:
		{
			lvlGrade= "2-"; //lvlGrade becomes 2-
			level2++; //level2 increases by 1 
		}
		else if (semAvg >=63 && semAvg <=66) //If the semester average is between 63 and 66 than:
		{
			lvlGrade= "2"; //lvlGrade becomes 2
			level2++; //level2 increases by 1 
		}
		else if (semAvg >=67 && semAvg <=69) //If the semester average is between 67 and 69 than:
		{
			lvlGrade= "2+"; //lvlGrade becomes 2+
			level2++; //level2 increases by 1 
		}
		else if (semAvg >=70 && semAvg <=72) //If the semester average is between 70 and 72 than:
		{
			lvlGrade= "3-"; //lvlGrade becomes 3-
			level3++; //level3 increases by 1 
		}
		else if (semAvg >=73 && semAvg <=76) //If the semester average is between 73 and 76 than:
		{
			lvlGrade= "3"; //lvlGrade becomes 3
			level3++; //level3 increases by 1 
		}
		else if (semAvg >=77 && semAvg <=79) //If the semester average is between 77 and 79 than:
		{
			lvlGrade= "3+"; //lvlGrade becomes 3+
			level3++; //level3 increases by 1 
		}
		else if (semAvg >=80 && semAvg <=86) //If the semester average is between 80 and 86 than:
		{
			lvlGrade= "4-"; //lvlGrade becomes 4-
			level4++; //level4 increases by 1 
		}
		else if (semAvg >=87 && semAvg <=94) //If the semester average is between 87 and 94 than:
		{
			lvlGrade= "4"; //lvlGrade becomes 4
			level4++; //level4 increases by 1 
		}
		else if (semAvg >=95 && semAvg <=99) //If the semester average is between 95 and 99 than:
		{
			lvlGrade= "4+"; //lvlGrade becomes 4+
			level4++; //level4 increases by 1 
		}
		else if (semAvg == 100) //If the semester average is 100 than:
		{
			lvlGrade= "4++"; //lvlGrade becomes 4++
			level4++; //level4 increases by 1 
		}
		studentCounter++; //Student counter increase by 1
		semAvgTotal += semAvg; //semAvgTotal keeps getting increased by each semester average
		//Display the following tins after cout
		cout<<"Semester Average for student "<<ID<<": "<<semAvg<<endl;
		cout<<"Level grade for student "<<ID<<": "<<lvlGrade<<endl;	
		classAvg = round(semAvgTotal/studentCounter); //Calculation for the Class Average
	}
	return 0;
}
