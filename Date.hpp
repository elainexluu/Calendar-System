#ifndef DATE_H
#define DATE_H

class Date {
    public:
        int month;
        int day;
        bool appointed[48] = false;

    public:
        void get_day();
        void get_month();
        void get_appointed(int index);

        void set_day();
        void set_month();
        void set_appointed(int index);

        bool isHoliday();
};

#endif