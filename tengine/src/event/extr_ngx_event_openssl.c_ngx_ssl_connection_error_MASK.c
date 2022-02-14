
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_err_t ;
struct TYPE_3__ {int log_error; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(ngx_connection_t *VAR_72, int VAR_73, ngx_err_t VAR_74,
    char *VAR_75)
{
    int VAR_76;
    ngx_uint_t VAR_77;

    VAR_77 = VAR_9;

    if (VAR_73 == VAR_13) {

        if (VAR_74 == VAR_1
            || VAR_74 == VAR_7
            || VAR_74 == VAR_6
            || VAR_74 == VAR_8
            || VAR_74 == VAR_0
            || VAR_74 == VAR_4
            || VAR_74 == VAR_5
            || VAR_74 == VAR_2
            || VAR_74 == VAR_3)
        {
            switch (VAR_72->log_error) {

            case 129:
            case 128:
                VAR_77 = VAR_11;
                break;

            case 130:
                VAR_77 = VAR_10;
                break;

            default:
                break;
            }
        }

    } else if (VAR_73 == VAR_12) {

        VAR_76 = FUNC_0(FUNC_1());


        if (VAR_76 == VAR_14






            || VAR_76 == VAR_15
            || VAR_76 == VAR_20
            || VAR_76 == VAR_21
            || VAR_76 == VAR_22
            || VAR_76 == VAR_23
            || VAR_76 == VAR_24
            || VAR_76 == VAR_26



            || VAR_76 == VAR_28
            || VAR_76 == VAR_30
            || VAR_76 == VAR_31
            || VAR_76 == VAR_36
            || VAR_76 == VAR_64
            || VAR_76 == VAR_65
            || VAR_76 == VAR_66
            || VAR_76 == VAR_67



            || VAR_76 == VAR_69



            || VAR_76 == VAR_71
            || VAR_76 == VAR_19
            || VAR_76 == 1000
            )
        {
            switch (VAR_72->log_error) {

            case 129:
            case 128:
                VAR_77 = VAR_11;
                break;

            case 130:
                VAR_77 = VAR_10;
                break;

            default:
                break;
            }
        }
    }

    FUNC_2(VAR_77, VAR_72->log, VAR_74, VAR_75);
}
