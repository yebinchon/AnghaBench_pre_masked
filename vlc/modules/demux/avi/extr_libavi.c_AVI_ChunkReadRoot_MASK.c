
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {scalar_t__ i_type; } ;
struct TYPE_8__ {scalar_t__ i_chunk_fourcc; TYPE_2__* p_father; union avi_chunk_u* p_next; union avi_chunk_u* p_first; } ;
union avi_chunk_u {TYPE_4__ list; TYPE_3__ common; } ;
typedef int stream_t ;
typedef union avi_chunk_u avi_chunk_t ;
struct TYPE_10__ {int i_chunk_size; int i_type; int * p_first; int * p_next; int * p_father; int i_chunk_fourcc; scalar_t__ i_chunk_pos; } ;
typedef TYPE_5__ avi_chunk_list_t ;
struct TYPE_6__ {scalar_t__ i_chunk_pos; int i_chunk_size; } ;
struct TYPE_7__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,union avi_chunk_u*) ;
 int FUNC_1 (int *,union avi_chunk_u*,int ) ;
 scalar_t__ FUNC_2 (int *,union avi_chunk_u*,union avi_chunk_u*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char,char,char,char) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 union avi_chunk_u* FUNC_5 (int,int) ;
 int FUNC_6 (union avi_chunk_u*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int*) ;
 scalar_t__ FUNC_9 (int *) ;

int FUNC_10( stream_t *VAR_7, avi_chunk_t *VAR_8 )
{
    avi_chunk_list_t *VAR_9 = (avi_chunk_list_t*)VAR_8;
    avi_chunk_t *VAR_10;
    bool VAR_11;

    FUNC_8( VAR_7, VAR_3, &VAR_11 );

    VAR_9->i_chunk_pos = 0;
    VAR_9->i_chunk_size = ((VAR_4 - 12) >> 1) << 1;
    VAR_9->i_chunk_fourcc = VAR_1;
    VAR_9->p_father = ((void*)0);
    VAR_9->p_next = ((void*)0);
    VAR_9->p_first = ((void*)0);

    VAR_9->i_type = FUNC_3( 'r', 'o', 'o', 't' );

    union avi_chunk_u **VAR_12 = &VAR_8->common.p_first;
    for( ; ; )
    {
        VAR_10 = FUNC_5( 1, sizeof( avi_chunk_t ) );
        if( !VAR_10 )
            return VAR_5;

        if( FUNC_2( VAR_7, VAR_10, VAR_8 ) != VAR_6 )
        {
            FUNC_0( VAR_7, VAR_10 );
            FUNC_6( VAR_10 );
            break;
        }

        *VAR_12 = VAR_10;
        while( *VAR_12 )
            VAR_12 = &((*VAR_12)->common.p_next);

        if( FUNC_9( VAR_7 ) >=
                 VAR_10->common.p_father->common.i_chunk_pos +
                 FUNC_4( VAR_10->common.p_father->common.i_chunk_size ) )
        {
            break;
        }


        if( VAR_10->common.i_chunk_fourcc == VAR_2 &&
            VAR_10->list.i_type == VAR_0 && !VAR_11 )
        {
            break;
        }
    }

    VAR_9->i_chunk_size = FUNC_7( VAR_7 );

    FUNC_1( (vlc_object_t*)VAR_7, VAR_8, 0 );
    return VAR_6;
}
