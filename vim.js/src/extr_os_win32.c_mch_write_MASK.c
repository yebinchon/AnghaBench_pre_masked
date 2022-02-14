
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char char_u ;
typedef int WORD ;
struct TYPE_4__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_3__ {scalar_t__ Bottom; int Left; scalar_t__ Top; scalar_t__ Right; } ;
typedef int DWORD ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char,scalar_t__) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (char*,int,int,scalar_t__) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_11 (char**) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 () ;
 scalar_t__ VAR_8 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int,int ,int) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*) ;
 int VAR_9 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 () ;
 int FUNC_28 (int,char*,unsigned int) ;
 int FUNC_29 (char*,int) ;

void
FUNC_30(
    char_u *VAR_10,
    int VAR_11)
{
    VAR_10[VAR_11] = VAR_3;

    if (!VAR_9)
    {
 FUNC_28(1, VAR_10, (unsigned)VAR_11);
 return;
    }


    while (VAR_11--)
    {


 DWORD VAR_12 = (DWORD)FUNC_21(VAR_10, "\n\r\b\a\033");

 if (VAR_8)
 {
     FUNC_1(VAR_8);
     if (VAR_12 != 0)
  VAR_12 = 1;
 }

 if (VAR_12 != 0)
 {
     DWORD VAR_13;

     VAR_13 = FUNC_29(VAR_10, VAR_12);
     VAR_11 -= (VAR_13 - 1);
     VAR_10 += VAR_13;
 }
 else if (VAR_10[0] == '\n')
 {

     if (VAR_6.Y == VAR_7.Bottom)
     {
  FUNC_17(1);
  FUNC_12(VAR_7.Left + 1, VAR_7.Bottom + 1);
     }
     else
     {
  FUNC_12(VAR_7.Left + 1, VAR_6.Y + 2);
     }




     VAR_10++;
 }
 else if (VAR_10[0] == '\r')
 {

     FUNC_12(VAR_7.Left+1, VAR_6.Y + 1);




     VAR_10++;
 }
 else if (VAR_10[0] == '\b')
 {

     if (VAR_6.X > VAR_7.Left)
  VAR_6.X--;
     else if (VAR_6.Y > VAR_7.Top)
     {
  VAR_6.X = VAR_7.Right;
  VAR_6.Y--;
     }
     FUNC_12(VAR_6.X + 1, VAR_6.Y + 1);




     VAR_10++;
 }
 else if (VAR_10[0] == '\a')
 {

     FUNC_0(0xFFFFFFFF);




     VAR_10++;
 }
 else if (VAR_10[0] == VAR_1 && VAR_11 >= 3-1 && VAR_10[1] == '|')
 {



     char_u *VAR_14;
     int VAR_15 = 0, VAR_16 = 0;

     switch (VAR_10[2])
     {


     case '0': case '1': case '2': case '3': case '4':
     case '5': case '6': case '7': case '8': case '9':
  VAR_14 = VAR_10 + 2;
  VAR_15 = FUNC_11(&VAR_14);
  if (VAR_14 > VAR_10 + VAR_11)
      break;

  if (*VAR_14 == ';')
  {
      ++VAR_14;
      VAR_16 = FUNC_11(&VAR_14);
      if (VAR_14 > VAR_10 + VAR_11)
   break;

      if (*VAR_14 == 'H')
   FUNC_12(VAR_16, VAR_15);
      else if (*VAR_14 == 'r')
   FUNC_18(0, VAR_15 - 1, VAR_0 - 1, VAR_16 - 1);
  }
  else if (*VAR_14 == 'A')
  {

      FUNC_12(VAR_6.X + 1,
      FUNC_14(VAR_7.Top, VAR_6.Y - VAR_15) + 1);
  }
  else if (*VAR_14 == 'C')
  {

      FUNC_12(FUNC_15(VAR_7.Right, VAR_6.X + VAR_15) + 1,
      VAR_6.Y + 1);
  }
  else if (*VAR_14 == 'H')
  {
      FUNC_12(1, VAR_15);
  }
  else if (*VAR_14 == 'L')
  {
      FUNC_13(VAR_15);
  }
  else if (*VAR_14 == 'm')
  {
      if (VAR_15 == 0)
   FUNC_16();
      else
   FUNC_24((WORD) VAR_15);
  }
  else if (*VAR_14 == 'f')
  {
      FUNC_26((WORD) VAR_15);
  }
  else if (*VAR_14 == 'b')
  {
      FUNC_25((WORD) VAR_15);
  }
  else if (*VAR_14 == 'M')
  {
      FUNC_6(VAR_15);
  }

  VAR_11 -= (int)(VAR_14 - VAR_10);
  VAR_10 = VAR_14 + 1;
  break;




     case 'A':

  FUNC_12(VAR_6.X + 1,
         FUNC_14(VAR_7.Top, VAR_6.Y - 1) + 1);
  goto got3;

     case 'B':
  FUNC_27();
  goto got3;

     case 'C':

  FUNC_12(FUNC_15(VAR_7.Right, VAR_6.X + 1) + 1,
         VAR_6.Y + 1);
  goto got3;

     case 'E':
  FUNC_22();
  goto got3;

     case 'F':
  FUNC_20();
  goto got3;

     case 'f':
  FUNC_19();
  goto got3;

     case 'H':
  FUNC_12(1, 1);
  goto got3;

     case 'j':
  FUNC_3();
  goto got3;

     case 'J':
  FUNC_2();
  goto got3;

     case 'K':
  FUNC_4();
  goto got3;

     case 'L':
  FUNC_13(1);
  goto got3;

     case 'M':
  FUNC_6(1);
  goto got3;

     case 'S':
  FUNC_23();
  goto got3;

     case 'V':
  FUNC_5(VAR_4);
  goto got3;

     case 'v':
  FUNC_5(VAR_2);
  goto got3;

     got3:
  VAR_10 += 3;
  VAR_11 -= 2;
     }
 }
 else
 {

     DWORD VAR_17;

     VAR_17 = FUNC_29(VAR_10, 1);
     VAR_11 -= (VAR_17 - 1);
     VAR_10 += VAR_17;
 }
    }





}
