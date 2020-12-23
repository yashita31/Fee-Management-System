#include<iostream> // Used to call functions like cin and cout
#include<fstream> //Input/Output stream class to operate on files
#include<iomanip> //It sets parameters like flags,widths etc
#include<string>
#include<cstdio> //To perform input output operations in c++

using namespace std;
class student
{
public:
long static int  f1a,f1h,s2a,s2h,t3a,t3h,f4h,f4a;//Constant values of academic and hostel fees...
long int excess,remaining,paid;
char name[20],id[15],branch[5];
int year;
char r;


void get();//Takes input of students details..
void fees(int year,char r,long int paid);//This function tells how much fees has to be paid...
void show(); //Displays students record on screen..
void modify();//Modifies students record....





};
long int student::f1a=280700;
long int student::f1h=118000;
long int student::s2a=280700;
long int student::s2h=110500;
long int student::t3a=118700;
long int student::t3h=110500;
long int student::f4a=118700;
long int student::f4h=82875;

void student::fees(int year,char r,long int paid)
{
if(year==1)
{
cout<<"\t\nYour academic fees is: "<<f1a<<endl;
cout<<"\t\nYour hostel fees is: "<<f1h<<endl;
cout<<"\t\nTotal fees to be paid is: "<<f1a+f1h<<endl;

if(r=='d')
    {
   
    cout<<"\nPaid amount : "<<paid<<endl;
    if(paid>f1a)
    {
        excess=paid-f1a;
cout<<"\n......You have paid excess amount  ...... "<<endl;
    cout<<"\nThe amount is"<<excess<<endl;
        }
        else
        {
if(paid<f1a)
{
remaining=f1a-paid;
cout<<"\nThe remaining balance to be paid is "<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
        }
    }
    else
{
if(r=='h')
{

if(paid>f1a+f1h)
{
excess=paid-(f1a+f1h);
cout<<"\n......You have paid excess amount......"<<endl;
cout<<"\nThe amount is"<<excess<<endl;
}
else
{
if(paid<f1a+f1h)
{
remaining=(f1a+f1h)-paid;
cout<<"\nThe remaining balance to be paid is"<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
}
}
else
cout<<"\nWrong input"<<endl;
}
}
else
{
if(year==2)
    {
    cout<<"\t\nYour academic fees is"<<s2a<<endl;
cout<<"\t\nYour hostel fees is"<<s2h<<endl;
cout<<"\t\nTotal fees to be paid is:"<<s2a+s2h<<endl;

if(r=='d')
    {
   
    cout<<"\nThe total amount of fees you have paid is :"<<paid<<endl;
    if(paid>s2a)
    {
    excess=paid-s2a;
cout<<"\n......You have paid excess amount  ...... "<<endl;
    cout<<"\nThe amount is"<<excess<<endl;
        }
        else
        {
if(paid<s2a)
{
remaining=s2a-paid;
cout<<"\nThe remaining balance to be paid is "<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
        }
    }
    else
{
if(r=='h')
{

cout<<"\nThe total amount of fee you have paid is : "<<paid<<endl;
if(paid>s2a+s2h)
{
excess=paid-(s2a+s2h);
cout<<"\n......You have paid excess amount......"<<endl;
cout<<"\nThe amount is"<<excess<<endl;
}
else
{
if(paid<s2a+s2h)
{
remaining=(s2a+s2h)-paid;
cout<<"\nThe remaining balance to be paid is"<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
}
}
else
cout<<"\nWrong input"<<endl;
}
}
else
{
if(year==3)
{
cout<<"\t\nYour academic fees is"<<t3a<<endl;
cout<<"\t\nYour hostel fees is"<<t3h<<endl;
cout<<"\t\nTotal fees to be paid is:"<<t3a+t3h<<endl;

if(r=='d')
    {
   
    cout<<"\nThe total amount of fees you have paid is : "<<paid<<endl;
    if(paid>t3a)
    {
    excess=paid-t3a;
cout<<"\n......You have paid excess amount  ...... "<<endl;
    cout<<"\nThe amount is"<<excess<<endl;
        }
        else
        {
if(paid<t3a)
{
remaining=t3a-paid;
cout<<"\nThe remaining balance to be paid is "<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
        }
    }
    else
{
if(r=='h')
{

cout<<"\nThe total amount of fee you have paid is "<<paid<<endl;
if(paid>t3a+t3h)
{
excess=paid-(t3a+t3h);
cout<<"\n......You have paid excess amount......"<<endl;
cout<<"\nThe amount is"<<excess<<endl;
}
else
{
if(paid<t3a+t3h)
{
remaining=(t3a+t3h)-paid;
cout<<"\nThe remaining balance to be paid is"<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
}
}
else
cout<<"\nWrong input"<<endl;
}
}
else
{
if(year==4)
{
cout<<"\t\nYour academic fees is"<<f4a<<endl;
cout<<"\t\nYour hostel fees is"<<f4h<<endl;
cout<<"\t\nTotal fees to be paid is:"<<f4a+f4h<<endl;

if(r=='d')
    {
   
    cout<<"\nThe total amount of fees you have paid: "<<paid<<endl;
    if(paid>f4a)
    {
    excess=paid-f4a;
cout<<"\n......You have paid excess amount  ...... "<<endl;
    cout<<"\nThe amount is"<<excess<<endl;
        }
        else
        {
if(paid<f4a)
{
remaining=f4a-paid;
cout<<"\nThe remaining balance to be paid is "<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
        }
    }
    else
{
if(r=='h')
{

cout<<"\nThe amount of fee you have paid: "<<paid<<endl;
if(paid>f4a+f4h)
{
excess=paid-(f4a+f4h);
cout<<"\n......You have paid excess amount......"<<endl;
cout<<"\nThe amount is"<<excess<<endl;
}
else
{
if(paid<f4a+f4h)
{
remaining=(f4a+f4h)-paid;
cout<<"\nThe remaining balance to be paid is"<<remaining<<endl;
}
else
{
cout<<"\nYou have paid the total fee"<<endl;
}
}
}
else
cout<<"\nWrong input"<<endl;
    }
}
}
}
    }
}
void student::get()
{
cin.getline(name,20);
cout<<"Enter your name"<<endl;
cin.getline(name,20);
cout<<"Enter your Registration Id"<<endl;
cin.getline(id,15);
cout<<"Enter your branch"<<endl;
cin.getline(branch,5);
cout<<"Enter you are in which year"<<endl;
cin>>year;
cout<<"Enter h for hosteller and d for dayschollar"<<endl;
cin>>r;
cout<<"Enter the amount of fee you have paid"<<endl;
cin>>paid;
cout<<"\n\n*** Student record created ***"<<endl;
}

void student::show()
{
cout<<"\nName : "<<name<<endl;
cout<<"\nId : "<<id<<endl;
cout<<"\nBranch : "<<branch<<endl;
cout<<"\nYear of Study : "<<year<<endl;
if(r=='h')
cout<<" \n You are a hostelite";
else
cout<<" \n You are a dayscholar";
fees(year,r,paid);

}
void student::modify()
{
cout<<"\n...Now you can modify your record...";
cout<<"\nEnter your new details";
    cin.getline(name,20);
cout<<"\nEnter your name"<<endl;
cin.getline(name,20);
cout<<"Enter your Registration Id"<<endl;
cin.getline(id,15);
cout<<"Enter your branch"<<endl;
cin.getline(branch,5);
cout<<"Enter you are in which year"<<endl;
cin>>year;
cout<<"Enter h for hosteller and d for dayschollar"<<endl;
cin>>r;
cout<<"Enter the amount of fee you have paid"<<endl;
cin>>paid;
}

void display_record(string n);//Reads the file and displays the details of the student...
void modify_record(string n);//Reads the file and modifies the records...
void delete_record(string n);//Deletes the students record....
void write_record();//writes the record into a binary file...
void begin();//Intoductory screen...


int main()
{
int c;
string n;
begin();
while(1)
{
cout<<"\n Enter your choice \n 1.Create each students profile \n 2.Dispaly student record \n 3.Update student fee record \n 4.Delete students record  \n 5.Exit\n"<<endl;
cin>>c;
switch(c)
{
case 1:
write_record();
    break;
case 2:
cout<<"\n Enter the id of the student whose details you want to display";
cin>>n;
display_record(n);
break;
case 3:
cout<<"Enter the id of the student whose details you want to modify";
cin>>n;
modify_record(n);
break;
case 4:
cout<<"Enter the id of the student whose record you want to delete";
cin>>n;
delete_record(n);
break;
case 5:
exit(0);
   
}
}
}
void display_record(string n)
{
       student s;
       int f=0;
       ifstream inFile;
       inFile.open("student.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       cout << "\nALL STUDENT'S DETAILS\n";
       while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
       {
              if (s.id == n)
              {
                     s.show();
                     f=1;
                     
              }
       }
       inFile.close();
       if (f == 0)
              cout << "\n\t***Student record does not exist***";
}
void modify_record(string n)
{
       int f = 0;
       student s;
       fstream File;
       File.open("student.dat", ios::binary | ios::in | ios::out);
       if (!File)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       while (!File.eof() && f == 0)
       {
              File.read(reinterpret_cast<char *> (&s), sizeof(student));
              if (s.id == n)
              {
                     s.show();
                     s.modify();
                     int pos = (-1)*static_cast<int>(sizeof(student));
                     File.seekp(pos, ios::cur);
                     File.write(reinterpret_cast<char *> (&s), sizeof(student));
                     cout << "\n\n\t*** Record Updated ***";
                     f = 1;
              }
       }
       File.close();
       if (f == 0)
              cout << "\n\n *** Record Not Found *** ";
}
void delete_record(string n)
{
       student s;
       ifstream inFile;
       ofstream outFile;
       inFile.open("student.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       outFile.open("student1.dat", ios::binary);
       inFile.seekg(0, ios::beg);
       while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
       {
              if (s.id != n)
              {
                     outFile.write(reinterpret_cast<char *> (&s), sizeof(student));
              }
       }
       inFile.close();
       outFile.close();
       remove("student.dat");
       rename("student1.dat", "student.dat");
       cout << "\n\t ..Record Deleted ..";
}
void write_record()
{
  student s;
       ofstream outFile;
       outFile.open("student.dat", ios::binary | ios::app);
       s.get();
       outFile.write(reinterpret_cast<char *> (&s), sizeof(student));
       outFile.close();
}
void begin()
{
    cout<<"\t\t\t\t\t\tFEES MANAGEMENT SYSTEM"<<endl<<endl;
    cout << "Press ENTER to get started"<<endl;
    cin.get();
}
