#include <stdio.h>

// define the grade point values for each grade
const float GRADE_POINTS[] = {4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
const char GRADE_LETTERS[] = "ABCDEF+";

// define a function to calculate the GPA
float calculate_gpa(int grades[], int credits[], int num_courses) {
    float total_grade_points = 0.0;
    int total_credits = 0;
    for (int i = 0; i < num_courses; i++) {
        // find the index of the grade letter in the GRADE_LETTERS array
        int grade_index = -1;
        for (int j = 0; j < 7; j++) {
            if (grades[i] == GRADE_LETTERS[j]) {
                grade_index = j;
                break;
            }
        }
        // calculate the grade points for this course and add to the total
        if (grade_index >= 0) {
            total_grade_points += GRADE_POINTS[grade_index] * credits[i];
            total_credits += credits[i];
        }
    }
    if (total_credits == 0) {
        return 0.0;
    }
    else {
        return total_grade_points / total_credits;
    }
}

int main() {
    // example usage
    int grades[] = {'A', 'B', 'B', 'C', 'A'};
    int credits[] = {3, 3, 3, 3, 3, 3};
    int num_courses = 5;
    float gpa = calculate_gpa(grades, credits, num_courses);
    printf("Your GPA is: %.2f\n", gpa);
    return 0;
}


// int main() {
//     // example usage
//     int grades[] = {'A', 'B', '+', 'C', 'D'};
//     int credits[] = {3, 2, 1, 3, 2};
//     int num_courses = 5;
//     float gpa = calculate_gpa(grades, credits, num_courses);
//     printf("Your GPA is: %.2f\n", gpa);
//     return 0;
// }
