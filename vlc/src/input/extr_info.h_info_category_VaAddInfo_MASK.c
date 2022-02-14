
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_8__ {int * psz_value; int node; } ;
typedef TYPE_1__ info_t ;
struct TYPE_9__ {int infos; } ;
typedef TYPE_2__ info_category_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int **,char const*,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static inline info_t *FUNC_5(info_category_t *VAR_0,
                                              const char *VAR_1,
                                              const char *VAR_2, va_list VAR_3)
{
    info_t *VAR_4 = FUNC_2(VAR_0, VAR_1);
    if (!VAR_4) {
        VAR_4 = FUNC_1(VAR_1);
        if (!VAR_4)
            return ((void*)0);
        FUNC_4(&VAR_4->node, &VAR_0->infos);
    } else
        FUNC_0(VAR_4->psz_value);
    if (FUNC_3(&VAR_4->psz_value, VAR_2, VAR_3) == -1)
        VAR_4->psz_value = ((void*)0);
    return VAR_4;
}
