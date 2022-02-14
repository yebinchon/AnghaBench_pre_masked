
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int i_sample_count; size_t i_chunk_count; int i_timescale; TYPE_2__ const* chunk; int i_track_ID; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_9__ {unsigned int i_sample_description_index; int i_duration; scalar_t__ i_sample_count; } ;
typedef TYPE_2__ const mp4_chunk_t ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_11__ {int * p_root; } ;
typedef TYPE_4__ demux_sys_t ;
struct TYPE_12__ {scalar_t__ i_duration; scalar_t__ i_timescale; } ;
typedef int MP4_Box_t ;


 TYPE_7__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int*,unsigned int*,int,int,int ) ;

__attribute__((used)) static void FUNC_4( demux_t *VAR_1,
                                  unsigned *VAR_2, unsigned *VAR_3,
                                  const mp4_track_t *VAR_4,
                                  unsigned VAR_5,
                                  unsigned VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_1->p_sys;
    *VAR_2 = 0;
    *VAR_3 = 0;

    MP4_Box_t *VAR_8 = FUNC_2( FUNC_1( VAR_7->p_root,
                                                          "/moov" ),
                                              VAR_4->i_track_ID );
    MP4_Box_t *VAR_9 = FUNC_1( VAR_8, "mdia/mdhd" );
    if ( VAR_9 && FUNC_0(VAR_9) )
    {
        FUNC_3( VAR_2, VAR_3,
                     (uint64_t) FUNC_0(VAR_9)->i_timescale * VAR_4->i_sample_count,
                     (uint64_t) FUNC_0(VAR_9)->i_duration,
                     VAR_0 );
        return;
    }

    if( VAR_4->i_chunk_count == 0 )
        return;


    const mp4_chunk_t *VAR_10 = &VAR_4->chunk[VAR_6];
    while( VAR_10 > &VAR_4->chunk[0] &&
           VAR_10[-1].i_sample_description_index == VAR_5 )
    {
        VAR_10--;
    }

    uint64_t VAR_11 = 0;
    uint64_t VAR_12 = 0;
    do
    {
        VAR_11 += VAR_10->i_sample_count;
        VAR_12 += VAR_10->i_duration;
        VAR_10++;
    }
    while( VAR_10 < &VAR_4->chunk[VAR_4->i_chunk_count] &&
           VAR_10->i_sample_description_index == VAR_5 );

    if( VAR_11 > 0 && VAR_12 )
        FUNC_3( VAR_2, VAR_3,
                     VAR_11 * VAR_4->i_timescale,
                     VAR_12,
                     VAR_0);
}
