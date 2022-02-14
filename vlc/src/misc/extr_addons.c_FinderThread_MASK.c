
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int module_t ;
struct TYPE_20__ {int (* discovery_ended ) (TYPE_5__*) ;} ;
struct TYPE_23__ {TYPE_4__* p_priv; TYPE_2__ owner; } ;
typedef TYPE_5__ addons_manager_t ;
struct TYPE_17__ {int i_size; int p_elems; } ;
struct TYPE_19__ {int no_interact; } ;
struct TYPE_24__ {char* psz_uri; TYPE_14__ entries; int (* pf_find ) (TYPE_6__*) ;TYPE_1__ obj; } ;
typedef TYPE_6__ addons_finder_t ;
struct TYPE_18__ {scalar_t__ i_size; char** p_elems; } ;
struct TYPE_21__ {int lock; TYPE_15__ uris; scalar_t__ b_live; int waitcond; int p_interrupt; } ;
struct TYPE_22__ {TYPE_3__ finder; int p_parent; } ;


 int FUNC_0 (TYPE_14__) ;
 int FUNC_1 (TYPE_15__,int ) ;
 int FUNC_2 (TYPE_14__) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (TYPE_6__*,char*,int *,int) ;
 int FUNC_6 (TYPE_6__*,int *) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,int *) ;
 TYPE_6__* FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;

__attribute__((used)) static void *FUNC_19( void *VAR_1 )
{
    addons_manager_t *VAR_2 = VAR_1;
    int VAR_3 = FUNC_18();
    FUNC_12( VAR_2->p_priv->finder.p_interrupt );

    FUNC_14( &VAR_2->p_priv->finder.lock );
    while( VAR_2->p_priv->finder.b_live )
    {
        char *VAR_4;

        FUNC_11( VAR_0, VAR_1 );
        while( VAR_2->p_priv->finder.uris.i_size == 0 &&
               VAR_2->p_priv->finder.b_live )
        {
            FUNC_9( &VAR_2->p_priv->finder.waitcond,
                           &VAR_2->p_priv->finder.lock );
        }
        FUNC_13();
        if( !VAR_2->p_priv->finder.b_live )
            break;
        VAR_4 = VAR_2->p_priv->finder.uris.p_elems[0];
        FUNC_1( VAR_2->p_priv->finder.uris, 0 );

        FUNC_15( &VAR_2->p_priv->finder.lock );

        addons_finder_t *VAR_5 =
                FUNC_10( VAR_2->p_priv->p_parent, sizeof( *VAR_5 ), "entries finder" );

        if( VAR_5 != ((void*)0) )
        {
            VAR_5->obj.no_interact = 1;
            module_t *VAR_6;
            FUNC_0( VAR_5->entries );
            VAR_5->psz_uri = VAR_4;

            VAR_6 = FUNC_5( VAR_5, "addons finder", ((void*)0), 0 );
            if( VAR_6 )
            {
                VAR_5->pf_find( VAR_5 );
                FUNC_6( VAR_5, VAR_6 );
                FUNC_3( VAR_2, VAR_5->entries.p_elems, VAR_5->entries.i_size );
            }
            FUNC_2( VAR_5->entries );
            FUNC_4( VAR_4 );
            FUNC_16(VAR_5);
        }

        VAR_2->owner.discovery_ended( VAR_2 );
        FUNC_14( &VAR_2->p_priv->finder.lock );
    }

    FUNC_15( &VAR_2->p_priv->finder.lock );
    FUNC_17( VAR_3 );
    return ((void*)0);
}
