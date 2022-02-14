
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ inotify_fd; int inotify_event_source; int event_priority; int event; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(sd_bus *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (VAR_2->inotify_fd < 0)
                return 0;

        if (!VAR_2->event)
                return 0;

        if (!VAR_2->inotify_event_source) {
                VAR_3 = FUNC_1(VAR_2->event, &VAR_2->inotify_event_source, VAR_2->inotify_fd, VAR_0, VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_3 = FUNC_4(VAR_2->inotify_event_source, VAR_2->event_priority);
                if (VAR_3 < 0)
                        return VAR_3;

                VAR_3 = FUNC_2(VAR_2->inotify_event_source, "bus-inotify");
        } else
                VAR_3 = FUNC_3(VAR_2->inotify_event_source, VAR_2->inotify_fd);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
