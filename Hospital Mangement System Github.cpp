#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
class Patient
{
public:
string name=" ",type=" ";
int age;
long long int contact_no;
string adress=" ";
string status=" ";
Patient()
{
}
Patient(string n,string t, int a,int c, string adr, string sta)
{
name = "n";
type="t";
age = a;
contact_no=c;
adress = "adr";
status = "sta";
}
void setName(string n)
{
name = n;
}
void setType(string t)
{
type=t;
}
void setAdress(string a)
{
adress = a;
}
void setAge(int a)
{
age = a;
}
void setCelephone(int c)
{
contact_no=c;
}
void setStatus(string s)
{
status = s;
}
string getName()
{
return name;
}
string getType()
{
return type;
}
int getAge()
{
return age;
}
long long int getContact()
{
return contact_no;
}
string getAdress()
{
return adress;
}
string getStatus()
{
return status;
}

};
class coronaPatient : public Patient {
public:
string symptoms;
string city;
coronaPatient()
{
}
coronaPatient( string s, string c)
{

symptoms = s;
city = c;
}
void SetSymptoms(string s)
{
symptoms = s;
}
void SetCity(string x)
{
city = x;
}
string getSymptoms()
{
return symptoms;
}
string getCity()
{
return city;
}
void display() //displaying data of class corona patient
{
   
cout<<"Corona Patient"<<endl;
cout << "Name : " << getName() << endl;
cout << "Type : " << getType() << endl;
cout << "Age : " << getAge() << endl;
cout << "Contact Number:"<<getContact()<<endl;
cout << "Adress : " << getAdress() << endl;
cout << "Status : " << getStatus() << endl;
cout << "Symptoms: " << symptoms << endl;
cout << "City : " << city << endl;
}
};
class regularPatient : public Patient {
public:
string disease;
string symptoms;
string city;
regularPatient()
{
}
regularPatient(string i, string s, string c)
{
disease = i;
symptoms = s;
city = c;
}
void SetDisease(string i)
{
disease = i;
}
void SetSymptoms(string s)
{
symptoms = s;
}
void SetCity(string x)
{
city = x;
}
string getDisease()
{
return disease;
}
string getSymptoms()
{
return symptoms;
}
string getCity()
{
return city;
}
void display() //displaying data of class regular patient
{
cout<<"Regular Patient"<<endl;
cout << "Name : " << getName() << endl;
cout << "Type : " << getType() << endl;
cout << "Age : " << getAge() << endl;
cout << "Contact Number:"<<getContact()<<endl;
cout << "Adress : " << getAdress() << endl;
cout << "Status : " << getStatus() << endl;
cout << "Disease : " << disease << endl;
cout << "Symptoms: " << symptoms << endl;
cout << "City : " << city << endl;
}
};
class Data : public coronaPatient, public regularPatient {
public:
void welcome()
{
system("color 0B");
system("cls");
cout<<" OOP Project Presented By: Muhammad Ahmed Ali Qureshi                "<<endl;
cout << "\n\n\n____\n\n\n";
cout << " \n\t                        ============>> WELCOME <<============";
cout << " \n\n\t\t\t\t\t\t TO\n\t                      ---------------------------------------\n";
cout << "\t\t\t             HOSPITAL MANAGEMENT SYSTEM \n";

cout << "\n\n\n\n____\n\n\n";
}
void AddCovidPatient()
{
coronaPatient p;
ofstream ofile;
ofile.open("record.txt", ios::app); //input output stream  n first time file creating //opens a text file for appending. (appending means to add text at the end).
int a = 1; //prevoiys data not overwrited
if (ofile.is_open())
{
while(a)
{
cout<<" Corona Patient:"<<endl;
cout << "---------------------------------------------------------\n";
cout << "////////////////////////////////////////////////////////// \n";
cout << "---------------------------------------------------------- \n";
cin.ignore();
cout<<"Enter the name of patient: ";
getline(cin,p.name);
while((p.name<="A" || p.name>="Z")&&(p.name<="a" || p.name>="z"))
{
cin.ignore();
cout<<"Enter the name again: ";
getline(cin,p.name);
}
cout<<"Enter the Type of patient: ";
getline(cin,p.type);
while((p.name<="A" || p.name>="Z")&&(p.name<="a" || p.name>="z"))
{
cout<<"Enter the type again: ";
getline(cin,p.type);
}
cout<<"Enter the age: ";
while(!(cin>>p.age))
{
cout<<"Error enter the age again: ";
cin.clear() ;//clear the previous input
cin.ignore(123,'\n');//discard previous input
}
cout<<"Enter Contact.no: ";
while(!(cin>>p.contact_no))
{
cout<<"Error enter the Contact.no again:";
cin.clear() ;//clear the previous input
cin.ignore(123,'\n');//discard previous input
}
cin.ignore();
cout << "Enter adress: ";
getline(cin,p.adress);
cout << "Enter status : ";
cin >> p.status;
cin.ignore();
cout << "Enter symptoms: ";
getline(cin, p.symptoms);
cout << "Enter city : ";
cin >> p.city;
cout << "---------------------------------------------------------\n";
cout << "////////////////////////////////////////////////////////// \n";
cout << "---------------------------------------------------------- \n";
//Writing with in the file
ofile <<" Corona Patient:"<<endl<<endl;
ofile << "Name : " << p.name << endl;
ofile <<" Type :"<<p.type<<endl;
ofile << "Age : " << p.age << endl;
ofile << "Contact Number: : " << p.contact_no << endl;
ofile << "Adress : " << p.adress << endl;
ofile << "Status : " << p.status << endl;
ofile << "Symptoms : " << p.symptoms << endl;
ofile << "City : " << p.city << endl;
ofile << "-----------------------------------\n";
cout << "Enter 1 if you want to continue adding covid patients or 0 to exit : "<<endl;
 cin >> a;
}
}
}
void addRegularPatient()
{
regularPatient p;
ofstream ofile;
ofile.open("record.txt", ios::app);
int a = 1;
if (ofile.is_open())
{
while (a) //dont know how much patients we are adding
{

cout << "---------------------------------------------------------\n";
cout << "******************** \n";
cout << "---------------------------------------------------------- \n";

cout <<"Enter the name of patient: ";
cin.ignore();
getline(cin,p.name);
while((p.name<="A" || p.name>="Z")&&(p.name<="a" || p.name>="z"))
{
cin.ignore();
cout<<"Enter the name again: ";
getline(cin,p.name);
}
cout <<"Enter the Type of patient: ";
getline(cin,p.type);
while((p.name<="A" || p.name>="Z")&&(p.name<="a" || p.name>="z"))
{
cout<<"Enter the type again: ";
getline(cin,p.type);
}
cout<<"Enter the age: ";
while(!(cin>>p.age))
{
cout<<"Error enter the age again: ";
cin.clear() ;//clear the previous input
cin.ignore(123,'\n');//discard previous input
}
cout<<"Enter Contact.no: ";
while(!(cin>>p.contact_no))
{
cout<<"Error enter the Contact.no again:";
cin.clear() ;//clear the previous input
cin.ignore(123,'\n');//discard previous input
}
cin.ignore();
cout << "Enter address: ";
getline(cin,p.adress);
cout << "Enter status : ";
cin>> p.status;
cout << "Enter Disease : ";
cin>> p.disease;
cin.ignore();
cout << "Enter symptoms: ";
getline(cin,p.symptoms);
cout << "Enter city : ";
cin>> p.city;
cout << "---------------------------------------------------------\n";
cout << "******************** \n";
cout << "---------------------------------------------------------- \n";
//Writing with in the file
ofile <<" Regular Patient:"<<endl<<endl;
ofile << "Name : " << p.name << endl;
ofile << "Type : " << p.type << endl;
ofile << "Age : " << p.age << endl;
ofile << "Contact Number: : " << p.contact_no << endl;
ofile << "Adress : " << p.adress << endl;
ofile << "Status : " << p.status << endl;
ofile << "Disease : " << p.disease << endl;
ofile << "Symptoms : " << p.symptoms << endl;
ofile << "City : " << p.city << endl;
ofile << "-----------------------------------\n";
 cout << "Enter 1 if you want to continue adding regular patients or 0 to exit : "<<endl;
 cin >> a;
}
}
}
void serch(string m)
{
system("cls");
bool found = false;
ifstream ifile;
string s = "";
ifile.open("record.txt");
if (ifile.is_open())
{
while (!ifile.eof()) //also we dont know how ,many record when readng file we use while loop
//eof = end of file   for running the loop not operator for converting 0 to 1  present becz  while(0) will not run n if file has data exist=0,if not =1
{
ifile >> s;
if (s == m) //search variable equal equal to name variable
{
found = true;
cout << s;
getline(ifile, s);//represents the record details
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
cout << s << endl;
getline(ifile, s);
break;
}
}
if (found == false) {
cout << "\n\nRecord Not Found!!\n\n";
}
system("pause");//which tells the OS to run the pause program.
}
}

void deleteP()
{

bool found = false;
system("cls");
string s = "";

char another = 'y';
do
{
string nm;
ifstream rrr;
ofstream temp;
int count = 0;
cout << "\n\nEnter patient name to delete : ";
cin.ignore();
getline(cin,nm);
temp.open("temp.txt");
rrr.open("record.txt");
while (!rrr.eof()) {
rrr >> s;
if (nm != s) {
temp << s;
count++;
if (count == 3) {
temp << "\n";
count = 0;
}
}
else if (nm == s) {
found = true;
for (int i = 0; i < 11; i++) {
getline(rrr, s);
}
}
}
rrr.close();
temp.close();
remove("record.txt");
rename("temp.txt", "E.//record.txt");
if (found == true) {
cout << "Record deleted successfully.";
}
else {
cout << "\n\nRecord Not Found!! nally\n\n";

}
cout << "\n\nTap 0 to move back to menu: ";
cin >> another;
} while (another==0);

}
};
int main()
{
system("color 0B");
cout << " \n\t                        ============>> Security Check <<============";
cout<<endl<<endl;
string password;
string userName;
int loginAttempt=0;
while (loginAttempt < 3)
{
	system("cls");
cout << " \n\t                        ============>> Security Check <<============"<<endl;
system("color 0B");
cout << "Enter Username : ";
getline(cin, userName);

string user="admin";


   string pass ="";
   
   char ch;
   cout << "Enter your password : "       ;
   ch = getch();
   while(ch != 13  ){//character 13 is enter
   if (ch==8){
      	cout<<"\b \b";
      	
      	ch = getch();
      	
      	ch = getch();
      	
      	  }
      else {
	  pass.push_back(ch);
      cout << '*';
      ch = getch();
 }

   }
   
cout<<endl;
if(pass=="air123" && userName==user)
{
system("color 2f");
cout << " \n\t                       ============>> Access Granted <<============"<<endl<<endl;
cout << " \n\t                       ============>> Admin  Logged in <<============"<<endl;
system("pause");
Data ex;
char choice,choice1;
string n,e;
ex.welcome();
system("pause");
system("cls");
p:
system("color DF");
cout << "\n\n\n\t\t\t====== MAIN MENU ======\n\t\t";
cout << "\t\t\t\t\n\t\t\t==>> 1. SHOW MENU.\n\t";;
cout << "\n\t\t\t==>> 0. EXIT.\t\t";
cout << "\n\n\t\t\t======================\n\t\t";
cout << "\n\n ==>> Enter your choice : "<<endl;
cin>>choice;
do
{

switch (choice) //for main menu
{
q:
case '1':
system("color 3F");
cout << "\n\t==>> 1. ADD CORONA PATIENT. \n";
cout << "\n\t==>> 2. ADD REGULAR PATIENT. \n";
cout << "\n\t==>> 3. SEARCH PATIENT. \n";
cout << "\n\t==>> 4. DELETE PATIENT. \n";
cout << "\n\t==>> 0. EXIT.\n";
cout << "\n\n ==>> Enter your choice : "<<endl<<endl;
cin>>choice1;
switch (choice1) //for further options in main menu
{
case '1':
system("color E0");
cout << "Enter Covid Patients : \n \n";
ex.AddCovidPatient();
break;
case '2':
system("color A5");
cout << " \n \n Enter Regular Patients \n \n ";
ex.addRegularPatient();
break;
case '3':
system("color 71");
cout << "\n\nEnter the name of patient you want to search : "<<endl;
cin>>n;   //name
ex.serch(n);
break;
case '4':
system("color 60");	
ex.deleteP();	
break;
case '0':
system("color 7D");
exit(1);
system("pause");
default:
cout<<" Invalid Command Enter again :"<<endl;
goto q;
}
break; // case 1
case '0':
exit(1);
break;
default:
cout<<" Invalid Command Enter again :"<<endl;
goto p;
}
}while(choice!=1||choice!=0);
break;
}

else
{
system("color 4a");
cout << " \n\t                  ============>> Invalid Username or Password  <<============"<<endl;
system("pause");
loginAttempt++;
}
}
if(loginAttempt==3)
{
	cout << "Too many login attempts! The program will now terminate :( ";
	exit(0);
}
return 0;
}
