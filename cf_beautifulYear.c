/*It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only
 distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given 
one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the
 answer exists.

*/

#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    int year;
    int i;

    for (i = y + 1; i <= 9000; i++) {
        int dig1, dig2, dig3, dig4;

        // Extract digits
        dig1 = i % 10;
        dig2 = (i / 10) % 10;
        dig3 = (i / 100) % 10;
        dig4 = (i / 1000) % 10;

        // Check if all digits are distinct
        if (dig1 != dig2 && dig1 != dig3 && dig1 != dig4 &&
            dig2 != dig3 && dig2 != dig4 &&
            dig3 != dig4) {
            year = i;
            break; // Exit the loop once the result is found
        }
    }

    printf("%d\n", year);

    return 0;
}
