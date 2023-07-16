/*
 Auto keyword is very helpful to shorten the syntax of iterator , it automatically identifies the datatype of the variable .

 In case of iterators we have to write--->

 vector<int> :: iterator it;

 for(it = v.begin; it!=v.end();++it){
    cout<<(*it)<<" ";
 }

shortcut-->(we not have to write the iterator statement we can directly use auto there)

for(auto it = v.begin; it!=v.end();++it)


and in place of
for(pair<int,int> &value :v_p){
    cout<<value.first <<" "<<value.second;
}

shortcut--> (we can use auto)
for(auto &value :v_p)


*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};

    // using range based loop and auto to shorten then syntax

        for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}
