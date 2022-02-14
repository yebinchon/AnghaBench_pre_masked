
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**,char const*) ;
 int FUNC_3 (int *,int ,int ,char*,int ,char const*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        char **VAR_5 = VAR_4;
        const char *VAR_6;

        FUNC_1(VAR_5);

        VAR_6 = FUNC_4(VAR_2);

        if (!FUNC_5(VAR_6))
                return FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_0),
                                "Path in JSON field '%s' is not absolute: %s", FUNC_6(VAR_1), VAR_6);

        return FUNC_2(VAR_5, VAR_6);
}
