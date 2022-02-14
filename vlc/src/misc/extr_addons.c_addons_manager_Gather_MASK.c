
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_priv; } ;
typedef TYPE_3__ addons_manager_t ;
struct TYPE_6__ {int b_live; int waitcond; int lock; int thread; int uris; } ;
struct TYPE_7__ {TYPE_1__ finder; int p_parent; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7( addons_manager_t *VAR_2, const char *VAR_3 )
{
    if ( !VAR_3 )
        return;

    FUNC_5( &VAR_2->p_priv->finder.lock );

    FUNC_0( VAR_2->p_priv->finder.uris, FUNC_2( VAR_3 ) );

    if( !VAR_2->p_priv->finder.b_live )
    {
        if( FUNC_3( &VAR_2->p_priv->finder.thread, VAR_0, VAR_2,
                       VAR_1 ) )
        {
            FUNC_1( VAR_2->p_priv->p_parent,
                     "cannot spawn entries provider thread" );
            FUNC_6( &VAR_2->p_priv->finder.lock );
            return;
        }
        VAR_2->p_priv->finder.b_live = 1;
    }

    FUNC_6( &VAR_2->p_priv->finder.lock );
    FUNC_4( &VAR_2->p_priv->finder.waitcond );
}
