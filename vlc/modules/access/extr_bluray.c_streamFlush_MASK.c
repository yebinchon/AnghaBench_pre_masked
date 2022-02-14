
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int seq_end_pes ;
struct TYPE_10__ {int b_flushed; int p_parser; int pl_info_lock; TYPE_2__* p_clip_info; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;
typedef int bd_stream_type_e ;
struct TYPE_9__ {TYPE_1__* video_streams; } ;
struct TYPE_8__ {int coding_type; } ;







 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int*,int) ;

__attribute__((used)) static void FUNC_5( demux_sys_t *VAR_0 )
{
    if (VAR_0->b_flushed)
        return;

    block_t *VAR_1 = FUNC_0(192);
    if (!VAR_1)
        return;

    bd_stream_type_e VAR_2;


    FUNC_2(&VAR_0->pl_info_lock);
    if (VAR_0->p_clip_info != ((void*)0))
        VAR_2 = VAR_0->p_clip_info->video_streams[0].coding_type;
    else
        VAR_2 = 0;
    FUNC_3(&VAR_0->pl_info_lock);

    uint8_t VAR_3;
    switch( VAR_2 )
    {
        case 130:
        case 129:
        default:
            VAR_3 = 0xB7;
            break;
        case 128:
        case 131:
            VAR_3 = 0x0A;
            break;
        case 132:
            VAR_3 = 0x48;
            break;
    }

    uint8_t VAR_4[] = {
        0x00, 0x00, 0x01, 0xe0, 0x00, 0x07, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x01, VAR_3,
        0x00,
    };

    FUNC_4( VAR_1->p_buffer, 0x1011, VAR_4, sizeof(VAR_4) );

    FUNC_1(VAR_0->p_parser, VAR_1);
    VAR_0->b_flushed = 1;
}
