# Require
c++11  or  `__VA_ARGS__` compiler support.

It doesn't works on c99.

# How to use

```c++
#include<iostream>
#include<string>
#include"stringEnum.h"
using namespace std;

STRING_ENUM(Week,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday)

int main(){
    Week::Enum day = Week::Sunday;
    cout<<"Today is "<<Week::getString(day)<<endl;
    string nextDay[] = {"Monday","asdiuhnkjc"};
    for(auto next:nextDay){
        try{
            if(Week::getEnum(next)==Week::Monday){
                cout<<"Go to work"<<endl;
            }
        }
        catch(invalid_argument &e){
            cout<<"error"<<endl;
        }
    }
}

//output:
//Today is Sunday
//Go to work
//error
```

You can separate the definition and declaration:
```c++
//in .h
#define List Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
STRING_ENUM_DECLARE(Week,List)

//in .cpp
STRING_ENUM_DEFINE(Week,List)
```
