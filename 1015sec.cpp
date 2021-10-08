#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class student
{
    public:
    int number, score_mor, score_tal;
};
int cmp(class student a, class student b)
{
    if (a.score_mor + a.score_tal != b.score_mor + b.score_tal)
    {
        return (a.score_mor + a.score_tal) > (b.score_mor + b.score_tal);
    }
    else if (a.score_mor != b.score_mor)
    {
        return a.score_mor > b.score_mor;
    }
    else
    {
        return a.number < b.number;
    }
}
int main()
{
    student s;
    vector<student> v[4];
    int N, L, H;
    int total;
    cin >> N >> L >> H;
    total = N;
    for (int i = 0; i < N; i++)
    {
        cin >> s.number >> s.score_mor >> s.score_tal;
        if (s.score_mor < L || s.score_tal < L)
        {
            total--;
        }
        else if (s.score_mor >= H && s.score_tal >= H)
        {
            v[0].push_back(s);
        }
        else if (s.score_mor >= H && s.score_tal <H)
        {
            v[1].push_back(s);
        }
        else if (s.score_mor <H && s.score_tal < H && s.score_mor >= s.score_tal)
        {
            v[2].push_back(s);
        }
        else
        {
            v[3].push_back(s);
        }
    }
    cout << total << endl;
    for (int i = 0; i < 4; i++)
    {
        sort(v[i].begin(), v[i].end(), cmp);
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j].number <<" "<< v[i][j].score_mor <<" "<< v[i][j].score_tal << endl;
        }
    }
}