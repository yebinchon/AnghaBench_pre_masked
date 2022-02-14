
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* event; void* time_event_source; void* io_event_source; } ;
typedef TYPE_1__ sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 void* FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

int FUNC_3(sd_netlink *VAR_2) {
        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_2->event, -VAR_1);

        VAR_2->io_event_source = FUNC_1(VAR_2->io_event_source);

        VAR_2->time_event_source = FUNC_1(VAR_2->time_event_source);

        VAR_2->event = FUNC_2(VAR_2->event);

        return 0;
}
