
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uid_t ;
struct TYPE_7__ {scalar_t__ class; int name; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Machine ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;

int FUNC_5(sd_bus_message *VAR_4, void *VAR_5, sd_bus_error *VAR_6) {
        Machine *VAR_7 = VAR_5;
        uid_t VAR_8 = 0;
        int VAR_9;

        FUNC_1(VAR_4);
        FUNC_1(VAR_7);




        if (VAR_7->class == VAR_2)
                return FUNC_4(VAR_4, "u", FUNC_0(0));

        if (VAR_7->class != VAR_1)
                return FUNC_3(VAR_6, VAR_3, "UID/GID shift may only be determined for container machines.");

        VAR_9 = FUNC_2(VAR_7, &VAR_8);
        if (VAR_9 == -VAR_0)
                return FUNC_3(VAR_6, VAR_3, "Machine %s uses a complex UID/GID mapping, cannot determine shift", VAR_7->name);
        if (VAR_9 < 0)
                return VAR_9;

        return FUNC_4(VAR_4, "u", (uint32_t) VAR_8);
}
