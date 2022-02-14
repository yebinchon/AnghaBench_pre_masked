
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
struct TYPE_3__ {int monotonic; int realtime; } ;
typedef TYPE_1__ dual_timestamp ;
typedef int Seat ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Seat *VAR_7 = VAR_5;
        dual_timestamp VAR_8;
        uint64_t VAR_9;
        int VAR_10;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_10 = FUNC_2(VAR_7, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_9 = FUNC_3(VAR_3, "IdleSinceHint") ? VAR_8.realtime : VAR_8.monotonic;

        return FUNC_1(VAR_4, "t", VAR_9);
}
