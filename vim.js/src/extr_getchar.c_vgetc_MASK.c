
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {int * menubar; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int ,int) ;
 int VAR_27 ;
 int FUNC_3 (int,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_1__ VAR_31 ;
 int FUNC_6 (int*) ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_7 (int*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ VAR_43 ;

int
FUNC_12()
{
    int VAR_44, VAR_45;
    if (VAR_39 != -1)
    {
 VAR_44 = VAR_39;
 VAR_39 = -1;
 VAR_35 = VAR_40;




    }
    else
    {
      VAR_35 = 0x0;
      VAR_33 = 0;
      for (;;)
      {
 if (VAR_35)
 {
     ++VAR_38;
     ++VAR_30;
 }
 VAR_44 = FUNC_10(VAR_28);
 if (VAR_35)
 {
     --VAR_38;
     --VAR_30;
 }


 if (VAR_44 == VAR_19



    )
 {
     int VAR_46 = VAR_30;

     ++VAR_38;
     VAR_30 = 0;
     VAR_45 = FUNC_10(VAR_28);
     VAR_44 = FUNC_10(VAR_28);
     --VAR_38;
     VAR_30 = VAR_46;
     if (VAR_45 == VAR_5)
     {
  VAR_35 = VAR_44;
  continue;
     }
     VAR_44 = FUNC_3(VAR_45, VAR_44);
 }
 switch (VAR_44)
 {
     case 137: VAR_44 = '+'; break;
     case 139: VAR_44 = '-'; break;
     case 141: VAR_44 = '/'; break;
     case 138: VAR_44 = '*'; break;
     case 140: VAR_44 = VAR_0; break;
     case 136:





        VAR_44 = '.'; break;

     case 151: VAR_44 = '0'; break;
     case 150: VAR_44 = '1'; break;
     case 149: VAR_44 = '2'; break;
     case 148: VAR_44 = '3'; break;
     case 147: VAR_44 = '4'; break;
     case 146: VAR_44 = '5'; break;
     case 145: VAR_44 = '6'; break;
     case 144: VAR_44 = '7'; break;
     case 143: VAR_44 = '8'; break;
     case 142: VAR_44 = '9'; break;

     case 133:
     case 128: if (VAR_35 == VAR_26)
    {
        VAR_44 = VAR_21;
        VAR_35 = 0;
    }
    else if (VAR_35 == VAR_25)
    {
        VAR_44 = VAR_8;
        VAR_35 = 0;
    }
    else
        VAR_44 = VAR_14;
    break;
     case 134:
     case 129: if (VAR_35 == VAR_26)
    {
        VAR_44 = VAR_20;
        VAR_35 = 0;
    }
    else if (VAR_35 == VAR_25)
    {
        VAR_44 = VAR_7;
        VAR_35 = 0;
    }
    else
        VAR_44 = VAR_10;
    break;

     case 130: VAR_44 = VAR_23; break;
     case 135: VAR_44 = VAR_9; break;
     case 132: VAR_44 = VAR_16; break;
     case 131: VAR_44 = VAR_18; break;
 }
 break;
      }
    }
    return VAR_44;
}
