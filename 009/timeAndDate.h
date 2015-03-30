#ifndef TIMEANDDATE_H
#define TIMEANDDATE_H

class TimeAndDate
{
  public:
    explicit TimeAndDate( int = 0, int = 0, int = 0, int = 1, int = 1, int = 2000 );
    void tick();
    void printUniversal() const; // output time in universal- time format
    void printStandard() const; // output time in standard- time format
  private:
    unsigned int second;
    unsigned int minute;
    unsigned int hour;
    unsigned int month;
    unsigned int day;
    unsigned int year;

    // accessor methods

    unsigned int getSecond() const;
    unsigned int getMinute() const;
    unsigned int getHour() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    unsigned int getYear() const;

    // mutator methods

    void setSecond(int);
    void setMinute(int);
    void setHour(int);
    void setMonth(int);
    void setYear(int);
    void setDay(int);

    // validation methods

    bool isValidMonth(int) const;
    bool isValidDayForCurrentMonth(int) const;
    bool isWithin31(int) const;
    bool isWithin30(int) const;
    bool isWithinFebruary(int) const;
    bool isLeapYear() const;

    //other utility methods

    void setTime(int, int, int);
    void printDate() const;
    void nextDay();
    void incrementSecond();
    void incrementMinute();
    void incrementHour();
    void incrementDay();
    void incrementMonth();
    void incrementYear();
};

#endif
