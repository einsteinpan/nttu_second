#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string id;
    int score;
    int rank;
};

bool compareStudents(const Student& s1, const Student& s2) {
    if (s1.score == s2.score) {
        return s1.id < s2.id;
    }
    return s1.score > s2.score;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        std::cin >> N;

        std::vector<Student> students;

        for (int i = 0; i < N; i++) {
            Student student;
            std::cin >> student.id >> student.score;
            students.push_back(student);
        }

        std::sort(students.begin(), students.end(), compareStudents);

        students[0].rank = 1;
        for (int i = 1; i < N; i++) {
            if (students[i].score == students[i - 1].score) {
                students[i].rank = students[i - 1].rank;
            } else {
                students[i].rank = i + 1;
            }
        }

        std::cout << std::endl;
        for (int i = 0; i < N; i++) {
            std::cout << students[i].rank << " " << students[i].id << " " << students[i].score << std::endl;
        }
    }

    return 0;
}
