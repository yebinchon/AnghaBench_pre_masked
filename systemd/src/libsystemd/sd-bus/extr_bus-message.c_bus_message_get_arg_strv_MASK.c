
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char** sd_bus_message ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char const*,char*,char*,char*) ;
 int FUNC_1 (char***) ;
 int FUNC_2 (char***,unsigned int,char*,char const**) ;
 int FUNC_3 (char***,char***) ;

int FUNC_4(sd_bus_message *VAR_2, unsigned VAR_3, char ***VAR_4) {
        const char *VAR_5;
        char VAR_6;
        int VAR_7;

        FUNC_1(VAR_2);
        FUNC_1(VAR_4);

        VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_6, &VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        if (VAR_6 != VAR_1)
                return -VAR_0;
        if (!FUNC_0(VAR_5, "s", "o", "g"))
                return -VAR_0;

        return FUNC_3(VAR_2, VAR_4);
}
