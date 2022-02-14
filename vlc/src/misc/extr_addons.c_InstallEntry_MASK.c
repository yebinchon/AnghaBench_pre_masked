
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_priv; } ;
typedef TYPE_3__ addons_manager_t ;
struct TYPE_12__ {scalar_t__ e_type; } ;
typedef TYPE_4__ addon_entry_t ;
struct TYPE_9__ {int b_live; int waitcond; int lock; int thread; int entries; } ;
struct TYPE_10__ {TYPE_1__ installer; int p_parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( addons_manager_t *VAR_8, addon_entry_t *VAR_9 )
{
    if ( VAR_9->e_type == VAR_2 ||
         VAR_9->e_type == VAR_1 ||
         VAR_9->e_type == VAR_0 )
        return VAR_4;

    FUNC_4( &VAR_8->p_priv->installer.lock );
    FUNC_0( VAR_8->p_priv->installer.entries, VAR_9 );
    if( !VAR_8->p_priv->installer.b_live )
    {
        if( FUNC_2( &VAR_8->p_priv->installer.thread, VAR_3, VAR_8,
                       VAR_7 ) )
        {
            FUNC_1( VAR_8->p_priv->p_parent,
                     "cannot spawn addons installer thread" );
            FUNC_5( &VAR_8->p_priv->installer.lock );
            return VAR_5;
        }
        else
            VAR_8->p_priv->installer.b_live = 1;
    }
    FUNC_5( &VAR_8->p_priv->installer.lock );
    FUNC_3( &VAR_8->p_priv->installer.waitcond );
    return VAR_6;
}
