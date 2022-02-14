
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (int,char*,unsigned int) ;

void
FUNC_16(
    char_u *VAR_9,
    int VAR_10)
{
    char_u *VAR_11;
    int VAR_12, VAR_13;

    if (VAR_8 && VAR_6)
 while (VAR_10--)
 {

     if (VAR_7)
  FUNC_1(VAR_7);

     if (VAR_9[0] == '\n')






  FUNC_10('\r');

     else if (VAR_9[0] == VAR_0 && VAR_10 > 1 && VAR_9[1] == '|')
     {
  switch (VAR_9[2])
  {




  case 'J':



       FUNC_3();
       goto got3;

  case 'K':



       FUNC_2();
       goto got3;

  case 'L':



       FUNC_8();
       goto got3;

  case 'M':



       FUNC_4();
got3: VAR_9 += 3;
       VAR_10 -= 2;
       continue;

  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9': VAR_11 = VAR_9 + 2;
       VAR_12 = FUNC_6(&VAR_11);
       if (VAR_11 > VAR_9 + VAR_10)
    break;
       if (*VAR_11 == ';')
       {
    ++VAR_11;
    VAR_13 = FUNC_6(&VAR_11);
    if (VAR_11 > VAR_9 + VAR_10)
        break;
    if (*VAR_11 == 'H' || *VAR_11 == 'r' || *VAR_11 == 'V')
    {



        if (*VAR_11 == 'H')
     FUNC_7(VAR_13, VAR_12);
        else if (*VAR_11 == 'V')
     FUNC_14(VAR_12, VAR_5, VAR_13, VAR_1);
        else
     FUNC_14(VAR_3, VAR_12, VAR_4, VAR_13);
        VAR_10 -= VAR_11 - VAR_9;
        VAR_9 = VAR_11 + 1;
        continue;
    }
       }
       else if (*VAR_11 == 'm' || *VAR_11 == 'f' || *VAR_11 == 'b')
       {
    if (*VAR_11 == 'm')
    {
        if (VAR_12 == 0)
     FUNC_9();
        else
     FUNC_11(VAR_12);
    }
    else if (*VAR_11 == 'f')
        FUNC_13(VAR_12);
    else
        FUNC_12(VAR_12);

    VAR_10 -= VAR_11 - VAR_9;
    VAR_9 = VAR_11 + 1;
    continue;
       }
  }
     }
     FUNC_10(*VAR_9++);
 }
    else
    {
 FUNC_15(1, VAR_9, (unsigned)VAR_10);
    }
}
