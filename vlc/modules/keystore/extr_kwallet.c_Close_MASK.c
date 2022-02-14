
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_keystore ;
struct TYPE_4__ {struct TYPE_4__* psz_wallet; struct TYPE_4__* psz_app_id; int connection; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3( vlc_object_t* VAR_0 )
{
    vlc_keystore *VAR_1 = ( vlc_keystore* )VAR_0;

    FUNC_0( VAR_1->p_sys->connection );
    FUNC_1( VAR_1->p_sys->connection );
    FUNC_2( VAR_1->p_sys->psz_app_id );
    FUNC_2( VAR_1->p_sys->psz_wallet );
    FUNC_2( VAR_1->p_sys );
}
