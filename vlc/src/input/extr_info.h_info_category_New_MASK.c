
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int infos; int psz_name; } ;
typedef TYPE_1__ info_category_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline info_category_t *FUNC_3(const char *VAR_0)
{
    info_category_t *VAR_1 = FUNC_0(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);
    VAR_1->psz_name = FUNC_1(VAR_0);
    FUNC_2(&VAR_1->infos);
    return VAR_1;
}
