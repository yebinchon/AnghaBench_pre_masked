
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fifo_fd; scalar_t__ fifo_path; int event_source; TYPE_1__* manager; int id; } ;
struct TYPE_6__ {int event; } ;
typedef TYPE_2__ Inhibitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int *,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (char*,int ,char*) ;

int FUNC_8(Inhibitor *VAR_10) {
        int VAR_11;

        FUNC_0(VAR_10);


        if (!VAR_10->fifo_path) {
                VAR_11 = FUNC_1("/run/systemd/inhibit", 0755, 0, 0, VAR_2);
                if (VAR_11 < 0)
                        return VAR_11;

                VAR_10->fifo_path = FUNC_7("/run/systemd/inhibit/", VAR_10->id, ".ref");
                if (!VAR_10->fifo_path)
                        return -VAR_1;

                if (FUNC_2(VAR_10->fifo_path, 0600) < 0 && VAR_8 != VAR_0)
                        return -VAR_8;
        }


        if (VAR_10->fifo_fd < 0) {
                VAR_10->fifo_fd = FUNC_3(VAR_10->fifo_path, VAR_5|VAR_3|VAR_4);
                if (VAR_10->fifo_fd < 0)
                        return -VAR_8;
        }

        if (!VAR_10->event_source) {
                VAR_11 = FUNC_4(VAR_10->manager->event, &VAR_10->event_source, VAR_10->fifo_fd, 0, VAR_9, VAR_10);
                if (VAR_11 < 0)
                        return VAR_11;

                VAR_11 = FUNC_6(VAR_10->event_source, VAR_7-10);
                if (VAR_11 < 0)
                        return VAR_11;

                (void) FUNC_5(VAR_10->event_source, "inhibitor-ref");
        }


        VAR_11 = FUNC_3(VAR_10->fifo_path, VAR_6|VAR_3|VAR_4);
        if (VAR_11 < 0)
                return -VAR_8;

        return VAR_11;
}
