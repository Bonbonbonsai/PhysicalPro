#include <stdio.h>
#include <string.h>
struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    double temperature;
    double humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather w) {
    if (strcmp(w.outlook, "overcast") == 0) {
        printf("yes\n");
    }
    else if (strcmp(w.outlook, "rain") == 0) {
        if (w.wind == 'T') {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
    else if (strcmp(w.outlook, "sunny") == 0) {
        if (w.humidity > 77.5) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Weather weather[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %lf %lf %c", weather[i].outlook, &weather[i].temperature, &weather[i].humidity, &weather[i].wind);
        playing_decision(weather[i]);
    }
    return 0;
}