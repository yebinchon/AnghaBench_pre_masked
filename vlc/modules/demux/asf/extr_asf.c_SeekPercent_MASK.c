
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_8__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {TYPE_1__* p_fp; int i_bitrate; int i_data_end; int i_data_begin; int i_wait_keyframe; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_7__ {int i_min_data_packet_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2, int VAR_3, va_list VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;

    FUNC_0( VAR_2 );

    FUNC_3( VAR_2, "seek with percent: waiting %i frames", VAR_5->i_wait_keyframe );
    return FUNC_2( VAR_2->s, FUNC_1( VAR_1, VAR_5->i_data_begin ),
                                   FUNC_1( VAR_1, VAR_5->i_data_end ),
                                   FUNC_1( VAR_1, VAR_5->i_bitrate ),
                                   FUNC_1( VAR_0, VAR_5->p_fp->i_min_data_packet_size ),
                                   VAR_3, VAR_4 );
}
