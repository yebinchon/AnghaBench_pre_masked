
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const**) ;
 int VAR_1 ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;

int FUNC_4(sd_device *VAR_2) {
        const char *VAR_3;
        char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_2);

        VAR_5 = FUNC_1(VAR_2, &VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_4 = FUNC_2("/run/udev/data/", VAR_3);

        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5 < 0 && VAR_1 != VAR_0)
                return -VAR_1;

        return 0;
}
