
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_7__ {int time_event_source; int io_event_source; } ;
typedef TYPE_1__ sd_netlink ;
typedef TYPE_1__ sd_event_source ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_0, void *VAR_1) {
        sd_netlink *VAR_2 = VAR_1;
        int VAR_3, VAR_4;
        usec_t VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_4(VAR_2);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_3 = FUNC_2(VAR_2->io_event_source, VAR_4);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_5(VAR_2, &VAR_5);
        if (VAR_3 < 0)
                return VAR_3;
        if (VAR_3 > 0) {
                int VAR_6;

                VAR_6 = FUNC_3(VAR_2->time_event_source, VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        VAR_3 = FUNC_1(VAR_2->time_event_source, VAR_3 > 0);
        if (VAR_3 < 0)
                return VAR_3;

        return 1;
}
