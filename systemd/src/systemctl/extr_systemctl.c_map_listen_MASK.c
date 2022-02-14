
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const**,char const**) ;
 int FUNC_3 (char***,char const*) ;

__attribute__((used)) static int FUNC_4(sd_bus *VAR_1, const char *VAR_2, sd_bus_message *VAR_3, sd_bus_error *VAR_4, void *VAR_5) {
        const char *VAR_6, *VAR_7;
        char ***VAR_8 = VAR_5;
        int VAR_9;

        VAR_9 = FUNC_0(VAR_3, VAR_0, "(ss)");
        if (VAR_9 < 0)
                return VAR_9;

        while ((VAR_9 = FUNC_2(VAR_3, "(ss)", &VAR_6, &VAR_7)) > 0) {

                VAR_9 = FUNC_3(VAR_8, VAR_6);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_9 = FUNC_3(VAR_8, VAR_7);
                if (VAR_9 < 0)
                        return VAR_9;
        }
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_1(VAR_3);
        if (VAR_9 < 0)
                return VAR_9;

        return 0;
}
