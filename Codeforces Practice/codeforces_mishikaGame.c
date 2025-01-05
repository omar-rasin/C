#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int m,c;
    int m_total = 0;
    int c_total = 0;

    for(int i=0; i<n; i++) {
        scanf("%d %d", &m, &c);

        m_total = m_total + m;
        c_total = c_total + m;
    }

    if(m_total>c_total) {

        printf("Mishka");
    }else if(c_total>m_total) {

        printf("Chris");
    }else if(m_total==c_total) {
        printf("Friendship is magic !^^");
    }
    return 0;
}