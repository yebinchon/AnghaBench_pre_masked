
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int luaL_Buffer ;


 int FUNC_0 (int *,char) ;

__attribute__((used)) static size_t FUNC_1(int VAR_0, size_t VAR_1, luaL_Buffer *VAR_2)
{
    FUNC_0(VAR_2, (char) VAR_0);
    switch (VAR_0) {
        case '\r':
            return 1;
        case '\n':
            return (VAR_1 == 1)? 2: 0;
        case '.':
            if (VAR_1 == 2)
                FUNC_0(VAR_2, '.');
        default:
            return 0;
    }
}
