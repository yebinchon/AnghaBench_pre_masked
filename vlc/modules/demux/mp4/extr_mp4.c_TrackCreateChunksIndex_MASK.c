
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int i_chunk_count; scalar_t__ i_sample_count; int i_track_ID; TYPE_2__* chunk; int p_stbl; } ;
typedef TYPE_1__ mp4_track_t ;
struct TYPE_7__ {scalar_t__ i_sample_count; scalar_t__ i_sample_first; int i_sample_description_index; int * p_sample_offset_pts; int * p_sample_count_pts; scalar_t__ i_entries_pts; int * p_sample_delta_dts; int * p_sample_count_dts; scalar_t__ i_entries_dts; scalar_t__ i_first_dts; int i_offset; } ;
typedef TYPE_2__ mp4_chunk_t ;
typedef int demux_t ;
struct TYPE_8__ {unsigned int i_entry_count; int* i_first_chunk; scalar_t__* i_samples_per_chunk; int * i_sample_description_index; int * i_chunk_offset; } ;
typedef int MP4_Box_t ;


 TYPE_5__* FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int *,char*,int ,unsigned int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_4,
                                   mp4_track_t *VAR_5 )
{
    MP4_Box_t *VAR_6;
    MP4_Box_t *VAR_7;

    unsigned int VAR_8;
    unsigned int VAR_9, VAR_10;

    if( ( !(VAR_6 = FUNC_1( VAR_5->p_stbl, "stco" ) )&&
          !(VAR_6 = FUNC_1( VAR_5->p_stbl, "co64" ) ) )||
        ( !(VAR_7 = FUNC_1( VAR_5->p_stbl, "stsc" ) ) ))
    {
        return( VAR_1 );
    }

    VAR_5->i_chunk_count = FUNC_0(VAR_6)->i_entry_count;
    if( !VAR_5->i_chunk_count )
    {
        FUNC_5( VAR_4, "no chunk defined" );
    }
    VAR_5->chunk = FUNC_2( VAR_5->i_chunk_count,
                                   sizeof( mp4_chunk_t ) );
    if( VAR_5->chunk == ((void*)0) )
    {
        return VAR_2;
    }


    for( VAR_8 = 0; VAR_8 < VAR_5->i_chunk_count; VAR_8++ )
    {
        mp4_chunk_t *VAR_11 = &VAR_5->chunk[VAR_8];

        VAR_11->i_offset = FUNC_0(VAR_6)->i_chunk_offset[VAR_8];

        VAR_11->i_first_dts = 0;
        VAR_11->i_entries_dts = 0;
        VAR_11->p_sample_count_dts = ((void*)0);
        VAR_11->p_sample_delta_dts = ((void*)0);
        VAR_11->i_entries_pts = 0;
        VAR_11->p_sample_count_pts = ((void*)0);
        VAR_11->p_sample_offset_pts = ((void*)0);
    }




    VAR_10 = VAR_5->i_chunk_count;
    VAR_9 = FUNC_0(VAR_7)->i_entry_count;

    while( VAR_9-- > 0 )
    {
        for( VAR_8 = FUNC_0(VAR_7)->i_first_chunk[VAR_9] - 1;
             VAR_8 < VAR_10; VAR_8++ )
        {
            if( VAR_8 >= VAR_5->i_chunk_count )
            {
                FUNC_5( VAR_4, "corrupted chunk table" );
                return VAR_1;
            }

            VAR_5->chunk[VAR_8].i_sample_description_index =
                    FUNC_0(VAR_7)->i_sample_description_index[VAR_9];
            VAR_5->chunk[VAR_8].i_sample_count =
                    FUNC_0(VAR_7)->i_samples_per_chunk[VAR_9];
        }
        VAR_10 = FUNC_0(VAR_7)->i_first_chunk[VAR_9] - 1;
    }

    VAR_5->i_sample_count = 0;
    bool VAR_12 = 0;
    if ( VAR_5->i_chunk_count )
    {
        VAR_5->chunk[0].i_sample_first = 0;
        VAR_5->i_sample_count += VAR_5->chunk[0].i_sample_count;

        const mp4_chunk_t *VAR_13 = &VAR_5->chunk[0];
        for( VAR_8 = 1; VAR_8 < VAR_5->i_chunk_count; VAR_8++ )
        {
            mp4_chunk_t *VAR_14 = &VAR_5->chunk[VAR_8];
            if( FUNC_6(VAR_0 - VAR_14->i_sample_count < VAR_5->i_sample_count) )
            {
                VAR_12 = 1;
                break;
            }
            VAR_5->i_sample_count += VAR_14->i_sample_count;
            VAR_14->i_sample_first = VAR_13->i_sample_first + VAR_13->i_sample_count;
            VAR_13 = VAR_14;
        }
    }

    if( FUNC_6(VAR_12) )
    {
        FUNC_4( VAR_4, "Overflow in chunks total samples count" );
        return VAR_1;
    }

    FUNC_3( VAR_4, "track[Id 0x%x] read %d chunk",
             VAR_5->i_track_ID, VAR_5->i_chunk_count );

    return VAR_3;
}
