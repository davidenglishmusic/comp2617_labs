#include <iostream>
#include "date.h"

int main()
{
    Date magnaCarta = Date(6, 15, 1215);

    magnaCarta.displayDate();

    Date wrongMonth = Date(13, 25, 2014);

    wrongMonth.displayDate();

    return 0;
}
