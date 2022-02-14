
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


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;

int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        sd_id128_t *VAR_7 = VAR_5;

        if (FUNC_2(*VAR_7))
                return FUNC_0(VAR_4, "ay", 0);
        else
                return FUNC_1(VAR_4, 'y', VAR_7->bytes, 16);
}
