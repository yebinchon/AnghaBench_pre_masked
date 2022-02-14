
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int,void const*,char**) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *,char,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int*) ;
 int FUNC_10 (int *,char,void const**,size_t*) ;

__attribute__((used)) static int FUNC_11(sd_bus *VAR_4, const char *VAR_5, sd_bus_message *VAR_6, sd_bus_error *VAR_7, void *VAR_8) {
        char **VAR_9 = (char **) VAR_8;
        const void *VAR_10;
        int VAR_11, VAR_12;
        size_t VAR_13;

        FUNC_3(VAR_9);

        VAR_12 = FUNC_7(VAR_6, 'r', "iay");
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_9(VAR_6, "i", &VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_10(VAR_6, 'y', &VAR_10, &VAR_13);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_8(VAR_6);
        if (VAR_12 < 0)
                return VAR_12;

        if (VAR_13 == 0 && VAR_11 == VAR_2) {
                *VAR_9 = FUNC_6(*VAR_9);
                return 0;
        }

        if (!FUNC_1(VAR_11, VAR_0, VAR_1))
                return FUNC_5(FUNC_2(VAR_3),
                                       "Unknown address family %i", VAR_11);

        if (VAR_13 != FUNC_0(VAR_11))
                return FUNC_5(FUNC_2(VAR_3),
                                       "Invalid address size");

        VAR_12 = FUNC_4(VAR_11, VAR_10, VAR_9);
        if (VAR_12 < 0)
                return VAR_12;

        return 0;
}
