
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef scalar_t__ UnitFileChangeType ;
typedef int UnitFileChange ;


 int VAR_0 ;
 int FUNC_0 (size_t*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const**,char const**,char const**) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int **,size_t*,scalar_t__,char const*,char const*) ;
 int FUNC_8 (int ,int *,int *,size_t,int) ;

int FUNC_9(sd_bus_message *VAR_1, bool VAR_2, UnitFileChange **VAR_3, size_t *VAR_4) {
        const char *VAR_5, *VAR_6, *VAR_7;
        int VAR_8;



        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_8 = FUNC_3(VAR_1, VAR_0, "(sss)");
        if (VAR_8 < 0)
                return FUNC_1(VAR_8);

        while ((VAR_8 = FUNC_5(VAR_1, "(sss)", &VAR_5, &VAR_6, &VAR_7)) > 0) {


                UnitFileChangeType VAR_9 = FUNC_6(VAR_5);

                if (VAR_9 < 0) {
                        FUNC_2("Manager reported unknown change type \"%s\" for path \"%s\", ignoring.", VAR_5, VAR_6);
                        continue;
                }

                VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_9, VAR_6, VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;
        }
        if (VAR_8 < 0)
                return FUNC_1(VAR_8);

        VAR_8 = FUNC_4(VAR_1);
        if (VAR_8 < 0)
                return FUNC_1(VAR_8);

        FUNC_8(0, ((void*)0), *VAR_3, *VAR_4, VAR_2);
        return 0;
}
