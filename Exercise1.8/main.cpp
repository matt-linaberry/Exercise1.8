//
//  main.cpp
//  Exercise1.8
//
//  Created by Matthew Linaberry on 3/14/15.
//  Copyright (c) 2015 Matthew Linaberry. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout<<"/*";
    std::cout<<"*/";
    std::cout<</* "*/" */;";  // this was the broken example in the book.
    std::cout<< /* "*/" /* "/*" */;
    return 0;
}
