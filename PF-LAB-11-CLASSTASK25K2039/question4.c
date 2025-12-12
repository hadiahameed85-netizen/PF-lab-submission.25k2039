#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct whetherdata{
    char cityname[100];
    float basetemp;
    float coolingfactor;
};

float temp(int n, struct whetherdata *w) {
    if(n==0){
        return w->basetemp;
    }
    else{
        float temperature = 0;
        temperature = temp(n-1, w) + (rand()%10) - w->coolingfactor;
        printf("day %d: temperature: %.2f\n",n, temperature);
        return temperature;
    }
}

int main(){
    struct whetherdata w;
    int days;

    printf("enter city name:");
    fgets(w.cityname, 100, stdin);
    w.cityname[strcspn(w.cityname, "\n")] = '\0';

    printf("enter base temperature of the city:");
    scanf("%f",&w.basetemp);

    printf("enter cooling factor:");
    scanf("%f",&w.coolingfactor);

    printf("enter number of days for simulating temperature:");
    scanf("%d",&days);

    float temperature = temp(days, &w);

    return 0;
}