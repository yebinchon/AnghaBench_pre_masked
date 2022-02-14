
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {struct TYPE_5__* psz_mcast_ip; struct TYPE_5__* psz_password; struct TYPE_5__* psz_user; struct TYPE_5__* psz_name; struct TYPE_5__* psz_location; struct TYPE_5__* psz_server; struct TYPE_5__* psz_uri; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_0( VAR_2->psz_uri );
    FUNC_0( VAR_2->psz_server );
    FUNC_0( VAR_2->psz_location );
    FUNC_0( VAR_2->psz_name );
    FUNC_0( VAR_2->psz_user );
    FUNC_0( VAR_2->psz_password );
    FUNC_0( VAR_2->psz_mcast_ip );
    FUNC_0( VAR_1->p_sys );
    return;
}
