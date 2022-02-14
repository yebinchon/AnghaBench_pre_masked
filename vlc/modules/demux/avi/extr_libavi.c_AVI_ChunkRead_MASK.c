
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_11__ {scalar_t__ i_chunk_fourcc; TYPE_2__* p_father; } ;
struct TYPE_12__ {TYPE_1__ common; } ;
typedef TYPE_2__ avi_chunk_t ;
struct TYPE_13__ {int (* AVI_ChunkRead_function ) (int *,TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_5__* VAR_1 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,TYPE_2__*) ;

int FUNC_7( stream_t *VAR_4, avi_chunk_t *VAR_5, avi_chunk_t *VAR_6 )
{
    int VAR_7;

    if( !VAR_5 )
    {
        FUNC_5( (vlc_object_t*)VAR_4, "cannot read null chunk" );
        return VAR_3;
    }

    if( FUNC_1( VAR_4, VAR_5, VAR_6 ) )
        return VAR_3;

    if( VAR_5->common.i_chunk_fourcc == FUNC_4( 0, 0, 0, 0 ) )
    {
        FUNC_5( (vlc_object_t*)VAR_4, "found null fourcc chunk (corrupted file?)" );
        return VAR_2;
    }
    VAR_5->common.p_father = VAR_6;

    VAR_7 = FUNC_0( VAR_5->common.i_chunk_fourcc );
    if( VAR_1[VAR_7].AVI_ChunkRead_function )
    {
        return VAR_1[VAR_7].AVI_ChunkRead_function( VAR_4, VAR_5 );
    }
    else if( ( ((char*)&VAR_5->common.i_chunk_fourcc)[0] == 'i' &&
               ((char*)&VAR_5->common.i_chunk_fourcc)[1] == 'x' ) ||
             ( ((char*)&VAR_5->common.i_chunk_fourcc)[2] == 'i' &&
               ((char*)&VAR_5->common.i_chunk_fourcc)[3] == 'x' ) )
    {
        VAR_5->common.i_chunk_fourcc = VAR_0;
        return FUNC_2( VAR_4, VAR_5 );
    }

    FUNC_5( (vlc_object_t*)VAR_4, "unknown chunk: %4.4s (not loaded)",
            (char*)&VAR_5->common.i_chunk_fourcc );
    return FUNC_3( VAR_4, VAR_5 );
}
