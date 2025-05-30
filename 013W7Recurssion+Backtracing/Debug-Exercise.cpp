/*
Q1.Debug the code. This is Tower of Hanoi Problem.
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, from_rod, to_rod);
}
Ans:-
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

Q2.Debug the code.
		bool isSafePlace(int n, vector<string>& nQueens, int row, int col){
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(nQueens[i][j] == 'Q'){
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
            if(nQueens[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void solveNQueens(int n, vector<vector<string>>& output, vector<string>& nQueens, int row){
        if(row == n){
            output.push_back(nQueens);
            return;
        }
        for(int col=0; col<n; col++){
            if(isSafePlace(n, nQueens, row, col)){
                nQueens[row][col] = 'Q';
                solveNQueens(n, output, nQueens, row+1);
            }
        }
    }
		vector<vector<string>> solve(int n) {
        vector<vector<string>> output;
        vector<string> nQueens(n , string(n, '.'));
        solveNQueens(n, output, nQueens, 0);
        return output;
    }
    Ans:-
       bool isSafePlace(int n, vector<string>& nQueens, int row, int col){
        for(int i=0; i<n; i++){ // Necessary Check to check if queen is safe to place or not.
            if(nQueens[i][col] == 'Q'){
                return false;
            }
        }
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(nQueens[i][j] == 'Q'){
                return false;
            }
        }
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
            if(nQueens[i][j] == 'Q'){
                return false;
            }
        }
        return true;
    }
    void solveNQueens(int n, vector<vector<string>>& output, vector<string>& nQueens, int row){
        if(row == n){
            output.push_back(nQueens);
            return;
        }
        for(int col=0; col<n; col++){
            if(isSafePlace(n, nQueens, row, col)){
                nQueens[row][col] = 'Q';
                solveNQueens(n, output, nQueens, row+1);
                nQueens[row][col] = '.'; // Fix: Revert back if solution is not found
            }
        }
    }
   vector<vector<string>> solve(int n) {
        vector<vector<string>> output;
        vector<string> nQueens(n , string(n, '.'));
        solveNQueens(n, output, nQueens, 0);
        return output;
    }

    // Q3.Debug the code. This code tries to replace “pi” with “3.14” in the string. For example, “xpix” changes to “x3.14x”
    void replacePi(char input[]) {
	if(input[0] == '\0'){
        return;
    }
    if(input[0] == 'p' && input[1] == 'i'){
        int n = strlen(input);
        int i = 2;
        for(i = n+1; i >= 2; i--){
            input[i] = input[i-2];
        }
        input[n+2] = '\0';
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 1);
    }
    replacePi(input + 1);
}
Ans:-
void replacePi(char input[]) {
	if(input[0] == '\0'){
        return;
    }
    if(input[0] == 'p' && input[1] == 'i'){
        int n = strlen(input);
        int i=2;
        for(i = n+1; i >= 2; i--){
            input[i] = input[i-2];
        }
        input[n+2] = '\0';
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 3); // Fix
    }
    else{ // Fix
        replacePi(input + 1);
    }
}

// Q4.Debug the code. This code tries to implement string to integer converter.
int rec(char input[],int n){
    if(input[0] = '\0')
        return n;
    n = n * 10 + input[0];
    return rec(input + 1, n);
}

int stringToNumber(char input[]) {
    int n = 0;
    return rec(input, n);
}
Ans:-
int rec(char input[],int n){
    if(input[0] == '\0') // Fix
        return n;
    n = n * 10 + input[0] - 48; // Fix
    return rec(input + 1, n);
}

int stringToNumber(char input[]) {
    int n = 0;
    return rec(input,n);
}

Q5.Debug the code. 
Question:
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
int multiplyNumbers(int m, int n) {
    if(n < 0)
        return 0;
    return m + multiplyNumbers(m,n-1);
}
Ans:-
int multiplyNumbers(int m, int n) {
    if(n <= 0)
        return 0;
    return m + multiplyNumbers(m,n-1);
}
*/