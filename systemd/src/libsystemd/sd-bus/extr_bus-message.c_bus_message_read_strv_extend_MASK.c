
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char** sd_bus_message ;


 int FUNC_0 (char***) ;
 int FUNC_1 (char***,char,char*) ;
 int FUNC_2 (char***) ;
 int FUNC_3 (char***,char,char const**) ;
 int FUNC_4 (char***,char const*) ;

int FUNC_5(sd_bus_message *VAR_0, char ***VAR_1) {
        const char *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_1(VAR_0, 'a', "s");
        if (VAR_3 <= 0)
                return VAR_3;

        while ((VAR_3 = FUNC_3(VAR_0, 's', &VAR_2)) > 0) {
                VAR_3 = FUNC_4(VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
        }
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_2(VAR_0);
        if (VAR_3 < 0)
                return VAR_3;

        return 1;
}
