
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int i_shortcuts; char** pp_shortcuts; } ;
typedef TYPE_1__ module_t ;


 char* FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int * FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_3(const module_t *VAR_0, const char *VAR_1, bool VAR_2)
{
    if (VAR_1 == ((void*)0))
        return 1;

    const char *VAR_3 = FUNC_0(VAR_0);

    if (VAR_2 ? (FUNC_1(VAR_3, VAR_1) == 0)
               : (FUNC_2(VAR_3, VAR_1) != ((void*)0)))
        return 1;

    for (unsigned VAR_4 = 0; VAR_4 < VAR_0->i_shortcuts; VAR_4++)
    {
        const char *VAR_5 = VAR_0->pp_shortcuts[VAR_4];

        if (VAR_2 ? (FUNC_1(VAR_5, VAR_1) == 0)
                   : (FUNC_2(VAR_5, VAR_1) != ((void*)0)))
            return 1;
    }
    return 0;
}
