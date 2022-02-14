
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_4__ {int monotonic; int realtime; } ;
typedef TYPE_1__ dual_timestamp ;
typedef int Manager ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        Manager *VAR_8 = VAR_6;
        dual_timestamp VAR_9 = VAR_0;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);
        FUNC_0(VAR_8);

        FUNC_1(VAR_8, &VAR_9);

        return FUNC_2(VAR_5, "t", FUNC_3(VAR_4, "IdleSinceHint") ? VAR_9.realtime : VAR_9.monotonic);
}
