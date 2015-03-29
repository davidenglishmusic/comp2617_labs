#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    explicit Date( int = 1, int = 1, int = 2000 );
    void print() const;
    void incrementDate();
  private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    void setMonth(int);
    void setYear(int);
    void setDay(int);

    bool isValidMonth(int) const;

    bool isValidDayForCurrentMonth(int) const;
    bool isWithin31(int) const;
    bool isWithin30(int) const;
    bool isWithinFebruary(int) const;

    bool isLeapYear() const;

    void incrementDay();
    void incrementMonth();
    void incrementYear();
};

#endif
