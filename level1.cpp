#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    ofstream outputFile("output1.txt");

    while (n--)
    {
        string line;
        cin >> line;
        int w, s, a, d;
        w = count(line.begin(), line.end(), 'W');
        s = count(line.begin(), line.end(), 'S');
        a = count(line.begin(), line.end(), 'A');
        d = count(line.begin(), line.end(), 'D');
        outputFile << w << " " << d << " " << s << " " << a;
        outputFile << endl;
    }

    outputFile.close();

    return 0;
}
