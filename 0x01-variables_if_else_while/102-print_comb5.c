#include <stdio.h>

#includ<stdlib.h>

/**

*

*

*description: print

*

*

*

*/

Int main()

{

Int  nl = 0, n2;

While(n2  < = 99)

{

If  (n2 != n1)

{

 Puchar ((n1  / 10)  + 48);

 Puchar ((n1  %  10)  + 48);

Puchar (‘  ‘);

Puchar ((n2  / 10)  + 48);

Puchar ((n2  % 10)  + 48);

If (n1 != 98 || n2 !=98)

{

Putchar(‘ , ‘);

Putchar(‘  ‘);

       }

}

++n2;

}

++n1;

}

Putchar(‘\n);

return 0;

}

