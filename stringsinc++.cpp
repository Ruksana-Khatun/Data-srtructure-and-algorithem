#include <iostream>
#include <vector>

using namespace std;

void func() {
    int size;
    cin >> size;
    vector<int> v(size);
    int x = 1;
    for (int i = 0; i < size; ++i) {
        v[i] = x;
        cout << v[i] << endl;
        ++x;
    }
    cout << endl;
}

int main() {
  
    vector<int>aray={1,2,3,4,5};
     cout<<"Size= "<<aray.size()<<endl;
    cout<<"capiicaty="<<aray.capacity()<<endl;
     aray.push_back(5);
    cout<<"Size= "<<aray.size()<<endl;
    cout<<"capiicaty="<<aray.capacity()<<endl;
    aray.pop_back();
       cout<<"Size= "<<aray.size()<<endl;
    cout<<"capiicaty="<<aray.capacity()<<endl;
   
    return 0;
}