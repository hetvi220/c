#include<iostream>
using namespace std;

class student {

int rollno;
char name[20];
float eng , maths , sci;
float total;
float ctotal(float eng,float maths,float sci);

public:
void takedata(){

cout<<"enter rollno: ";
cin>>rollno;
cout<<"enter name: ";
cin>>name;
cout<<"enter maths marks: ";
cin>>maths;
cout<<"enter english marks: ";
cin>>eng;
cout<<"enter science marks : ";
cin>>sci;
}

void showdata(){
cout<<"roll number : "<<rollno<<endl;
cout<<"your name is : "<<name<<endl;
cout<<"your maths marks are : "<<maths<<endl;
cout<<"your english marks are :"<<eng<<endl;
cout<<"your science marks are :"<<sci<<endl;
cout<<"total is : "<<ctotal( eng,maths,sci)<<endl;
}
};
float student::ctotal(float eng,float maths,float sci){
return eng+maths+sci;
}

int main(){
class student obj[5];
for(int i=0; i<5; i++){
 obj[i].takedata();
    obj[i].showdata();
    
} 
return 0;
}