
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, const char *VAR_2,
        luaL_Buffer *VAR_3)
{
    if (FUNC_0(VAR_0)) {
        if (FUNC_0(VAR_1)) {
            if (VAR_0 == VAR_1) FUNC_2(VAR_3, VAR_2);
            return 0;
        } else {
            FUNC_2(VAR_3, VAR_2);
            return VAR_0;
        }
    } else {
        FUNC_1(VAR_3, (char) VAR_0);
        return 0;
    }
}
