
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {char const* failed_assert; int failed_assert_trigger; int failed_assert_negate; char const* failed_assert_parameter; } ;
typedef TYPE_1__ UnitStatusInfo ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const**,int*,int*,char const**,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_1, const char *VAR_2, sd_bus_message *VAR_3, sd_bus_error *VAR_4, void *VAR_5) {
        UnitStatusInfo *VAR_6 = VAR_5;
        const char *VAR_7, *VAR_8;
        int VAR_9, VAR_10;
        int32_t VAR_11;
        int VAR_12;

        VAR_12 = FUNC_0(VAR_3, VAR_0, "(sbbsi)");
        if (VAR_12 < 0)
                return VAR_12;

        while ((VAR_12 = FUNC_2(VAR_3, "(sbbsi)", &VAR_7, &VAR_9, &VAR_10, &VAR_8, &VAR_11)) > 0) {
                if (VAR_11 < 0 && (!VAR_9 || !VAR_6->failed_assert)) {
                        VAR_6->failed_assert = VAR_7;
                        VAR_6->failed_assert_trigger = VAR_9;
                        VAR_6->failed_assert_negate = VAR_10;
                        VAR_6->failed_assert_parameter = VAR_8;
                }
        }
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_1(VAR_3);
        if (VAR_12 < 0)
                return VAR_12;

        return 0;
}
