
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ state; scalar_t__ defer_event_source; } ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;

int FUNC_16(Varlink *VAR_6) {
        int VAR_7;

        FUNC_1(VAR_6, -VAR_0);

        if (VAR_6->state == VAR_4)
                return -VAR_1;

        FUNC_10(VAR_6);

        VAR_7 = FUNC_15(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_6(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_5(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_8(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_9(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_12(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_4(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_13(VAR_6);
        if (VAR_7 != 0)
                goto finish;

        VAR_7 = FUNC_7(VAR_6);
        if (VAR_7 != 0)
                goto finish;

finish:
        if (VAR_7 >= 0 && VAR_6->defer_event_source) {
                int VAR_8;


                VAR_8 = FUNC_2(VAR_6->defer_event_source, VAR_7 > 0 ? VAR_3 : VAR_2);
                if (VAR_8 < 0)
                        VAR_7 = VAR_8;
        }

        if (VAR_7 < 0) {
                if (FUNC_0(VAR_6->state))

                        FUNC_11(VAR_6, VAR_5);
                else

                        FUNC_3(VAR_6);
        }

        FUNC_14(VAR_6);
        return VAR_7;
}
