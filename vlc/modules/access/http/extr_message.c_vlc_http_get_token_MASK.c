
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t const) ;
 char* FUNC_2 (char const*) ;
 size_t const FUNC_3 (char const*) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0, const char *VAR_1)
{
    const size_t VAR_2 = FUNC_0(VAR_1);

    while (VAR_0 != ((void*)0))
    {
        if (FUNC_3(VAR_0) == VAR_2
         && !FUNC_1(VAR_1, VAR_0, VAR_2))
            return VAR_0;

        VAR_0 = FUNC_2(VAR_0);
    }

    return ((void*)0);
}
