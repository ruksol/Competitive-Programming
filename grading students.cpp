//question link: https://www.hackerrank.com/challenges/grading/problem
vector<int> gradingStudents(vector<int> grades) {
    int n = grades.size();
    for(int i=0; i<n; i++){
        int x = (((grades[i]/5)*5)+5);
        if(grades[i]>=38){
            if(x-grades[i]<3){
                grades[i]=x;
            }
        }
    }
    return grades;
}