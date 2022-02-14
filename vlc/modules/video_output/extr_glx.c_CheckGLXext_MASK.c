
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Display ;


 char* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (char const*,char const*,size_t const) ;
 size_t FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool FUNC_5 (Display *VAR_0, unsigned VAR_1, const char *VAR_2)
{
    const char *VAR_3 = FUNC_0 (VAR_0, VAR_1);
    const size_t VAR_4 = FUNC_3 (VAR_2);

    while (*VAR_3)
    {
        VAR_3 += FUNC_4 (VAR_3, " ");

        size_t VAR_5 = FUNC_2 (VAR_3, " ");
        if (VAR_5 == VAR_4 && !FUNC_1 (VAR_3, VAR_2, VAR_4))
            return 1;
        VAR_3 += VAR_5;
    }
    return 0;
}
