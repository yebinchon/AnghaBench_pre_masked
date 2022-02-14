
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef scalar_t__ JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_4, JsonVariant *VAR_5, JsonDispatchFlags VAR_6, void *VAR_7) {
        int32_t *VAR_8 = VAR_7;

        FUNC_1(VAR_5);
        FUNC_1(VAR_8);

        if (!FUNC_4(VAR_5))
                return FUNC_2(VAR_5, VAR_6, FUNC_0(VAR_0), "JSON field '%s' is not an integer.", FUNC_5(VAR_4));

        if (FUNC_3(VAR_5) < VAR_3 || FUNC_3(VAR_5) > VAR_2)
                return FUNC_2(VAR_5, VAR_6, FUNC_0(VAR_1), "JSON field '%s' out of bounds.", FUNC_5(VAR_4));

        *VAR_8 = (int32_t) FUNC_3(VAR_5);
        return 0;
}
