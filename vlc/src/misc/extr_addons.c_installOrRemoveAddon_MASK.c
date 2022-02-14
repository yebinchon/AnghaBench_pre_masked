
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_16__ {int no_interact; } ;
struct TYPE_18__ {int (* pf_install ) (TYPE_3__*,TYPE_5__*) ;int (* pf_remove ) (TYPE_3__*,TYPE_5__*) ;TYPE_1__ obj; } ;
typedef TYPE_3__ addons_storage_t ;
struct TYPE_19__ {TYPE_2__* p_priv; } ;
typedef TYPE_4__ addons_manager_t ;
struct TYPE_20__ {int lock; int e_flags; } ;
typedef TYPE_5__ addon_entry_t ;
struct TYPE_17__ {int p_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_3__*,char*,char*,int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 TYPE_3__* FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9( addons_manager_t *VAR_3, addon_entry_t *VAR_4, bool VAR_5 )
{
    int VAR_6 = VAR_1;

    addons_storage_t *VAR_7 =
        FUNC_5( VAR_3->p_priv->p_parent, sizeof( *VAR_7 ), "entries storage" );
    VAR_7->obj.no_interact = 1;

    module_t *VAR_8 = FUNC_0( VAR_7, "addons storage",
                                      "addons.store.install", 1 );
    if( VAR_8 )
    {
        if ( VAR_5 )
            VAR_6 = VAR_7->pf_install( VAR_7, VAR_4 );
        else
            VAR_6 = VAR_7->pf_remove( VAR_7, VAR_4 );
        FUNC_1( VAR_7, VAR_8 );
        FUNC_2( VAR_3->p_priv->p_parent, "InstallAddon returns %d", VAR_6 );
        if ( VAR_6 == VAR_2 )
        {

            FUNC_6( &VAR_4->lock );
            VAR_4->e_flags = VAR_0;
            FUNC_7( &VAR_4->lock );
        }
    }
    FUNC_8(VAR_7);

    return VAR_6;
}
