
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(sd_device *VAR_1) {
        const char *VAR_2;

        FUNC_0(VAR_1);

        if (VAR_0)
                return 0;

        if (FUNC_3(VAR_1, "SYSTEMD_MOUNT_OPTIONS", &VAR_2) < 0)
                return 0;

        VAR_0 = FUNC_4(VAR_2);
        if (!VAR_0)
                return FUNC_2();

        FUNC_1("Discovered options=%s", VAR_0);
        return 1;
}
