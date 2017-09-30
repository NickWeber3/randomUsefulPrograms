int greatest_common_denominator(int a, int b) {
  int smallest = ((a < b) ? a : b);
    int greatest_common_dem = 1, increment = 2;
    while (increment <= smallest) {
        if (a % increment == 0 and b % increment == 0) {
            greatest_common_dem = increment;
        }
        ++increment;
    }
    return greatest_common_dem;
}
