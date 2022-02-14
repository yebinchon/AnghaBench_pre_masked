
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint16_t ;
typedef scalar_t__ stime_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {int p_root; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_14__ {size_t i_reference_count; TYPE_1__* p_items; int i_timescale; scalar_t__ i_first_offset; } ;
struct TYPE_13__ {scalar_t__ i_type; scalar_t__ i_size; scalar_t__ i_pos; struct TYPE_13__* p_next; } ;
struct TYPE_10__ {scalar_t__ b_reference_type; scalar_t__ i_subsegment_duration; scalar_t__ i_referenced_size; } ;
typedef TYPE_4__ MP4_Box_t ;
typedef TYPE_5__ MP4_Box_data_sidx_t ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__ const*) ;
 TYPE_4__* FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_3, vlc_tick_t VAR_4,
                                   uint64_t *VAR_5, vlc_tick_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_3->p_sys;
    const MP4_Box_t *VAR_8 = FUNC_1( VAR_7->p_root, "sidx" );
    for( ; VAR_8 ; VAR_8 = VAR_8->p_next )
    {
        if( VAR_8->i_type != VAR_0 )
            continue;

        const MP4_Box_data_sidx_t *VAR_9 = FUNC_0(VAR_8);
        if( !VAR_9 || !VAR_9->i_timescale )
            break;

        stime_t VAR_10 = FUNC_3( VAR_4, VAR_9->i_timescale );


        uint64_t VAR_11 = VAR_9->i_first_offset + VAR_8->i_pos + VAR_8->i_size;
        stime_t VAR_12 = 0;
        for( uint16_t VAR_13=0; VAR_13<VAR_9->i_reference_count; VAR_13++ )
        {
            if(VAR_9->p_items[VAR_13].b_reference_type != 0)
                continue;
            if( VAR_12 + VAR_9->p_items[VAR_13].i_subsegment_duration > VAR_10 )
            {
                *VAR_6 = FUNC_2( VAR_12, VAR_9->i_timescale );
                *VAR_5 = VAR_11;
                return VAR_2;
            }
            VAR_11 += VAR_9->p_items[VAR_13].i_referenced_size;
            VAR_12 += VAR_9->p_items[VAR_13].i_subsegment_duration;
        }
    }
    return VAR_1;
}
