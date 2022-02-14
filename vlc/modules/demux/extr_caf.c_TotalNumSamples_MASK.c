
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_11__ {int i_num_valid_frames; int i_num_priming_frames; int i_num_remainder_frames; } ;
struct TYPE_9__ {int i_frame_length; } ;
struct TYPE_10__ {TYPE_1__ audio; } ;
struct TYPE_13__ {TYPE_3__ packet_table; TYPE_2__ fmt; } ;
typedef TYPE_5__ demux_sys_t ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static uint64_t FUNC_2( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;

    if( !FUNC_0( VAR_1 ))
    {
        return FUNC_1( VAR_0 ) * VAR_1->fmt.audio.i_frame_length;
    }
    else
    {
        return VAR_1->packet_table.i_num_valid_frames + VAR_1->packet_table.i_num_priming_frames +
                VAR_1->packet_table.i_num_remainder_frames;
    }
}
