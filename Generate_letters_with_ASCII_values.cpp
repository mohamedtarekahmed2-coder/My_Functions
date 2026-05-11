#include <iostream>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void generate_letters_with_ASCII_values(char start, char end)
{
    for (int i = start; i <= end; i++)
    {
        cout << "Letter : " << start 
             << ", ASCII Value : " << i << '\n';
        start++;
    }
}

int main(){
    fast_io();
    char start, end;
    cin >> start >> end;
    generate_letters_with_ASCII_values(start, end);

    return 0;
}
