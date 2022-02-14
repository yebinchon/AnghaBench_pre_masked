
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__* chroma_list; int output_cond; scalar_t__ p_processed; } ;
struct TYPE_5__ {TYPE_1__ prerender; } ;
typedef TYPE_2__ spu_private_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(spu_private_t *VAR_0)
{
    FUNC_1(&VAR_0->prerender.lock);
    while(VAR_0->prerender.p_processed)
        FUNC_0(&VAR_0->prerender.output_cond, &VAR_0->prerender.lock);
    VAR_0->prerender.chroma_list[0] = 0;
    FUNC_2(&VAR_0->prerender.lock);
}
