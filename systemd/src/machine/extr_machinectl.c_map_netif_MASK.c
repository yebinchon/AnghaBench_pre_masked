
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int int32_t ;
struct TYPE_2__ {size_t n_netif; int netif; } ;
typedef TYPE_1__ MachineStatusInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void const*,size_t) ;
 int FUNC_2 (int *,int ,void const**,size_t*) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_3, const char *VAR_4, sd_bus_message *VAR_5, sd_bus_error *VAR_6, void *VAR_7) {
        MachineStatusInfo *VAR_8 = VAR_7;
        size_t VAR_9;
        const void *VAR_10;
        int VAR_11;

        FUNC_0(sizeof(int32_t) == sizeof(int));
        VAR_11 = FUNC_2(VAR_5, VAR_2, &VAR_10, &VAR_9);
        if (VAR_11 < 0)
                return VAR_11;
        if (VAR_11 == 0)
                return -VAR_0;

        VAR_8->n_netif = VAR_9 / sizeof(int32_t);
        VAR_8->netif = FUNC_1(VAR_10, VAR_9);
        if (!VAR_8->netif)
                return -VAR_1;

        return 0;
}
