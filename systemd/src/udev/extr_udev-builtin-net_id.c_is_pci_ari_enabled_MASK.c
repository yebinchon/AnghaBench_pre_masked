
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 scalar_t__ FUNC_0 (int *,char*,char const**) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(sd_device *VAR_0) {
        const char *VAR_1;

        if (FUNC_0(VAR_0, "ari_enabled", &VAR_1) < 0)
                return 0;

        return FUNC_1(VAR_1, "1");
}
