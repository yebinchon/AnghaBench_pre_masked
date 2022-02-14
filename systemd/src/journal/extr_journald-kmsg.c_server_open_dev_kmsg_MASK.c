
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_5__ {scalar_t__ dev_kmsg_fd; int dev_kmsg_readable; int dev_kmsg_event_source; int event; scalar_t__ read_kmsg; } ;
typedef TYPE_1__ Server ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;

int FUNC_8(Server *VAR_13) {
        mode_t VAR_14;
        int VAR_15;

        FUNC_0(VAR_13);

        if (VAR_13->read_kmsg)
                VAR_14 = VAR_8|VAR_5|VAR_7|VAR_6;
        else
                VAR_14 = VAR_9|VAR_5|VAR_7|VAR_6;

        VAR_13->dev_kmsg_fd = FUNC_3("/dev/kmsg", VAR_14);
        if (VAR_13->dev_kmsg_fd < 0) {
                FUNC_2(VAR_12 == VAR_0 ? VAR_3 : VAR_4,
                         "Failed to open /dev/kmsg, ignoring: %m");
                return 0;
        }

        if (!VAR_13->read_kmsg)
                return 0;

        VAR_15 = FUNC_5(VAR_13->event, &VAR_13->dev_kmsg_event_source, VAR_13->dev_kmsg_fd, VAR_2, VAR_11, VAR_13);
        if (VAR_15 < 0) {



                if (VAR_15 == -VAR_1) {
                        VAR_15 = 0;
                        goto fail;
                }

                FUNC_1(VAR_15, "Failed to add /dev/kmsg fd to event loop: %m");
                goto fail;
        }

        VAR_15 = FUNC_6(VAR_13->dev_kmsg_event_source, VAR_10+10);
        if (VAR_15 < 0) {
                FUNC_1(VAR_15, "Failed to adjust priority of kmsg event source: %m");
                goto fail;
        }

        VAR_13->dev_kmsg_readable = 1;

        return 0;

fail:
        VAR_13->dev_kmsg_event_source = FUNC_7(VAR_13->dev_kmsg_event_source);
        VAR_13->dev_kmsg_fd = FUNC_4(VAR_13->dev_kmsg_fd);

        return VAR_15;
}
