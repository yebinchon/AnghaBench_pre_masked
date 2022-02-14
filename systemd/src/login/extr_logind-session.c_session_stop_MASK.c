
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int stopping; int user; scalar_t__ seat; int timer_event_source; int started; } ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(Session *VAR_1, bool VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);






        if (!VAR_1->user)
                return -VAR_0;
        if (!VAR_1->started)
                return 0;
        if (VAR_1->stopping)
                return 0;

        VAR_1->timer_event_source = FUNC_1(VAR_1->timer_event_source);

        if (VAR_1->seat)
                FUNC_2(VAR_1->seat, VAR_1);


        FUNC_3(VAR_1);


        VAR_3 = FUNC_5(VAR_1, VAR_2);

        VAR_1->stopping = 1;

        FUNC_6(VAR_1->user);

        FUNC_4(VAR_1);
        FUNC_7(VAR_1->user);

        return VAR_3;
}
