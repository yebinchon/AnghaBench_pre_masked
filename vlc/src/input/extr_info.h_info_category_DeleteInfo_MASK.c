
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node; } ;
typedef TYPE_1__ info_t ;
typedef int info_category_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(info_category_t *VAR_2, const char *VAR_3)
{
    info_t *VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 != ((void*)0)) {
        FUNC_2(&VAR_4->node);
        FUNC_0(VAR_4);
        return VAR_1;
    }
    return VAR_0;
}
