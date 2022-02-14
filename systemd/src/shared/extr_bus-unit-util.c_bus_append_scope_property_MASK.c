
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int FUNC_0 (int *,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2) {
        if (FUNC_1(VAR_1, "RuntimeMaxSec"))

                return FUNC_0(VAR_0, VAR_1, VAR_2);

        if (FUNC_1(VAR_1, "TimeoutStopSec"))

                return FUNC_0(VAR_0, VAR_1, VAR_2);

        return 0;
}
