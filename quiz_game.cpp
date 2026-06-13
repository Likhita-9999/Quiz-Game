#include <iostream>
using namespace std;
int main() {
    int total=0;
    char choice;
    cout<<"-------Welcome To Quiz Game-------"<<endl;
    //Question 1
    cout<<"1. Who is the founder of C++ programming language?"<<endl;
    cout<<"A.Fortran\n B.James Gosling\n C.Bjarne Stroustrup\n D.Guido van Rossum"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice=='C'||choice=='c'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is C.Bjarne Stroustrup"<<endl;
    }
    //Question 2
    cout<<"2. Who is known as the Father of Computers?"<<endl;
    cout<<"A.Steve Jobs\n B.Fortran\n C.Bill gates\n D.Charles Babbage\n"<<endl;
     cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice=='D'||choice=='d'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is D.Charles Babbage"<<endl;
    }
     //Question 3
     cout<<"3. Which searching algorithm works only on sorted data?"<<endl;
      cout<<"A.Binary search\nB.Linear search\nC.Jump search\n D.Hash search\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
      if(choice=='A'||choice=='a'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is A.Binary search"<<endl;
    }
      //Question 4
    cout<<"4. Which of the following is not an operating system?"<<endl;
    cout<<"A.Linux\n B.Oracle\n C.Windows\n D.Mac\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice=='B'||choice=='b'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is B.Oracle "<<endl;
    }
      //Question 5
    cout<<"5. Which key uniquely identifies a record in a database table?"<<endl;
    cout<<"A.Foreign Key\nB.Candidate Key\nC.Primary Key\nD.Alternate Key"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
      if(choice=='C'||choice=='c'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is C.Primary Key"<<endl;
    }
      //Question 6
    cout<<"6. What is the correct operator for scope resolution in C++?"<<endl;
    cout<<"A.::\nB./\nC.-\nD.:\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
     if(choice=='A'||choice=='a'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is A.::"<<endl;
    }
      //Question 7
    cout<<"7. Which operator is used to allocate memory dynamically?"<<endl;
    cout<<"A.malloc\nB.alloc\nC.new\nD.create\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
      if(choice=='C'||choice=='c'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is C.new"<<endl;
    }
      //Question 8
    cout<<"8. Which feature binds data and functions together?"<<endl;
    cout<<"A.Inheritance\nB.Encapsulation\nC.Polymorphism\nD.Abstraction"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice=='B'||choice=='b'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is B.Encapsulation"<<endl;
    }
      //Question 9
    cout<<"9. Which OOP concept allows the same function to behave differently?"<<endl;
    cout<<"A.Polymorphism\nB.Inheritance\nC.Encapsulation\nD.Abstraction"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
      if(choice=='A'||choice=='a'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is A.Polymorphism"<<endl;
    }
      //Question 10
    cout<<"10. Which of the following is not an OOP principle?"<<endl;
    cout<<"A.Encapsulation\nB.Polymorphism\nC.Compilation\nD.Inheritance\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice=='C'||choice=='c'){
        cout<<"Right answer!"<<endl;
        total++;
    }
    else{
        cout<<"Wrong answer!The correct answer is C.Compilation"<<endl;
    }
    float accuracy=(total/10.0)*100;
    cout<<"Fetching results..."<<endl;
    cout<<"-----Result-----"<<endl;
    cout <<"\nThe total score is: "<<total<<"/10"<<endl;
    cout<<"Correct Answers: "<<total<<endl;
    cout<<"Wrong Answers: "<<10-total<<endl;
    cout <<"Accuracy: "<<accuracy<<"%"<< endl;
    if(accuracy==100){
        cout<<"Excellent!!Keep it up"<<endl;
    }
    else if(accuracy>=80){
        cout<<"Very Good!"<<endl;
    }
    else if(accuracy>=60){
        cout<<"Good!"<<endl;
    }
    else if(accuracy>=40){
    cout<<"Keep Practicing!"<< endl;
    }
    else{
        cout<<"Need more practice"<<endl;
    }
    
    cout<<"-----Quiz Game Ended-----"<<endl;
    return 0;
}
