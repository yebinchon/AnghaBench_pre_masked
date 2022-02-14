
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int psz_password; int psz_username; int psz_referrer; int psz_user_agent; int psz_icy_title; int psz_icy_genre; int psz_icy_name; int psz_location; int psz_mime; int proxy; scalar_t__ b_proxy; int url; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_2( &VAR_2->url );
    if( VAR_2->b_proxy )
        FUNC_2( &VAR_2->proxy );

    FUNC_1( VAR_2->psz_mime );
    FUNC_1( VAR_2->psz_location );

    FUNC_1( VAR_2->psz_icy_name );
    FUNC_1( VAR_2->psz_icy_genre );
    FUNC_1( VAR_2->psz_icy_title );

    FUNC_1( VAR_2->psz_user_agent );
    FUNC_1( VAR_2->psz_referrer );
    FUNC_1( VAR_2->psz_username );
    FUNC_1( VAR_2->psz_password );

    FUNC_0( VAR_1 );
}
