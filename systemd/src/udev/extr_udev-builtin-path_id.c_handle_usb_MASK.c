
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (char**,char*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const**) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 int * FUNC_4 (int *,char*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static sd_device *FUNC_6(sd_device *VAR_0, char **VAR_1) {
        const char *VAR_2, *VAR_3, *VAR_4;

        if (FUNC_2(VAR_0, &VAR_2) < 0)
                return VAR_0;
        if (!FUNC_0(VAR_2, "usb_interface", "usb_device"))
                return VAR_0;

        if (FUNC_3(VAR_0, &VAR_3) < 0)
                return VAR_0;
        VAR_4 = FUNC_5(VAR_3, '-');
        if (!VAR_4)
                return VAR_0;
        VAR_4++;

        FUNC_1(VAR_1, "usb-0:%s", VAR_4);
        return FUNC_4(VAR_0, "usb");
}
