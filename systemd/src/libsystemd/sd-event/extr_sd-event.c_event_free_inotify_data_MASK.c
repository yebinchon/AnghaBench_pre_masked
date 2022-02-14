
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inotify_data {scalar_t__ buffer_filled; scalar_t__ fd; int priority; int wd; int inodes; } ;
struct TYPE_5__ {int epoll_fd; int inotify_data; int inotify_data_buffered; } ;
typedef TYPE_1__ sd_event ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct inotify_data*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int *) ;
 int VAR_2 ;
 int FUNC_4 (struct inotify_data*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 struct inotify_data* FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(sd_event *VAR_3, struct inotify_data *VAR_4) {
        FUNC_1(VAR_3);

        if (!VAR_4)
                return;

        FUNC_1(FUNC_6(VAR_4->inodes));
        FUNC_1(FUNC_6(VAR_4->wd));

        if (VAR_4->buffer_filled > 0)
                FUNC_0(VAR_1, VAR_3->inotify_data_buffered, VAR_4);

        FUNC_5(VAR_4->inodes);
        FUNC_5(VAR_4->wd);

        FUNC_2(FUNC_7(VAR_3->inotify_data, &VAR_4->priority) == VAR_4);

        if (VAR_4->fd >= 0) {
                if (FUNC_3(VAR_3->epoll_fd, VAR_0, VAR_4->fd, ((void*)0)) < 0)
                        FUNC_8(VAR_2, "Failed to remove inotify fd from epoll, ignoring: %m");

                FUNC_9(VAR_4->fd);
        }
        FUNC_4(VAR_4);
}
