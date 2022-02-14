
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_10__ {int p_fifo_cmd; } ;
typedef TYPE_2__ vod_sys_t ;
typedef int vod_media_t ;
typedef int rtsp_cmd_type_t ;
struct TYPE_11__ {int * psz_arg; int * p_media; int i_type; } ;
typedef TYPE_3__ rtsp_cmd_t ;
typedef int cmd ;
struct TYPE_12__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_3__*,int) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4( vod_t *VAR_0, rtsp_cmd_type_t VAR_1,
                         vod_media_t *VAR_2, const char *VAR_3 )
{
    rtsp_cmd_t VAR_4;
    block_t *VAR_5;

    VAR_4.i_type = VAR_1;
    VAR_4.p_media = VAR_2;
    if( VAR_3 )
        VAR_4.psz_arg = FUNC_3(VAR_3);
    else
        VAR_4.psz_arg = ((void*)0);

    VAR_5 = FUNC_0( sizeof(rtsp_cmd_t) );
    FUNC_2( VAR_5->p_buffer, &VAR_4, sizeof(VAR_4) );

    vod_sys_t *VAR_6 = VAR_0->p_sys;
    FUNC_1( VAR_6->p_fifo_cmd, VAR_5 );
}
