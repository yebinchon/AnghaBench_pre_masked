
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,char const**) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const*) ;

__attribute__((used)) static int FUNC_7(sd_device *VAR_1) {
        const char *VAR_2, *VAR_3;

        if (VAR_0)
                return 0;

        VAR_2 = FUNC_1(VAR_1);

        VAR_3 = FUNC_0(VAR_1);
        if (!VAR_3)
                (void) FUNC_4(VAR_1, "ID_PART_ENTRY_NUMBER", &VAR_3);

        if (VAR_2 && VAR_3)
                VAR_0 = FUNC_6(VAR_2, " ", VAR_3);
        else if (VAR_3)
                VAR_0 = FUNC_5(VAR_3);
        else if (VAR_2)
                VAR_0 = FUNC_5(VAR_2);
        else
                return 0;

        if (!VAR_0)
                return FUNC_3();

        FUNC_2("Discovered description=%s", VAR_0);
        return 1;
}
