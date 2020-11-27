#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
    private:
    int eno;
    string ename;
    int age;

    public:
    Employee()
    {
        age=0;
        eno=0;
        ename="";
    }
    void getdetail()
    {
        cout<<"Enter the details";
        cin>>age;
        cin>>eno;
        cin>>ename;
    }

    void putdetail()
    {
        cout<<"Employee "<<eno<<"\n Name: "<<ename<<"\n Age: "<<age;
    }

    int enos()
    {
        return eno;
    }

    ~Employee()
    {
        cout<<"Employee resigned";
    }
};

int main()
{
    Employee e;
    int choice;
    while(1)
    {
      cout<<"MENU\n";
      cout<<"1.Add Employee\n";
      cout<<"2.Employee Details"<<endl;
      cout<<"3.Delete Employee"<<endl;
      cout<<"4.EXIT";
      cout<<"\nEnter your choice\n";
      cin>>choice;
      switch(choice)
      {
          case 1:{
                     e.getdetail();
                     ofstream file;
                     file.open("employee.bin",ios::app|ios::out);
                     file.write((char*)&e,sizeof(e));
                     file.close();
                     break;
                 }

          case 2:{
                    ifstream file;
                    file.open("employee.bin",ios::in);
                    while(file.read((char*)&e,sizeof(e)))
                    {
                     e.putdetail();
                    }
                    file.close();
                    break;
                 }

          case 3:{
                      int no;
                      cout<<"Enter the employee ID";
                      cin>>no;
                      ifstream file;
                      ofstream temp;
                      file.open("employee.bin",ios::in);
                      temp.open("final.bin",ios::out);
                      while(file.read((char*)&e,sizeof(e)))
                      {
                          if(e.enos()==no)
                          {
                            e.putdetail();
                            cout<<"is deleted";
                          }
                          else
                          {
                            temp.write((char*)&e,sizeof(e));
                          }
                      }
                      file.close();
                      temp.close();

                      ifstream temp1;
                      ofstream file1;
                      temp1.open("final.bin",ios::in);
                      file1.open("employee.bin",ios::out);
                      while(temp1.read((char*)&e,sizeof(e)))
                      {
                        file1.write((char*)&e,sizeof(e));
                      }
                     temp1.close();
                     file1.close();
                     break;
                 }

         case 4:{
                     cout<<"Thank you";
                     exit(0);
                }
      }
    }
}
