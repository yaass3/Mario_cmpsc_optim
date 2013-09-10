//three main variables/columns:
//names: the names in the list
//section : the section the student is in
//grades : the grade of the student in int format

#include <iostream>
#include <iomanip>  
#include <string>
using namespace std;

void addRecords(string names[], int sections[], int grades[], int size);
void printRecords(string names[], int sections[], int grades[], int size);
void dropRecords(string names[], int sections[], int grades[], int size);
void sortRecords(string names[], int sections[], int grades[], int size);
void averageRecords(string names[], int sections[], int grades[], int size);
void quitRecords(string names[], int sections[], int grades[], int size);

int main() {
   return 0;
}
//Adding Part
void addRecords(string names[], int sections[], int grades[], int size) {
   

int i= size //the size of the array
   
       cout << "Please put in the stuff in the format required! \t"<<endl;
if(size<20) //max length of the name is 20
{
i=size;
cin>> names[i+1]>> section[i+1]>> grades[i+1];
    }
else
cout<< "The maximum size is 20!"<<endl;

   return;
}


//Printing part
void printRecords(string names[], int sections[], int grades[], int size) {
   int i;
   for (i = 0; i < size; i = i + 1) {
       cout << "[" << i << "]:\t";
       cout << setw(20) << left << names[i];
       cout << setw(5) << sections[i];
       cout << setw(10) << grades[i];
       cout << "\n";
   }
   return;
}

//Adding Part
void dropRecords(string names[], int sections[], int grades[], int size) {
   

int i //the line to be deleted
   
       cout << "Which line do you want to delete? \t"<<endl;
cin >> i

while(i<=size) //the line to be deleted should be within the array size
{
names[] = names[1:i-1]+names[i+1:size];
section[] = section[1:i-1]+section[i+1:size];
grades[] = grades[1:i-1]+grades[i+1:size];


    }
else
cout<< "The maximum size is 20!"<<endl;

   return;
}


//average part

//Adding Part
int dropRecords(string names[], int sections[], int grades[], int size) {
int i //the line to be deleted
   
       cout << "Which column average you want to have? 1(names), 2(section) or 3(grades) \t"<<endl;
cin >> i

while(i<=3) //the line to be deleted should be within the array size
{
for (j=0; j<size; j++;){
sum_01 = sum_01 + grades[j];
}
aver= sum_01/size;
}

    }
else
cout<< "column out of the bounds!"<<endl;

   return(aver);
}


void quitRecords(string ans) {
   

string ans= "no";    
       cout << " Do you want to quit(yes/no)? \t "<<endl;
cin >> ans;

if ans=="yes" {
cout<<"Thank you and byebye!"
` exit(TRUE);

return();
}
