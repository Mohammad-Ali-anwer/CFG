int main() {
    int i = 0;
    int result = 0;
    int other = 10;
    
    while (i < 100) {
        // LICM CANDIDATE: 'other * 5' never changes inside this loop!
        // The optimizer should suggest moving 'int invariant = other * 5;' 
        // to BEFORE the while loop starts.
        int invariant = other * 5; 
        
        result = result + invariant;
        i = i + 1;
    }
    
    return result;
}