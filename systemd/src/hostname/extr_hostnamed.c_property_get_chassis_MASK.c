
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_2__ {char** data; } ;
typedef TYPE_1__ Context ;


 size_t VAR_0 ;
 char* FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Context *VAR_8 = VAR_6;
        const char *VAR_9;

        if (FUNC_1(VAR_8->data[VAR_0]))
                VAR_9 = FUNC_0();
        else
                VAR_9 = VAR_8->data[VAR_0];

        return FUNC_2(VAR_5, "s", VAR_9);
}
