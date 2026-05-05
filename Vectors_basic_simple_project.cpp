#include<iostream>
#include<vector>

using namespace std;

class university
{
   private:
   
   vector<string> name;
   vector<int> marks;
   vector<char> grade;

   public:
   
   university()
   {

   }

   void push(string n, int m, char g)
   {
      name.push_back(n);
      marks.push_back(m);
      grade.push_back(g);
   }

   void pop()
   {
      name.pop_back();
      marks.pop_back();
      grade.pop_back();
   }

   string front()
   {
       return name.front();
   }

   string back()
   {
       return name.back();
   }

   void average()
   {
       float sum=0;
       for(int i: marks)
       {
           sum=sum+i;
       }

       float avg=sum/marks.size();

       cout<<"Average Marks of Class: "<<avg<<endl;
   }

    void fail_students()  
    {
    bool found = false;
    int i = 0;  
    for (int m : marks)
    {
        if (m < 60)
        {
            cout << name[i] << " failed with " << m << " marks\n";
            found = true;
        }
        i++;  
    }
    if (!found)
        cout << "No failing students!\n";
    }

    void count()
    {
        int count = 0;

        for(int i:marks)
        {
            count++;
        }

        cout<<"Total student: "<<count<<endl;
    }




    void wrong()
    {
        name.pop_back();
        marks.pop_back();
        grade.pop_back();
    }
    

    void display()
    {
        for(int i=0; i<name.size();i++)
        {
            cout<<name.at(i)<<" "<<marks.at(i)<<" "<<grade.at(i)<<endl;
        }
    }

};


int main()
{
    university u1;
    
    int choice;

    while(choice != 0)
   {

    cout<<"\nEnter choice\n"
        <<"1.Add Student\n"
        <<"2.Remove student\n"
        <<"3.Show First student\n"
        <<"4.Show last student\n"
        <<"5.Show Marks 1Average of the Class\n"
        <<"6.Remove wronge Entry\n"
        <<"7.Failed students\n"
        <<"8.Display All Data\n"
        <<"9.Total student in the class\n"
        <<"0.Exit\n";
    
    cout<<"\nEnter choice: ";
    cin>>choice;
    cout<<"\n";
    switch(choice)
    {
        case 1:
        {
            string name;
            int marks;
            char grade;

            cout<<"Enter the name of the student: ";
            cin>>name;
            cout<<"Enter marks: ";
            cin>>marks;
            cout<<"Enter grade: ";
            cin>>grade;

            u1.push(name,marks,grade);
            break;
        }

        case 2:
        u1.pop();
        break;

        case 3:
        cout<<"First student:"<< u1.front();
        break;

        case 4:
        cout<<"Last student:"<<u1.back();
        break;

        case 5:
        u1.average();
        break;

        case 6:
        u1.wrong();
        break;

        case 7:
        u1.fail_students();
        break;

        case 8:
        u1.display();
        break;

        case 9:
        u1.count();
        break;

        case 0:

        cout<<"program Exit.";
        break;

        default:

        cout<<"invalid choice";



    }
   
   }
}