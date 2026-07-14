#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int scores[30] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };

    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    int passed = 0;
    int aStudents = 0;

    for (int i = 0; i < 30; i++)
    {
        sum += scores[i];

        if (scores[i] > highest)
            highest = scores[i];

        if (scores[i] < lowest)
            lowest = scores[i];

        if (scores[i] >= 60)
            passed++;

        if (scores[i] >= 90)
            aStudents++;
    }

    double average = (double)sum / 30;

    cout << "Number of students: " << 30 << endl;
    cout << fixed << setprecision(2);
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "Students passed: " << passed << endl;
    cout << "Students with A: " << aStudents << endl;

    cout << "Scores in original order: "<<endl;
    for (int score : scores)
    {
        cout << score << " ";
    }

    cout << "Scores in reverse order: "<<endl;
    for (int i = 29; i >= 0; i--)
    {
        cout << scores[i] << " ";
    }

    cout << endl;

    return 0;
}
