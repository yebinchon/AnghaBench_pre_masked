
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int psz_base_url; scalar_t__ sftp_session; scalar_t__ file; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4( vlc_object_t* VAR_0 )
{
    stream_t* VAR_1 = (stream_t*)VAR_0;
    access_sys_t* VAR_2 = VAR_1->p_sys;

    if( VAR_2->file )
        FUNC_2( VAR_2->file );
    if( VAR_2->sftp_session )
        FUNC_3( VAR_2->sftp_session );
    FUNC_0( VAR_1 );

    FUNC_1( VAR_2->psz_base_url );
}
