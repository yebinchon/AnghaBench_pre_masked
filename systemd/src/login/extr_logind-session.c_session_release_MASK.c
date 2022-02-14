
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ timer_event_source; TYPE_1__* manager; scalar_t__ stopping; int started; } ;
struct TYPE_6__ {int event; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__*,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(Session *VAR_3) {
        FUNC_0(VAR_3);

        if (!VAR_3->started || VAR_3->stopping)
                return 0;

        if (VAR_3->timer_event_source)
                return 0;

        return FUNC_2(VAR_3->manager->event,
                                 &VAR_3->timer_event_source,
                                 VAR_0,
                                 FUNC_3(FUNC_1(VAR_0), VAR_1), 0,
                                 VAR_2, VAR_3);
}
