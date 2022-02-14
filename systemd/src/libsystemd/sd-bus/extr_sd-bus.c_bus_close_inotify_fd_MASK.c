
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ n_inotify_watches; int inotify_watches; int inotify_fd; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(sd_bus *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0);

        VAR_0->inotify_fd = FUNC_3(VAR_0->inotify_fd);
        VAR_0->inotify_watches = FUNC_2(VAR_0->inotify_watches);
        VAR_0->n_inotify_watches = 0;
}
