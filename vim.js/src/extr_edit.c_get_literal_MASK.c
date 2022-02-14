
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int
FUNC_7()
{
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15 = VAR_2;
    int VAR_16 = VAR_2;




    if (VAR_9)
 return VAR_1;
    ++VAR_11;
    VAR_12 = 0;
    VAR_14 = 0;
    for (;;)
    {
 VAR_13 = FUNC_4();
 if (VAR_13 == 'x' || VAR_13 == 'X')
     VAR_15 = VAR_5;
 else if (VAR_13 == 'o' || VAR_13 == 'O')
     VAR_16 = VAR_5;




 else
 {
     if (VAR_15



      )
     {
  if (!FUNC_5(VAR_13))
      break;
  VAR_12 = VAR_12 * 16 + FUNC_3(VAR_13);
     }
     else if (VAR_16)
     {
  if (VAR_13 < '0' || VAR_13 > '7')
      break;
  VAR_12 = VAR_12 * 8 + VAR_13 - '0';
     }
     else
     {
  if (!FUNC_1(VAR_13))
      break;
  VAR_12 = VAR_12 * 10 + VAR_13 - '0';
     }

     ++VAR_14;
 }

 if (VAR_12 > 255



  )
     VAR_12 = 255;
 VAR_13 = 0;

 if (VAR_15)
 {
     if (VAR_14 >= 2)
  break;
 }







 else if (VAR_14 >= 3)
     break;
    }
    if (VAR_14 == 0)
    {
 if (VAR_13 == VAR_3)
 {
     VAR_12 = '\n';
     VAR_13 = 0;
 }
 else
 {
     VAR_12 = VAR_13;
     VAR_13 = 0;
 }
    }

    if (VAR_12 == 0)
 VAR_12 = '\n';






    --VAR_11;




    if (VAR_13)
 FUNC_6(VAR_13);
    VAR_9 = VAR_2;
    return VAR_12;
}
