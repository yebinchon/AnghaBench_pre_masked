
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float vlc_tick_t ;
typedef size_t uint64_t ;
struct TYPE_13__ {int out; int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_14__ {float i_length; scalar_t__ i_preroll_start; size_t i_data_begin; TYPE_2__* p_fp; int p_root; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_15__ {size_t i_index_entry_time_interval; size_t i_index_entry_count; TYPE_1__* index_entry; } ;
typedef TYPE_5__ asf_object_index_t ;
struct TYPE_12__ {scalar_t__ i_preroll; size_t i_min_data_packet_size; } ;
struct TYPE_11__ {scalar_t__ i_packet_number; } ;


 TYPE_5__* FUNC_0 (int ,int *,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (float) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,char*,int,float) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_7 (int ,size_t) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_5, vlc_tick_t VAR_6, float VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_5->p_sys;
    asf_object_index_t *VAR_9;

    FUNC_5( VAR_5, "seek with index: %i seconds, position %f",
             VAR_6 >= 0 ? (int)FUNC_2(VAR_6) : -1, VAR_7 );

    if( VAR_6 < 0 )
        VAR_6 = VAR_8->i_length * VAR_7;

    VAR_8->i_preroll_start = VAR_6 - VAR_8->p_fp->i_preroll;
    if ( VAR_8->i_preroll_start < 0 ) VAR_8->i_preroll_start = 0;

    VAR_9 = FUNC_0( VAR_8->p_root, &VAR_4, 0 );

    uint64_t VAR_10 = FUNC_1(VAR_8->i_preroll_start) / VAR_9->i_index_entry_time_interval;
    if( VAR_10 >= VAR_9->i_index_entry_count )
    {
        FUNC_6( VAR_5, "Incomplete index" );
        return VAR_1;
    }

    FUNC_3( VAR_5 );

    uint64_t VAR_11 = (uint64_t)VAR_9->index_entry[VAR_10].i_packet_number *
                        VAR_8->p_fp->i_min_data_packet_size;

    if ( FUNC_7( VAR_5->s, VAR_11 + VAR_8->i_data_begin ) == VAR_2 )
    {
        FUNC_4( VAR_5->out, VAR_0, VAR_3 + VAR_6 );
        return VAR_2;
    }
    else return VAR_1;
}
