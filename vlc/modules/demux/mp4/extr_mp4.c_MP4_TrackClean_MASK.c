
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * p_array; } ;
struct TYPE_8__ {TYPE_2__ runs; } ;
struct TYPE_6__ {scalar_t__ p_frame; } ;
struct TYPE_9__ {unsigned int i_chunk_count; TYPE_3__ context; TYPE_1__ asfinfo; int * p_sample_size; int i_sample_size; int * chunk; scalar_t__ p_es; int fmt; } ;
typedef TYPE_4__ mp4_track_t ;
typedef int es_out_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( es_out_t *VAR_0, mp4_track_t *VAR_1 )
{
    FUNC_2( &VAR_1->fmt );

    if( VAR_1->p_es )
        FUNC_3( VAR_0, VAR_1->p_es );

    if( VAR_1->chunk )
    {
        for( unsigned int VAR_2 = 0; VAR_2 < VAR_1->i_chunk_count; VAR_2++ )
            FUNC_0( &VAR_1->chunk[VAR_2] );
    }
    FUNC_4( VAR_1->chunk );

    if( !VAR_1->i_sample_size )
        FUNC_4( VAR_1->p_sample_size );

    if ( VAR_1->asfinfo.p_frame )
        FUNC_1( VAR_1->asfinfo.p_frame );

    FUNC_4( VAR_1->context.runs.p_array );
}
