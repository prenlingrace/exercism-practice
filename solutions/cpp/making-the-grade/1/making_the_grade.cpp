#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_score
    std::vector<int> rounded_scores;
    // Optinal step to improve efficiency
    rounded_scores.reserve(student_scores.size());
    for (double score : student_scores) {
        rounded_scores.push_back(static_cast<int>(score));
    };
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed = 0;
    for (int score : student_scores) {
        if (score <= 40) {
            failed++;
        }
    }
    return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grade_thresholds;
    int range = highest_score - 40;
    for (int i = 0; i < 4; i++) {
        grade_thresholds[i] = static_cast<int>(40 + i*(range/4)) + 1;
    }
    return grade_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> rankings(student_scores.size());
    for (int i = 0; i < student_scores.size(); i++) {
        rankings[i] = std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
    }
    // TODO: Implement student_ranking
    return rankings;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string name = "";
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            name = student_names[i];
            break;
        }
    }
    return name;
}
