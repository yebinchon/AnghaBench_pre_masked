
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int opaque; int (* pf_destroy_device ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ callbacks; int poolrefs; } ;
typedef TYPE_2__ va_pool_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(va_pool_t *VAR_0)
{
    if (FUNC_0(&VAR_0->poolrefs, 1) != 1)
        return;

    VAR_0->callbacks.pf_destroy_device(VAR_0->callbacks.opaque);

    FUNC_1(VAR_0);
}
