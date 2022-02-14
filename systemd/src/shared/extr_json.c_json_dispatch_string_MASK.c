
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**,int ) ;
 int FUNC_3 (char**,int ,int,char*,...) ;
 scalar_t__ FUNC_4 (char**) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char**) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;

int FUNC_9(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        char **VAR_5 = VAR_4;
        int VAR_6;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        if (FUNC_4(VAR_2)) {
                *VAR_5 = FUNC_7(*VAR_5);
                return 0;
        }

        if (!FUNC_5(VAR_2))
                return FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_0), "JSON field '%s' is not a string.", FUNC_8(VAR_1));

        VAR_6 = FUNC_2(VAR_5, FUNC_6(VAR_2));
        if (VAR_6 < 0)
                return FUNC_3(VAR_2, VAR_3, VAR_6, "Failed to allocate string: %m");

        return 0;
}
