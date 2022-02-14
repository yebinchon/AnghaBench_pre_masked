
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sd_device ;


 int FUNC_0 (char**) ;
 int FUNC_1 (char**,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char**,char*,char const**) ;
 scalar_t__ FUNC_3 (char**,char const**) ;
 char** FUNC_4 (char**,char*) ;

__attribute__((used)) static sd_device *FUNC_5(sd_device *VAR_0, char **VAR_1) {
        const char *VAR_2, *VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (FUNC_2(VAR_0, "type", &VAR_2) >= 0 &&
            FUNC_2(VAR_0, "ap_functions", &VAR_3) >= 0)
                FUNC_1(VAR_1, "ap-%s-%s", VAR_2, VAR_3);
        else {
                const char *VAR_4;

                if (FUNC_3(VAR_0, &VAR_4) >= 0)
                        FUNC_1(VAR_1, "ap-%s", VAR_4);
        }

        return FUNC_4(VAR_0, "ap");
}
