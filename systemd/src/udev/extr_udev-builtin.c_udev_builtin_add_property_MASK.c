
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_device ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,char const*) ;
 int FUNC_2 (char const*,int,char*,char const*,char*,char*) ;
 int FUNC_3 (char*,char const*,char*) ;
 char* FUNC_4 (char const*) ;

int FUNC_5(sd_device *VAR_0, bool VAR_1, const char *VAR_2, const char *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
        if (VAR_4 < 0)
                return FUNC_2(VAR_0, VAR_4, "Failed to add property '%s%s%s'",
                                              VAR_2, VAR_3 ? "=" : "", FUNC_4(VAR_3));

        if (VAR_1)
                FUNC_3("%s=%s\n", VAR_2, FUNC_4(VAR_3));

        return 0;
}
