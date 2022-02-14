
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(const char *VAR_0, size_t VAR_1)
{
    static const char VAR_2[4] = { '\r', '\n', '\r', '\n' };

    for (unsigned VAR_3 = 4; VAR_3 > 0; VAR_3--)
        if (VAR_1 >= VAR_3 && !FUNC_0(VAR_0 + VAR_1 - VAR_3, VAR_2, VAR_3))
            return 4 - VAR_3;
    return 4;
}
