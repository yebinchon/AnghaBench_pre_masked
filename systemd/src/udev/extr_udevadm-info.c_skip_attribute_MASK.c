
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;
 scalar_t__ FUNC_1 (char const* const*,int ,char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0) {
        static const char* const VAR_1[] = {
                "uevent",
                "dev",
                "modalias",
                "resource",
                "driver",
                "subsystem",
                "module",
        };

        return FUNC_1(VAR_1, FUNC_0(VAR_1), VAR_0) >= 0;
}
