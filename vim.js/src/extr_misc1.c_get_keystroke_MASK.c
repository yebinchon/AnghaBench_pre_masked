
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int long_u ;
typedef void* char_u ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (void*,void*) ;
 void** FUNC_2 (int) ;
 int FUNC_3 (int,void**,int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void**,int,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_14 ;
 int FUNC_8 (void**) ;
 int FUNC_9 (void**,void**,size_t) ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_10 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 () ;
 int FUNC_12 (void**) ;
 int FUNC_13 (void**,int,long,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (void**) ;
 void** FUNC_16 (void**,int) ;

int
FUNC_17()
{
    char_u *VAR_21 = ((void*)0);
    int VAR_22 = 150;
    int VAR_23;
    int VAR_24 = 0;
    int VAR_25;
    int VAR_26 = VAR_14;
    int VAR_27 = 0;

    VAR_14 = VAR_2;
    for (;;)
    {
 FUNC_4();
 FUNC_10();




 VAR_23 = (VAR_22 - 6 - VAR_24) / 3;
 if (VAR_21 == ((void*)0))
     VAR_21 = FUNC_2(VAR_22);
 else if (VAR_23 < 10)
 {


     VAR_22 += 100;
     VAR_21 = FUNC_16(VAR_21, VAR_22);
     VAR_23 = (VAR_22 - 6 - VAR_24) / 3;
 }
 if (VAR_21 == ((void*)0))
 {
     FUNC_5((long_u)VAR_22);
     return VAR_1;
 }



 VAR_25 = FUNC_13(VAR_21 + VAR_24, VAR_23, VAR_24 == 0 ? -1L : 100L, 0);
 if (VAR_25 > 0)
 {

     VAR_25 = FUNC_6(VAR_21 + VAR_24, VAR_25, VAR_2);
     VAR_24 += VAR_25;
     VAR_27 = 0;
 }
 else if (VAR_24 > 0)
     ++VAR_27;


 if ((VAR_25 = FUNC_3(1, VAR_21, VAR_22, &VAR_24)) < 0
        && (!VAR_19 || VAR_27 * 100L < (VAR_20 < 0 ? VAR_18 : VAR_20)))
     continue;

 if (VAR_25 == VAR_3)
 {
     if (VAR_16 != 0 && !VAR_17 && (VAR_11 & VAR_0) == 0)
     {

  FUNC_14(0);
  FUNC_11();
     }
     continue;
 }
 if (VAR_25 > 0)
     VAR_24 = VAR_25;
 if (VAR_24 == 0)
     continue;


 VAR_25 = VAR_21[0];
 if (VAR_25 == VAR_8)
 {
     VAR_25 = FUNC_1(VAR_21[1], VAR_21[2]);
     if (VAR_21[1] == VAR_4
      || VAR_25 == VAR_6







        )
     {
  if (VAR_21[1] == VAR_4)
      VAR_15 = VAR_21[2];
  VAR_24 -= 3;
  if (VAR_24 > 0)
      FUNC_9(VAR_21, VAR_21 + 3, (size_t)VAR_24);
  continue;
     }
     break;
 }
 break;
    }
    FUNC_15(VAR_21);

    VAR_14 = VAR_26;
    return VAR_25;
}
