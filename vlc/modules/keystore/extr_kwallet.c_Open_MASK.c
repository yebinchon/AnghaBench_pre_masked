
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_keystore_sys ;
struct TYPE_5__ {int p_sys; int pf_remove; int pf_find; int pf_store; } ;
typedef TYPE_1__ vlc_keystore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5( vlc_object_t* VAR_4 )
{
    vlc_keystore *VAR_5 = ( vlc_keystore* )VAR_4;
    int VAR_6;

    VAR_5->p_sys = FUNC_0( 1, sizeof( vlc_keystore_sys ) );
    if ( !VAR_5->p_sys)
        return VAR_3;

    VAR_6 = FUNC_4( VAR_5 );
    if ( VAR_6 )
    {
        FUNC_3( VAR_5, "vlc_dbus_init failed" );
        goto error;
    }

    VAR_6 = FUNC_2( VAR_5 );
    if ( VAR_6 )
    {
        FUNC_3( VAR_5, "kwallet_open failed" );
        goto error;
    }

    VAR_5->pf_store = VAR_2;
    VAR_5->pf_find = VAR_0;
    VAR_5->pf_remove = VAR_1;

    return VAR_6;

error:
    FUNC_1( VAR_5->p_sys );
    return VAR_6;
}
