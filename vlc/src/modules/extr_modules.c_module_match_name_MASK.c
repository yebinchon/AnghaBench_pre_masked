
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_score; size_t i_shortcuts; char** pp_shortcuts; } ;
typedef TYPE_1__ module_t ;


 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_1(const module_t *VAR_0, const char *VAR_1, size_t VAR_2)
{

     if (VAR_2 == 3 && FUNC_0("any", VAR_1, VAR_2) == 0)
         return VAR_0->i_score > 0;

     for (size_t VAR_3 = 0; VAR_3 < VAR_0->i_shortcuts; VAR_3++)
          if (FUNC_0(VAR_0->pp_shortcuts[VAR_3], VAR_1, VAR_2) == 0
           && VAR_0->pp_shortcuts[VAR_3][VAR_2] == '\0')
              return 1;

     return 0;
}
