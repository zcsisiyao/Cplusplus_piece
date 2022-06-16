#include<iostream>
using namespace std;

namespace bit{
    class String{
        public:
            typedef char* iterator;
        public:
            String(const char* str = ""){
                _size = strlen(str);
                _capacity = _size;
                _str = new char[_capacity+1];
                strcpy(_str, str);

            }
            String(const String& s)
                :_str(nullptr)
                ,_size(0)
                ,_capacity(0)
            {
                String tmp(s);
                this->Swap(tmp);
            }
        private:
            char* _str;
            size_t _capacity;
            size_t _size;
    };
}