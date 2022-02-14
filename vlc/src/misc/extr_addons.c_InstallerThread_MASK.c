
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_19__ {int (* addon_changed ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_22__ {TYPE_3__* p_priv; TYPE_1__ owner; } ;
typedef TYPE_4__ addons_manager_t ;
struct TYPE_23__ {scalar_t__ e_state; int lock; } ;
typedef TYPE_5__ addon_entry_t ;
struct TYPE_18__ {TYPE_5__** p_elems; int i_size; } ;
struct TYPE_20__ {int lock; TYPE_17__ entries; scalar_t__ b_live; int waitcond; int p_interrupt; } ;
struct TYPE_21__ {TYPE_2__ installer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_17__,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;

__attribute__((used)) static void *FUNC_16( void *VAR_6 )
{
    addons_manager_t *VAR_7 = VAR_6;
    int VAR_8 = FUNC_15();
    FUNC_10( VAR_7->p_priv->installer.p_interrupt );
    int VAR_9;

    FUNC_12( &VAR_7->p_priv->installer.lock );
    while( VAR_7->p_priv->installer.b_live )
    {
        FUNC_9( VAR_5, VAR_6 );
        while ( !VAR_7->p_priv->installer.entries.i_size &&
                VAR_7->p_priv->installer.b_live )
        {

            FUNC_8( &VAR_7->p_priv->installer.waitcond,
                           &VAR_7->p_priv->installer.lock );
        }
        FUNC_11();
        if( !VAR_7->p_priv->installer.b_live )
            break;

        addon_entry_t *VAR_10 = VAR_7->p_priv->installer.entries.p_elems[0];
        FUNC_0( VAR_7->p_priv->installer.entries, 0 );
        FUNC_1( VAR_10 );
        FUNC_13( &VAR_7->p_priv->installer.lock );

        FUNC_12( &VAR_10->lock );

        if ( VAR_10->e_state == VAR_0 )
        {
            VAR_10->e_state = VAR_3;
            FUNC_13( &VAR_10->lock );


            VAR_7->owner.addon_changed( VAR_7, VAR_10 );

            VAR_9 = FUNC_4( VAR_7, VAR_10, 0 );

            FUNC_12( &VAR_10->lock );
            VAR_10->e_state = ( VAR_9 == VAR_4 ) ? VAR_2
                                                        : VAR_0;
        }
        else if ( VAR_10->e_state == VAR_2 )
        {
            VAR_10->e_state = VAR_1;
            FUNC_13( &VAR_10->lock );


            VAR_7->owner.addon_changed( VAR_7, VAR_10 );

            VAR_9 = FUNC_4( VAR_7, VAR_10, 1 );

            FUNC_12( &VAR_10->lock );
            VAR_10->e_state = ( VAR_9 == VAR_4 ) ? VAR_0
                                                        : VAR_2;
        }
        FUNC_13( &VAR_10->lock );


        VAR_7->owner.addon_changed( VAR_7, VAR_10 );

        FUNC_2( VAR_10 );

        FUNC_3( VAR_7 );
        FUNC_12( &VAR_7->p_priv->installer.lock );
    }
    FUNC_13( &VAR_7->p_priv->installer.lock );
    FUNC_14( VAR_8 );
    return ((void*)0);
}
