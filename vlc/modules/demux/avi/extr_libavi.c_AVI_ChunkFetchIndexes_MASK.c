
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_chunk_fourcc; TYPE_2__* p_father; union avi_chunk_u* p_next; union avi_chunk_u* p_first; } ;
union avi_chunk_u {TYPE_3__ common; } ;
typedef int uint64_t ;
typedef int stream_t ;
typedef union avi_chunk_u avi_chunk_t ;
struct TYPE_4__ {scalar_t__ i_chunk_size; scalar_t__ i_chunk_pos; } ;
struct TYPE_5__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,union avi_chunk_u*) ;
 int FUNC_1 (union avi_chunk_u*) ;
 union avi_chunk_u* FUNC_2 (union avi_chunk_u*,int ,int ,int) ;
 int FUNC_3 (int *,union avi_chunk_u*,union avi_chunk_u*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 union avi_chunk_u* FUNC_5 (int,int) ;
 int FUNC_6 (union avi_chunk_u*) ;
 int FUNC_7 (int *,int ,int*) ;
 scalar_t__ FUNC_8 (int *,int const) ;
 scalar_t__ FUNC_9 (int *) ;

int FUNC_10( stream_t *VAR_6, avi_chunk_t *VAR_7 )
{
    avi_chunk_t *VAR_8 = FUNC_2( VAR_7, VAR_2, 0, 1 );
    if ( !VAR_8 )
        return VAR_4;

    avi_chunk_t *VAR_9;
    const uint64_t VAR_10 = FUNC_1( VAR_8 );
    bool VAR_11 = 0;
    int VAR_12 = VAR_5;

    FUNC_7( VAR_6, VAR_3, &VAR_11 );
    if ( !VAR_11 || FUNC_8( VAR_6, VAR_10 ) )
        return VAR_4;

    union avi_chunk_u **VAR_13 = &VAR_7->common.p_first;
    for( ; ; )
    {
        VAR_9 = FUNC_5( 1, sizeof( avi_chunk_t ) );
        if( !VAR_9 )
        {
            VAR_12 = VAR_4;
            break;
        }

        VAR_12 = FUNC_3( VAR_6, VAR_9, VAR_7 );
        if( VAR_12 )
        {
            FUNC_0( VAR_6, VAR_9 );
            FUNC_6( VAR_9 );
            break;
        }

        *VAR_13 = VAR_9;
        while( *VAR_13 )
            VAR_13 = &((*VAR_13)->common.p_next);

        if( VAR_9->common.p_father->common.i_chunk_size > 0 &&
           ( FUNC_9( VAR_6 ) >
             VAR_9->common.p_father->common.i_chunk_pos +
             FUNC_4( VAR_9->common.p_father->common.i_chunk_size ) ) )
        {
            break;
        }


        if( VAR_9->common.i_chunk_fourcc == VAR_1 ||
            VAR_9->common.i_chunk_fourcc == VAR_0 )
        {
            break;
        }

    }

    return VAR_12;
}
