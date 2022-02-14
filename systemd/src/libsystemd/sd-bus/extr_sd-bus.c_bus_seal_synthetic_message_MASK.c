
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ realtime; scalar_t__ monotonic; scalar_t__ attach_timestamp; } ;
typedef TYPE_1__ sd_bus_message ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

int FUNC_3(sd_bus *VAR_2, sd_bus_message *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);



        if (VAR_2->attach_timestamp) {
                if (VAR_3->realtime <= 0)
                        VAR_3->realtime = FUNC_1(VAR_1);

                if (VAR_3->monotonic <= 0)
                        VAR_3->monotonic = FUNC_1(VAR_0);
        }
        return FUNC_2(VAR_3, 0xFFFFFFFFULL, 0);
}
