
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;
 float FUNC_4 (char*,int *) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_0, float *VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3 == ((void*)0))
        return 0;

    size_t VAR_4 = FUNC_2(VAR_2);
    VAR_3 += VAR_4;
    char *VAR_5 = ((void*)0);

    if (VAR_3[0] == '>')
    {
        VAR_3 += 1;
        VAR_5 = FUNC_1(VAR_3, '<');
    }
    else if (VAR_3[0] == '=' && VAR_3[1] == '"')
    {
        VAR_3 += 2;
        VAR_5 = FUNC_1(VAR_3, '"');
    }
    if (FUNC_3(VAR_5 == ((void*)0) || VAR_5 == VAR_3 + 1))
        return 0;

    *VAR_1 = FUNC_4(VAR_3, ((void*)0));
    return 1;
}
