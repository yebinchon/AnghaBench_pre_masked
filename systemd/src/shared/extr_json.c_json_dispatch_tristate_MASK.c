
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int ,char*,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        int *VAR_5 = VAR_4;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        if (!FUNC_4(VAR_2))
                return FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0), "JSON field '%s' is not a boolean.", FUNC_5(VAR_1));

        *VAR_5 = FUNC_3(VAR_2);
        return 0;
}
