#include <iostream>
using namespace std;

class Heroine {
protected:
    double earningsPerDay;
public:
    void setEarningsPerDay(double earnings) {
        earningsPerDay = earnings;
    }
    double getEarningsPerDay() {
        return earningsPerDay;
    }
};

class MovieHeroine : public Heroine {
private:
    long int totalEarnings;
    int daysRun;
public:
    void setTotalEarnings(long totalEarnings) {
        this->totalEarnings = totalEarnings;
    }
    long getTotalEarnings() {
        return totalEarnings;
    }
    void setDaysRun(int daysRun) {
        this->daysRun = daysRun;
    }
    long calcEarnings(int noOfDays) {
        double extraPercentage;
        if (daysRun > 100) extraPercentage = 1.1;
        else if (daysRun > 50 && daysRun <= 100) extraPercentage = 1.05;
        else extraPercentage = 1.0;

        setTotalEarnings(earningsPerDay * noOfDays * extraPercentage);

        return totalEarnings;
    }
};

class AdvertisementModel : public Heroine {
private:
    int rating;
    long totalEarnings;
public:
    void setTotalEarnings(long totalEarnings) {
        this->totalEarnings = totalEarnings;
    }
    long getTotalEarnings() {
        return totalEarnings;
    }
    void setRating(int rating) {
        this->rating = rating;
    }
    long calcEarnings(int noOfDays) {
        int extraAmount;
        if (rating > 5) extraAmount = 10000;
        else if (rating > 2 && rating < 5) extraAmount = 5000;
        else extraAmount = 0;

        setTotalEarnings((earningsPerDay * noOfDays) + extraAmount);

        return totalEarnings;
    }
};

// main function
int main() {
    MovieHeroine mh;
    AdvertisementModel am;
    double earningsPerDay;
    cout << "Enter the earnings per day :" << endl;
    cin >> earningsPerDay;

    mh.setEarningsPerDay(earningsPerDay);
    am.setEarningsPerDay(earningsPerDay);

    int movie, ad, rating, daysRun;
    cout << "Enter the number of days for movie :" << endl;
    cin >> movie;

    cout << "Enter the number of days movie run:" << endl;
    cin >> daysRun;

    mh.setDaysRun(daysRun);
    mh.calcEarnings(movie);

    cout << "Enter the number of days for advertisement  :" << endl;
    cin >> ad;
    cout << "Enter the Advertisement rating: " << endl;
    cin >> rating;

    am.setRating(rating);
    am.calcEarnings(ad);

    cout << "Earnings for Movie: " << mh.getTotalEarnings() << endl;
    cout << "\nEarnings for Advertisement: " << am.getTotalEarnings() << endl;

    return 0;
}
