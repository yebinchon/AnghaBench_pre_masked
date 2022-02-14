
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dev_kmsg_fd; int dev_kmsg_readable; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(Server *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);

        if (VAR_0->dev_kmsg_fd < 0)
                return 0;

        if (!VAR_0->dev_kmsg_readable)
                return 0;

        FUNC_1("Flushing /dev/kmsg...");

        for (;;) {
                VAR_1 = FUNC_2(VAR_0);
                if (VAR_1 < 0)
                        return VAR_1;

                if (VAR_1 == 0)
                        break;
        }

        return 0;
}
