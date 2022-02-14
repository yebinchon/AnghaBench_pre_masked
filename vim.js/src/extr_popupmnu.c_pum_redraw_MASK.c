
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_6__ {scalar_t__ w_p_rl; } ;
struct TYPE_5__ {int* pum_text; int* pum_kind; int* pum_extra; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int* FUNC_6 (int*) ;
 int FUNC_7 (int,int,int,int,char,char,int) ;
 int FUNC_8 (char,int,int,int) ;
 int FUNC_9 (int*,int,int,int,int) ;
 int FUNC_10 (int*) ;
 int* FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int*) ;

void
FUNC_14()
{
    int VAR_20 = VAR_15;
    int VAR_21;
    int VAR_22 = VAR_8[VAR_0];
    int VAR_23 = VAR_8[VAR_2];
    int VAR_24 = VAR_8[VAR_1];
    int VAR_25 = VAR_8[VAR_3];
    int VAR_26;
    int VAR_27;
    int VAR_28;
    char_u *VAR_29;
    char_u *VAR_30 = ((void*)0);
    int VAR_31, VAR_32, VAR_33;
    int VAR_34 = 0;
    int VAR_35 = 1;
    int VAR_36;
    int VAR_37;


    if (VAR_12 > VAR_18 - VAR_13)
 VAR_12 = VAR_18 - VAR_13;

    if (VAR_16)
    {
 VAR_35 = VAR_13 * VAR_13 / VAR_18;
 if (VAR_35 == 0)
     VAR_35 = 1;
 VAR_34 = (VAR_12 * (VAR_13 - VAR_35)
       + (VAR_18 - VAR_13) / 2)
          / (VAR_18 - VAR_13);
    }

    for (VAR_27 = 0; VAR_27 < VAR_13; ++VAR_27)
    {
 VAR_28 = VAR_27 + VAR_12;
 VAR_26 = (VAR_28 == VAR_17) ? VAR_23 : VAR_22;
     if (VAR_11 > 0)
  FUNC_8(' ', VAR_20, VAR_11 - 1, VAR_26);



 VAR_21 = VAR_11;
 VAR_31 = 0;
 for (VAR_36 = 1; VAR_36 <= 3; ++VAR_36)
 {
     VAR_32 = 0;
     VAR_29 = ((void*)0);
     switch (VAR_36)
     {
  case 1: VAR_30 = VAR_9[VAR_28].pum_text; break;
  case 2: VAR_30 = VAR_9[VAR_28].pum_kind; break;
  case 3: VAR_30 = VAR_9[VAR_28].pum_extra; break;
     }
     if (VAR_30 != ((void*)0))
  for ( ; ; FUNC_4(VAR_30))
  {
      if (VAR_29 == ((void*)0))
   VAR_29 = VAR_30;
      VAR_33 = FUNC_5(VAR_30);
      if (*VAR_30 == VAR_4 || *VAR_30 == VAR_5 || VAR_31 + VAR_33 > VAR_19)
      {


   char_u *VAR_38;
   int VAR_39 = *VAR_30;

   *VAR_30 = VAR_4;
   VAR_38 = FUNC_11(VAR_29);
   *VAR_30 = VAR_39;
   {
       if (VAR_38 != ((void*)0))
       {
    FUNC_9(VAR_38, (int)FUNC_0(VAR_38), VAR_20, VAR_21,
         VAR_26);
    FUNC_12(VAR_38);
       }
       VAR_21 += VAR_32;
   }

   if (*VAR_30 != VAR_5)
       break;
   {
       FUNC_9((char_u *)"  ", 2, VAR_20, VAR_21, VAR_26);
       VAR_21 += 2;
   }
   VAR_31 += 2;
   VAR_29 = ((void*)0);
   VAR_32 = 0;
      }
      else
   VAR_32 += VAR_33;
  }

     if (VAR_36 > 1)
  VAR_37 = VAR_14 + 1;
     else
  VAR_37 = 1;


     if (VAR_36 == 3
      || (VAR_36 == 2 && VAR_9[VAR_28].pum_extra == ((void*)0))
      || (VAR_36 == 1 && VAR_9[VAR_28].pum_kind == ((void*)0)
       && VAR_9[VAR_28].pum_extra == ((void*)0))
      || VAR_10 + VAR_37 >= VAR_19)
  break;
     {
  FUNC_7(VAR_20, VAR_20 + 1, VAR_21, VAR_11 + VAR_10 + VAR_37,
             ' ', ' ', VAR_26);
  VAR_21 = VAR_11 + VAR_10 + VAR_37;
     }
     VAR_31 = VAR_10 + VAR_37;
 }







     FUNC_7(VAR_20, VAR_20 + 1, VAR_21, VAR_11 + VAR_19, ' ', ' ',
         VAR_26);
 if (VAR_16 > 0)
 {







  FUNC_8(' ', VAR_20, VAR_11 + VAR_19,
   VAR_27 >= VAR_34 && VAR_27 < VAR_34 + VAR_35
        ? VAR_25 : VAR_24);
 }

 ++VAR_20;
    }
}
