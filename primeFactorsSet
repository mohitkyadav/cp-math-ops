set<int> primeFactorsSet;

void primeFactors(int n) {
    while (n%2 == 0) {
        primeFactorsSet.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2) {
        while (n%i == 0) {
            primeFactorsSet.insert(i);
            n = n/i;
        }
    }
 
    if (n > 2)
        primeFactorsSet.insert(n);
}
