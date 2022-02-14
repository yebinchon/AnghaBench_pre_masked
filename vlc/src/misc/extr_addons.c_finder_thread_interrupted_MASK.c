
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_priv; } ;
typedef TYPE_3__ addons_manager_t ;
struct TYPE_5__ {int b_live; int lock; int waitcond; } ;
struct TYPE_4__ {TYPE_2__ finder; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( void* VAR_0 )
{
    addons_manager_t *VAR_1 = VAR_0;
    FUNC_1( &VAR_1->p_priv->finder.lock );
    VAR_1->p_priv->finder.b_live = 0;
    FUNC_0( &VAR_1->p_priv->finder.waitcond );
    FUNC_2( &VAR_1->p_priv->finder.lock );
}
