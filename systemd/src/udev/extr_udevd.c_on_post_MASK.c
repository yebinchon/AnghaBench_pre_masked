
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_event_source ;
struct TYPE_4__ {scalar_t__ cgroup; int event; scalar_t__ exit; int kill_workers_event; int workers; int events; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int *,int ,scalar_t__,int,int ,TYPE_1__*,int ,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(sd_event_source *VAR_6, void *VAR_7) {
        Manager *VAR_8 = VAR_7;

        FUNC_1(VAR_8);

        if (!FUNC_0(VAR_8->events))
                return 1;



        if (!FUNC_4(VAR_8->workers)) {

                (void) FUNC_3(VAR_8->event, &VAR_8->kill_workers_event, VAR_1,
                                        FUNC_5(VAR_1) + 3 * VAR_4, VAR_4,
                                        VAR_5, VAR_8, 0, "kill-workers-event", 0);
                return 1;
        }



        if (VAR_8->exit)
                return FUNC_6(VAR_8->event, 0);

        if (VAR_8->cgroup)

                (void) FUNC_2(VAR_3, VAR_8->cgroup, VAR_2, VAR_0, ((void*)0), ((void*)0), ((void*)0));

        return 1;
}
