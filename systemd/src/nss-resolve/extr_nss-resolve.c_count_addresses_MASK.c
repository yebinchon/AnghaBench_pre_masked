
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* sd_bus_message ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const**,char,char*) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (char const**,char*,...) ;
 int FUNC_5 (char const**,int) ;
 int FUNC_6 (char const**,char*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_1, int VAR_2, const char **VAR_3) {
        int VAR_4 = 0, VAR_5;

        FUNC_0(VAR_1);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_2(VAR_1, 'a', "(iiay)");
        if (VAR_5 < 0)
                return VAR_5;

        while ((VAR_5 = FUNC_2(VAR_1, 'r', "iiay")) > 0) {
                int VAR_6, VAR_7;

                FUNC_1(sizeof(int32_t) == sizeof(int));

                VAR_5 = FUNC_4(VAR_1, "ii", &VAR_7, &VAR_6);
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_5 = FUNC_6(VAR_1, "ay");
                if (VAR_5 < 0)
                        return VAR_5;

                VAR_5 = FUNC_3(VAR_1);
                if (VAR_5 < 0)
                        return VAR_5;

                if (VAR_2 != VAR_0 && VAR_6 != VAR_2)
                        continue;

                VAR_4++;
        }
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_3(VAR_1);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_4(VAR_1, "s", VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_5(VAR_1, 1);
        if (VAR_5 < 0)
                return VAR_5;

        return VAR_4;
}
