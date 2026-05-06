#include<iostream>
#include<vector>

using namespace std;

int single_number(vector<int>& v)
{


    for(int i=0; i<v.size();i++)
    {
        int ans=v.at(i);

        for(int j=1; j<v.size();j++)
        {
            ans=ans^v[j];
        }

         return ans;
    }
}

int main()
{
    vector<int>vec;

    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(4);


    int result= single_number(vec);
     
    cout<<"Single value: "<<result<<endl;
}