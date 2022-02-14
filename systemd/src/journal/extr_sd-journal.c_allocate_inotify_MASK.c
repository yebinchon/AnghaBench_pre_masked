
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inotify_fd; int directories_by_wd; } ;
typedef TYPE_1__ sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(sd_journal *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->inotify_fd < 0) {
                VAR_3->inotify_fd = FUNC_2(VAR_1|VAR_0);
                if (VAR_3->inotify_fd < 0)
                        return -VAR_2;
        }

        return FUNC_1(&VAR_3->directories_by_wd, ((void*)0));
}
