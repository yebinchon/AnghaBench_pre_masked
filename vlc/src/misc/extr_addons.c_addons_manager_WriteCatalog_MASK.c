
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_13__ {int no_interact; } ;
struct TYPE_17__ {int (* pf_catalog ) (TYPE_5__*,int ,int ) ;TYPE_1__ obj; } ;
typedef TYPE_5__ addons_storage_t ;
struct TYPE_18__ {TYPE_4__* p_priv; } ;
typedef TYPE_6__ addons_manager_t ;
struct TYPE_14__ {int i_size; int p_elems; } ;
struct TYPE_15__ {int lock; TYPE_2__ entries; } ;
struct TYPE_16__ {TYPE_3__ finder; int p_parent; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_5__*,char*,char*,int) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 TYPE_5__* FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7( addons_manager_t *VAR_1 )
{
    int VAR_2 = VAR_0;

    addons_storage_t *VAR_3 =
        FUNC_3( VAR_1->p_priv->p_parent, sizeof( *VAR_3 ), "entries storage" );
    VAR_3->obj.no_interact = 1;

    module_t *VAR_4 = FUNC_0( VAR_3, "addons storage",
                                      "addons.store.install", 1 );
    if( VAR_4 )
    {
        FUNC_4( &VAR_1->p_priv->finder.lock );
        VAR_2 = VAR_3->pf_catalog( VAR_3, VAR_1->p_priv->finder.entries.p_elems,
                                          VAR_1->p_priv->finder.entries.i_size );
        FUNC_5( &VAR_1->p_priv->finder.lock );
        FUNC_1( VAR_3, VAR_4 );
    }
    FUNC_6(VAR_3);

    return VAR_2;
}
