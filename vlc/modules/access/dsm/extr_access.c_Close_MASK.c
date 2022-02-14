
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {struct TYPE_5__* psz_fullpath; int url; scalar_t__ p_session; scalar_t__ i_fd; scalar_t__ p_ns; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_0 )
{
    stream_t *VAR_1 = (stream_t*)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_ns )
        FUNC_1( VAR_2->p_ns );
    if( VAR_2->i_fd )
        FUNC_2( VAR_2->p_session, VAR_2->i_fd );
    if( VAR_2->p_session )
        FUNC_3( VAR_2->p_session );
    FUNC_4( &VAR_2->url );
    FUNC_0( VAR_2->psz_fullpath );

    FUNC_0( VAR_2 );
}
