
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,int ,int ,char*,int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_3, JsonVariant *VAR_4, JsonDispatchFlags VAR_5, void *VAR_6) {
        uint32_t *VAR_7 = VAR_6;

        FUNC_1(VAR_4);
        FUNC_1(VAR_7);

        if (!FUNC_3(VAR_4))
                return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_0), "JSON field '%s' is not an unsigned integer.", FUNC_5(VAR_3));

        if (FUNC_4(VAR_4) > VAR_2)
                return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_1), "JSON field '%s' out of bounds.", FUNC_5(VAR_3));

        *VAR_7 = (uint32_t) FUNC_4(VAR_4);
        return 0;
}
