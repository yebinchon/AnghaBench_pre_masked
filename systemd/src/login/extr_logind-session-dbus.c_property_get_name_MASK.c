
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* user; } ;
typedef TYPE_2__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_2__ sd_bus ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ Session ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_2(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Session *VAR_7 = VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        return FUNC_1(VAR_4, "s", VAR_7->user->name);
}
