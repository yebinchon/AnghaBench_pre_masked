
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int lock_sdp; scalar_t__* psz_sdp; } ;
typedef TYPE_1__ sout_stream_sys_t ;
typedef int httpd_file_t ;
typedef int httpd_file_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( httpd_file_sys_t *VAR_1,
                          httpd_file_t *VAR_2, uint8_t *VAR_3,
                          uint8_t **VAR_4, int *VAR_5 )
{
    FUNC_0(VAR_2); FUNC_0(VAR_3);
    sout_stream_sys_t *VAR_6 = (sout_stream_sys_t*)VAR_1;

    FUNC_4( &VAR_6->lock_sdp );
    if( VAR_6->psz_sdp && *VAR_6->psz_sdp )
    {
        *VAR_5 = FUNC_3( VAR_6->psz_sdp );
        *VAR_4 = FUNC_1( *VAR_5 );
        FUNC_2( *VAR_4, VAR_6->psz_sdp, *VAR_5 );
    }
    else
    {
        *VAR_4 = ((void*)0);
        *VAR_5 = 0;
    }
    FUNC_5( &VAR_6->lock_sdp );

    return VAR_0;
}
