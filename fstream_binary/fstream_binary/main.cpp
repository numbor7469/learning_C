//
//  main.cpp
//  fstream_binary
//
//  Created by jasen on 16/6/3.
//  Copyright © 2016年 jasen. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

struct OBJECT {
    int number;
    char letter;
} obj;






int main(int argc, const char * argv[]) {
    // insert code here...
    /*ofstream fout("/Users/jasen/Documents/C_language/fstream_binary/fstream_binary/test_fstream.dat", ios::binary);
    
    obj.number = 15;
    obj.letter = 'M';
    
    fout.write((char*)(&obj), sizeof(obj));
    cout << "every out thing has been done!\n";*/
    
    ifstream fin("/Users/jasen/Documents/C_language/fstream_binary/fstream_binary/test_fstream.dat", ios::binary);
    fin.read((char*)(&obj), sizeof(obj));
    
    cout << obj.number << obj.letter << "\n";
    cout << "every in thing has been done!\n";
    
    
    
    
    return 0;
}
