#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector <int> lensub = {1, 2, 2};

    string s = "";
    int k = 1;

    if (iTest * 100 < testnum * 20)
    {
        k = 0;
        
    }
    else if (iTest * 100 < testnum * 40)
    {
        k = 1;
    } else {
        // Sinh test ngẫu nhiên
       k = 2;
    }

    int len = lensub[k] * (iTest * 1.0 / testnum);
    if (len == 0) len = 1;

    s = random_string(1, "123456789") + random_string(len, "0123456789");
   
    int n = stoi(s);

    if (iTest >= testnum - 10)
    {
        n = 100;
    }

     if (iTest < 5) {
        n = iTest + 1;
    }


    vector<int> a = random_vector(n, 1, 2 * n);

    if (iTest == testnum - 1) {
        cout << "4 7" << endl;
        cout << "2 4 6 8" << endl;
        return;
    }

    if (iTest == testnum ) {
        cout << "5 30" << endl;
        cout << "40 400 666 844 35" << endl;
        return;
    }

    int m = n * n + random(n);

    cout << n << " " << m << endl;
    print_vector(a, cout);
}

