
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *,char*,char const*,unsigned int) ;
 int FUNC_1 (int *,int,char*,char const*) ;
 int FUNC_2 (int *,int,char*,char const*,char const*) ;
 int FUNC_3 (char const*,unsigned int*) ;
 int FUNC_4 (int *,char const*,char const**) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_0, const char *VAR_1, unsigned *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        VAR_4 = FUNC_4(VAR_0, VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return FUNC_1(VAR_0, VAR_4, "Failed to query %s: %m", VAR_1);

        VAR_4 = FUNC_3(VAR_3, VAR_2);
        if (VAR_4 < 0)
                return FUNC_2(VAR_0, VAR_4, "Failed to parse %s \"%s\": %m", VAR_1, VAR_3);

        FUNC_0(VAR_0, "Device has %s=%u", VAR_1, *VAR_2);
        return 0;
}
