
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bus_track; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ DnsQuery ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,TYPE_1__*) ;

int FUNC_4(DnsQuery *VAR_1, sd_bus_message *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        if (!VAR_1->bus_track) {
                VAR_3 = FUNC_3(FUNC_1(VAR_2), &VAR_1->bus_track, VAR_0, VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_2(VAR_1->bus_track, VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        return 0;
}
