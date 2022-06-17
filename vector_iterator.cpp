#include<iostream>
#include<vector>
using namespace std;
void PrintVector(const vector<int>& v){
    // const对象使用const迭代器进行遍历打印
    vector<int>::const_iterator it = v.begin();
    while (it != v.end())
    {
        cout << *it << " ";
        ++it;
    }
    cout << endl;  
}
int main(){
    // 使用push_back插入4个数据
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // 使用迭代器进行遍历打印
    vector<int>::iterator it = v.begin();
    while (it != v.end()){
        cout << *it << " ";
        ++it;
    }
    return 0;
}