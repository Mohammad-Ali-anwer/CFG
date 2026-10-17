int main() {
    int fir = 42;
    
    // TA should see this turn into: int sec = 42;
    int sec = fir;    
    
    // TA should see this turn into: int total = 42 + 8;
    // (And if Folding runs after, it becomes 50)
    int total = sec + 8; 
    
    return total;
}