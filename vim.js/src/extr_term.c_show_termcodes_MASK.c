
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 () ;
 int FUNC_7 (int*) ;

void
FUNC_8()
{
    int VAR_10;
    int *VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14, VAR_15;
    int VAR_16;
    int VAR_17;
    int VAR_18;





    if (VAR_8 == 0)
 return;
    VAR_11 = (int *)FUNC_2((unsigned)(sizeof(int) * VAR_8));
    if (VAR_11 == ((void*)0))
 return;


    FUNC_0(FUNC_1("\n--- Terminal keys ---"));







    for (VAR_13 = 1; VAR_13 <= 3 && !VAR_6; ++VAR_13)
    {



 VAR_12 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
 {
     VAR_18 = FUNC_5(VAR_9[VAR_17].name,
          VAR_9[VAR_17].code, VAR_1);
     if (VAR_18 <= 27 - 2 ? VAR_13 == 1
   : VAR_18 <= 40 - 2 ? VAR_13 == 2
   : VAR_13 == 3)
  VAR_11[VAR_12++] = VAR_17;
 }




 if (VAR_13 <= 2)
 {
     VAR_16 = (VAR_0 + 2) / (VAR_13 == 1 ? 27 : 40);
     if (VAR_16 == 0)
  VAR_16 = 1;
     VAR_15 = (VAR_12 + VAR_16 - 1) / VAR_16;
 }
 else
     VAR_15 = VAR_12;
 for (VAR_14 = 0; VAR_14 < VAR_15 && !VAR_6; ++VAR_14)
 {
     FUNC_3('\n');
     if (VAR_6)
  break;
     VAR_10 = 0;
     for (VAR_17 = VAR_14; VAR_17 < VAR_12; VAR_17 += VAR_15)
     {
  VAR_7 = VAR_10;
  FUNC_5(VAR_9[VAR_11[VAR_17]].name,
           VAR_9[VAR_11[VAR_17]].code, VAR_5);
  if (VAR_13 == 2)
      VAR_10 += 40;
  else
      VAR_10 += 27;
     }
     FUNC_4();
     FUNC_6();
 }
    }
    FUNC_7(VAR_11);
}
