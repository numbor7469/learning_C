//
//  main.cpp
//  test_fstream
//
//  Created by jasen on 16/6/3.
//  Copyright © 2016年 jasen. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ofstream fout;
    int out_number = 12;
    fout.open("/Users/jasen/Documents/C_language/test_fstream/test_fstream/test_fstream.txt");
    fout << "Here is a number for you: " << out_number << "\n";
    fout << "ok! thanks";
    fout << flush;
    fout.close();
    cout<< "every out thing has done\n";
    
    
    
    ifstream fin;
    fin.open("/Users/jasen/Documents/C_language/test_fstream/test_fstream/test_fstream.txt");
    char words[101];
    fin.getline(words, 100);
    cout << "every in things has done!\n";
    cout << words << "\n";
    
    
    
    return 0;
}
