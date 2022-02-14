
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int module_t ;
struct TYPE_17__ {TYPE_1__* p_priv; } ;
typedef TYPE_3__ addons_manager_t ;
struct TYPE_14__ {int i_size; int p_elems; } ;
struct TYPE_16__ {int no_interact; } ;
struct TYPE_18__ {TYPE_12__ entries; int (* pf_find ) (TYPE_4__*) ;int * psz_uri; TYPE_2__ obj; } ;
typedef TYPE_4__ addons_finder_t ;
struct TYPE_15__ {int p_parent; } ;


 int FUNC_0 (TYPE_12__) ;
 int FUNC_1 (TYPE_12__) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int * FUNC_3 (TYPE_4__*,char*,char*,int) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int ,int,char*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8( addons_manager_t *VAR_0 )
{
    addons_finder_t *VAR_1 =
        FUNC_6( VAR_0->p_priv->p_parent, sizeof( *VAR_1 ), "entries finder" );
    VAR_1->obj.no_interact = 1;

    module_t *VAR_2 = FUNC_3( VAR_1, "addons finder",
                                      "addons.store.list", 1 );
    if( VAR_2 )
    {
        FUNC_0( VAR_1->entries );
        VAR_1->psz_uri = ((void*)0);
        VAR_1->pf_find( VAR_1 );
        FUNC_4( VAR_1, VAR_2 );

        FUNC_2( VAR_0, VAR_1->entries.p_elems, VAR_1->entries.i_size );

        FUNC_1( VAR_1->entries );
    }
    FUNC_7(VAR_1);
}
