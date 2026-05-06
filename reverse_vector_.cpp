#include<iostream>
#include<vector>

using namespace std;

int reverse(vector<int> vec)
{
    int start=0;
    int end=vec.size()-1;
    
    while(start<end)
    {
        int temp;

        temp=vec.at(start);
        vec.at(start)=vec.at(end);
        vec.at(end)=temp;

        start++;
        end--;
    }

    cout<<"value after reversing:";
    for(int i:vec)
    {
        cout<<i<<" ";
    }


    


}

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout<<"value Before reversing: ";
 
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(vec);
    
}