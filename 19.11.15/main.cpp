//
//  main.cpp
//  19.11.15
//
//  Created by s20181105879 on 2019/11/15.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <iostream>
#include <string>
#include <string.h>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
   cout<<"dfjgfd"<<endl;
    map<string,long> m;
    string name;
    long len;
    long n,mm;
    cin>>n>>mm;
    for(long i=0;i<n;i++)
    {
        cin>>name>>len;
        if(len<mm)
        {
            m[name]+=mm;
        }
        else
        {
            m[name]+=len;
        }
        
    }
    cin>>n;
    for(long i=0;i<n;i++)
    {
        cin>>name;
        if(m[name]==0)
        {
            cout<<"No Info"<<endl;
        }
        else{
            cout<<m[name]<<endl;
        }
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
