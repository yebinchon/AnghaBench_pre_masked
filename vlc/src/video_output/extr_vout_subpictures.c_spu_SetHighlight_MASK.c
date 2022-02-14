
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_spu_highlight_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (TYPE_2__*,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(spu_t *VAR_0, const vlc_spu_highlight_t *VAR_1)
{
    FUNC_1(&VAR_0->p->lock);
    FUNC_0(VAR_0, VAR_1);
    FUNC_2(&VAR_0->p->lock);
}
