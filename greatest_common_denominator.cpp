int greatest_common_denominator(int A, int B) {
  int smallest = ((A < B) ? A : B);
    int greatest_common_dem = 1, increment = 2;
    while (increment <= smallest) {
        if (A % increment == 0 and B % increment == 0) {
            greatest_common_dem = increment;
        }
        ++increment;
    }
    return greatest_common_dem;
}
