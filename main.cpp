#include "Test.h"
#include <iostream>
using namespace std;

vector<int> selectActivities(vector<int> start, vector<int> finish)
{
    vector<int> answer;
    answer.push_back(0);

    for(unsigned int i = 0; i < start.size(); ++i)
    {
      unsigned int index = answer.size() - 1;
      if(start[i] >= finish[index])
      {
        cout<<"Start: "<<start[i]<<endl;
        cout<<"Finish: "<<finish[i]<<endl;
        cout<<"Index: "<<index<<" and i: "<<i<<endl;
        answer.push_back(i);
      }
    }
    return answer;
}

int main ()
{
    test();
    return 0;
}
