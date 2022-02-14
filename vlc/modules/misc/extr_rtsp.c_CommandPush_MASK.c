
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vod_t ;
struct TYPE_13__ {int p_fifo_cmd; } ;
typedef TYPE_2__ vod_sys_t ;
struct TYPE_14__ {int id; } ;
typedef TYPE_3__ vod_media_t ;
typedef int rtsp_cmd_type_t ;
struct TYPE_15__ {double f_arg; void* psz_arg; int i_arg; void* psz_session; int i_media_id; TYPE_3__* p_media; int i_type; } ;
typedef TYPE_4__ rtsp_cmd_t ;
typedef int int64_t ;
typedef int cmd ;
struct TYPE_16__ {int p_buffer; } ;
typedef TYPE_5__ block_t ;


 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int ,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 void* FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5( vod_t *VAR_0, rtsp_cmd_type_t VAR_1, vod_media_t *VAR_2, const char *VAR_3, int64_t VAR_4,
                         double VAR_5, const char *VAR_6 )
{
    rtsp_cmd_t VAR_7;
    block_t *VAR_8;

    FUNC_3( &VAR_7, 0, sizeof(VAR_7) );
    VAR_7.i_type = VAR_1;
    VAR_7.p_media = VAR_2;
    if( VAR_2 )
        VAR_7.i_media_id = VAR_2->id;
    if( VAR_3 )
        VAR_7.psz_session = FUNC_4(VAR_3);
    VAR_7.i_arg = VAR_4;
    VAR_7.f_arg = VAR_5;
    if( VAR_6 )
        VAR_7.psz_arg = FUNC_4(VAR_6);

    VAR_8 = FUNC_0( sizeof(rtsp_cmd_t) );
    FUNC_2( VAR_8->p_buffer, &VAR_7, sizeof(VAR_7) );

    vod_sys_t *VAR_9 = VAR_0->p_sys;
    FUNC_1( VAR_9->p_fifo_cmd, VAR_8 );
}
