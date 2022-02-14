
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct block_extension_t {int dummy; } ;
struct TYPE_10__ {int i_frame_rate; int i_frame_rate_base; int i_width; int i_visible_width; int i_height; int i_visible_height; int i_sar_num; int i_sar_den; } ;
struct TYPE_11__ {TYPE_1__ video; int i_id; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_12__ {int out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_13__ {int i_standard; int i_frame_rate; int i_frame_rate_base; int i_width; int i_height; int i_aspect; int i_vblock_size; int p_es_video; int i_id_video; int i_incr; int i_next_vdate; } ;
typedef TYPE_4__ demux_sys_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_6->p_sys;
    es_format_t VAR_8;

    FUNC_2( VAR_6, "found standard %d", VAR_7->i_standard );
    switch ( VAR_7->i_standard )
    {
    case 135:

        VAR_7->i_frame_rate = 25;
        VAR_7->i_frame_rate_base = 1;
        VAR_7->i_width = 720;
        VAR_7->i_height = 576;
        VAR_7->i_aspect = 4 * VAR_5 / 3;
        break;

    case 129:
        VAR_7->i_frame_rate = 50;
        VAR_7->i_frame_rate_base = 1;
        VAR_7->i_width = 1280;
        VAR_7->i_height = 720;
        VAR_7->i_aspect = 16 * VAR_5 / 9;
        break;

    case 128:
        VAR_7->i_frame_rate = 60;
        VAR_7->i_frame_rate_base = 1;
        VAR_7->i_width = 1280;
        VAR_7->i_height = 720;
        VAR_7->i_aspect = 16 * VAR_5 / 9;
        break;

    case 130:
    case 134:
    case 131:

        VAR_7->i_frame_rate = 25;
        VAR_7->i_frame_rate_base = 1;
        VAR_7->i_width = 1920;
        VAR_7->i_height = 1080;
        VAR_7->i_aspect = 16 * VAR_5 / 9;
        break;

    case 133:
        VAR_7->i_frame_rate = 30000;
        VAR_7->i_frame_rate_base = 1001;
        VAR_7->i_width = 1920;
        VAR_7->i_height = 1080;
        VAR_7->i_aspect = 16 * VAR_5 / 9;
        break;

    case 132:
        VAR_7->i_frame_rate = 30;
        VAR_7->i_frame_rate_base = 1;
        VAR_7->i_width = 1920;
        VAR_7->i_height = 1080;
        VAR_7->i_aspect = 16 * VAR_5 / 9;
        break;

    default:
        FUNC_3( VAR_6, "unsupported standard %d", VAR_7->i_standard );
        return VAR_3;
    }

    VAR_7->i_next_vdate = VAR_0;
    VAR_7->i_incr = FUNC_4(VAR_7->i_frame_rate_base, VAR_7->i_frame_rate);
    VAR_7->i_vblock_size = VAR_7->i_width * VAR_7->i_height * 3 / 2
                            + sizeof(struct block_extension_t);


    FUNC_0( &VAR_8, VAR_1, VAR_2 );
    VAR_8.i_id = VAR_7->i_id_video;
    VAR_8.video.i_frame_rate = VAR_7->i_frame_rate;
    VAR_8.video.i_frame_rate_base = VAR_7->i_frame_rate_base;
    VAR_8.video.i_width = VAR_8.video.i_visible_width = VAR_7->i_width;
    VAR_8.video.i_height = VAR_8.video.i_visible_height = VAR_7->i_height;
    VAR_8.video.i_sar_num = VAR_7->i_aspect * VAR_8.video.i_height
                                  / VAR_8.video.i_width;
    VAR_8.video.i_sar_den = VAR_5;
    VAR_7->p_es_video = FUNC_1( VAR_6->out, &VAR_8 );

    return VAR_4;
}
