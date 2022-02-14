
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fifo_path; int state_file; int id; TYPE_1__* manager; int fifo_fd; int event_source; int why; int who; } ;
struct TYPE_7__ {int inhibitors; } ;
typedef TYPE_2__ Inhibitor ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

Inhibitor* FUNC_5(Inhibitor *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->who);
        FUNC_0(VAR_0->why);

        FUNC_4(VAR_0->event_source);
        FUNC_3(VAR_0->fifo_fd);

        FUNC_1(VAR_0->manager->inhibitors, VAR_0->id);



        FUNC_0(VAR_0->state_file);
        FUNC_0(VAR_0->fifo_path);

        return FUNC_2(VAR_0);
}
