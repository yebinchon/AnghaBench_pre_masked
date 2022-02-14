
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ fd; struct TYPE_8__* seat; struct TYPE_8__* name; int check_event_source; int io_event_source; TYPE_1__* manager; } ;
struct TYPE_7__ {int buttons; } ;
typedef TYPE_2__ Button ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(Button *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_3(VAR_0->manager->buttons, VAR_0->name);

        FUNC_4(VAR_0->io_event_source);
        FUNC_4(VAR_0->check_event_source);

        if (VAR_0->fd >= 0)



                (void) FUNC_1(VAR_0->fd);

        FUNC_2(VAR_0->name);
        FUNC_2(VAR_0->seat);
        FUNC_2(VAR_0);
}
