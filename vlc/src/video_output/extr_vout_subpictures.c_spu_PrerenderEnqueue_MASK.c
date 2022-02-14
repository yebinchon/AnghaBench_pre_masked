
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_4__ {int lock; int cond; int vector; } ;
struct TYPE_5__ {TYPE_1__ prerender; } ;
typedef TYPE_2__ spu_private_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(spu_private_t *VAR_0, subpicture_t *VAR_1)
{
    FUNC_1(&VAR_0->prerender.lock);
    FUNC_3(&VAR_0->prerender.vector, VAR_1);
    FUNC_0(&VAR_0->prerender.cond);
    FUNC_2(&VAR_0->prerender.lock);
}
