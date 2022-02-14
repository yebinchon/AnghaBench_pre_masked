
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_5__ {scalar_t__ i_current; } ;
struct TYPE_7__ {int i_demux_flags; TYPE_1__ chapters; int * p_packetized_data; scalar_t__ i_pts; scalar_t__ i_time_offset; scalar_t__ i_stream_offset; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2( demux_t *VAR_2, vlc_tick_t VAR_3, uint64_t VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;
    int VAR_6 = FUNC_1( VAR_2->s, VAR_5->i_stream_offset + VAR_4 );
    if( VAR_6 != VAR_1 )
        return VAR_6;
    VAR_5->i_time_offset = VAR_3 - VAR_5->i_pts;

    if( VAR_5->p_packetized_data )
        FUNC_0( VAR_5->p_packetized_data );
    VAR_5->p_packetized_data = ((void*)0);
    VAR_5->chapters.i_current = 0;
    VAR_5->i_demux_flags |= VAR_0;
    return VAR_1;
}
