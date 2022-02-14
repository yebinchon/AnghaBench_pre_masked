
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int char_u ;
typedef int UInt32 ;
struct TYPE_6__ {scalar_t__ vc_type; } ;
struct TYPE_5__ {void* bottom; void* right; void* top; void* left; } ;
typedef int StyleParameter ;
typedef TYPE_1__ Rect ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (int,int,int,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *,int) ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_13 (TYPE_2__*,int *,int*) ;
 int VAR_17 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(int VAR_18, int VAR_19, char_u *VAR_20, int VAR_21, int VAR_22)
{
    if (VAR_7 >= 0x1020)
    {

 UInt32 VAR_23 = (VAR_13 ?
        VAR_10 | VAR_9 : 0);
 FUNC_6(VAR_23);
    }
    if (((VAR_7 >= 0x1020 && VAR_13) || VAR_14 != 0)
     && !(VAR_22 & VAR_3))
    {
 Rect VAR_24;

 VAR_24.left = FUNC_2(VAR_19);
 VAR_24.top = FUNC_3(VAR_18);
 VAR_24.right = FUNC_2(VAR_19 + VAR_21) + (VAR_19 + VAR_21 == VAR_1);
 VAR_24.bottom = FUNC_3(VAR_18 + 1);
 FUNC_1(&VAR_24);
    }

    if (VAR_7 >= 0x1020 && VAR_13)
    {
 StyleParameter VAR_25;

 VAR_25 = VAR_11;
 if (VAR_22 & VAR_2)
     VAR_25 |= VAR_6;
 if (VAR_22 & VAR_5)
     VAR_25 |= VAR_17;
 FUNC_9(VAR_25);


 FUNC_10(VAR_16);

 FUNC_5(FUNC_7(VAR_19), FUNC_8(VAR_18));
 FUNC_0((char*)VAR_20, 0, VAR_21);
    }
    else
    {

 FUNC_10(VAR_15);
 FUNC_9(VAR_11);



 if (VAR_22 & VAR_3)
 {
     FUNC_10(VAR_16);
 }

 FUNC_5(FUNC_7(VAR_19), FUNC_8(VAR_18));
 FUNC_0((char *)VAR_20, 0, VAR_21);

 if (VAR_22 & VAR_2)
 {
     FUNC_10(VAR_16);
     FUNC_5(FUNC_7(VAR_19) + 1, FUNC_8(VAR_18));
     FUNC_0((char *)VAR_20, 0, VAR_21);
 }

 if (VAR_22 & VAR_5)
 {
     FUNC_5(FUNC_2(VAR_19), FUNC_3(VAR_18 + 1) - 1);
     FUNC_4(FUNC_2(VAR_19 + VAR_21) - 1, FUNC_3(VAR_18 + 1) - 1);
 }
    }

    if (VAR_22 & VAR_4)
 FUNC_11(VAR_22, VAR_18, VAR_19, VAR_21);




}
