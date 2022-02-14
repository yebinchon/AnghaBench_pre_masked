
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int exit; int fd_inotify; int inotify_event; int ctrl; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(Manager *VAR_1) {
        FUNC_0(VAR_1);

        VAR_1->exit = 1;

        FUNC_5(0,
                  "STOPPING=1\n"
                  "STATUS=Starting shutdown...");


        VAR_1->ctrl = FUNC_6(VAR_1->ctrl);

        VAR_1->inotify_event = FUNC_4(VAR_1->inotify_event);
        VAR_1->fd_inotify = FUNC_3(VAR_1->fd_inotify);


        FUNC_1(VAR_1, VAR_0);
        FUNC_2(VAR_1);
}
