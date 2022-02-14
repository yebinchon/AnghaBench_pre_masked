
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytes; } ;
typedef TYPE_1__ sd_id128_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (int *,int ,void const**,size_t*) ;

int FUNC_2(sd_bus *VAR_3, const char *VAR_4, sd_bus_message *VAR_5, sd_bus_error *VAR_6, void *VAR_7) {
        sd_id128_t *VAR_8 = VAR_7;
        const void *VAR_9;
        size_t VAR_10;
        int VAR_11;

        VAR_11 = FUNC_1(VAR_5, VAR_1, &VAR_9, &VAR_10);
        if (VAR_11 < 0)
                return VAR_11;

        if (VAR_10 == 0)
                *VAR_8 = VAR_2;
        else if (VAR_10 == 16)
                FUNC_0((*VAR_8).bytes, VAR_9, VAR_10);
        else
                return -VAR_0;

        return 0;
}
