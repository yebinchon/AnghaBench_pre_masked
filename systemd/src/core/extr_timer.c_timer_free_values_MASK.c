
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int calendar_spec; } ;
typedef TYPE_1__ TimerValue ;
struct TYPE_9__ {TYPE_1__* values; } ;
typedef TYPE_2__ Timer ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_4(Timer *VAR_1) {
        TimerValue *VAR_2;

        FUNC_1(VAR_1);

        while ((VAR_2 = VAR_1->values)) {
                FUNC_0(VAR_0, VAR_1->values, VAR_2);
                FUNC_2(VAR_2->calendar_spec);
                FUNC_3(VAR_2);
        }
}
