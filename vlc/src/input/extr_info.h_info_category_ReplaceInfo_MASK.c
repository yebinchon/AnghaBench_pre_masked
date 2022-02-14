
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int node; int psz_name; } ;
typedef TYPE_1__ info_t ;
struct TYPE_9__ {int infos; } ;
typedef TYPE_2__ info_category_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(info_category_t *VAR_0,
                                             info_t *VAR_1)
{
    info_t *VAR_2 = FUNC_1(VAR_0, VAR_1->psz_name);
    if (VAR_2) {
        FUNC_3(&VAR_2->node);
        FUNC_0(VAR_2);
    }
    FUNC_2(&VAR_1->node, &VAR_0->infos);
}
