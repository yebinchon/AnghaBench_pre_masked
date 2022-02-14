
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int scheduled_shutdown_timeout; int scheduled_shutdown_type; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char,char*) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Manager *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_8 = FUNC_3(VAR_4, 'r', "st");
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_4, "st", VAR_7->scheduled_shutdown_type, VAR_7->scheduled_shutdown_timeout);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_2(VAR_4);
}
