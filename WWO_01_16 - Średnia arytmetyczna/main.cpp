/*
 Dla podanego ciąu liczb, znajdź taką, która jest najbliższą średniej arytmetycznej tych liczb. Jeśli jest kilka takich, wypisz największą.

 Wejście
 W pierwszym wierszu jedna liczba n określająca długość ciągu (nie więcej niż 1000)

 W drugim wierszu n niewielkich liczb naturalnych.

 Wyjście
 Jedna liczba spełniająca kryteria zadania.
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n,p;
    cin >> n;
    int s = 0;
    vector<int> v;
    double sr,pom;
    for(int i = 0;i < n;i++)
    {
        cin >> p;
        v.push_back(p);
        s += v[i];
    }
    sr = s/(double)n;
    pom = abs(v[0] - sr);
    int odp = v[0];
    for(int i = 0;i < n;i++)
    {
        if(pom > abs(v[i] - sr)){
            pom = abs(v[i] - sr);
            odp = v[i];
    }}
    cout << odp << endl;
}
