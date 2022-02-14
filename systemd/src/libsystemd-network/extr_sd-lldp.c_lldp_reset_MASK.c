
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; int io_event_source; int timer_event_source; } ;
typedef TYPE_1__ sd_lldp ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sd_lldp *VAR_0) {
        FUNC_0(VAR_0);

        (void) FUNC_1(VAR_0->timer_event_source);
        VAR_0->io_event_source = FUNC_3(VAR_0->io_event_source);
        VAR_0->fd = FUNC_2(VAR_0->fd);
}
