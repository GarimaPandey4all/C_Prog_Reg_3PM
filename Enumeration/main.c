#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Enum: Group of contants

    // value = 0 to 6
    enum Week {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} ;

    enum Week today = Sunday;

    printf("Today is: %d", today);

    return 0;
}
