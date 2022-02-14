
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char const**) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(sd_device *VAR_2, char **VAR_3) {
        char VAR_4[VAR_0], *VAR_5;
        const char *VAR_6;
        dev_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_3);

        VAR_8 = FUNC_2(VAR_2, &VAR_6);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_1(VAR_2, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        FUNC_5(VAR_4,
                              FUNC_4(VAR_6, "block") ? "block" : "char",
                              VAR_7);

        VAR_5 = FUNC_3(VAR_4);
        if (!VAR_5)
                return -VAR_1;

        *VAR_3 = VAR_5;
        return 0;
}
