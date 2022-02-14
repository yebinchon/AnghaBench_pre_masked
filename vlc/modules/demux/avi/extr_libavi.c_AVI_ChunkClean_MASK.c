
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_7__ {scalar_t__ i_chunk_fourcc; TYPE_2__* p_first; TYPE_2__* p_next; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
typedef TYPE_2__ avi_chunk_t ;
struct TYPE_9__ {int (* AVI_ChunkFree_function ) (TYPE_2__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5( stream_t *VAR_1,
                     avi_chunk_t *VAR_2 )
{
    int VAR_3;
    avi_chunk_t *VAR_4, *VAR_5;

    if( !VAR_2 )
    {
        return;
    }


    VAR_4 = VAR_2->common.p_first;
    while( VAR_4 )
    {
        VAR_5 = VAR_4->common.p_next;
        FUNC_5( VAR_1, VAR_4 );
        FUNC_1( VAR_4 );
        VAR_4 = VAR_5;
    }

    VAR_3 = FUNC_0( VAR_2->common.i_chunk_fourcc );
    if( VAR_0[VAR_3].AVI_ChunkFree_function )
    {




        VAR_0[VAR_3].AVI_ChunkFree_function( VAR_2);
    }
    else if( VAR_2->common.i_chunk_fourcc != 0 )
    {
        FUNC_3( (vlc_object_t*)VAR_1, "unknown chunk: %4.4s (not unloaded)",
                (char*)&VAR_2->common.i_chunk_fourcc );
    }
    VAR_2->common.p_first = ((void*)0);

    return;
}
