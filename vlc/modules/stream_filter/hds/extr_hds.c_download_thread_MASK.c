
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_14__ {TYPE_3__** pp_elems; } ;
struct TYPE_11__ {int chunk_count; int closed; TYPE_5__ hds_streams; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_12__ {int dl_lock; int dl_cond; TYPE_4__* chunks_downloadpos; TYPE_4__* chunks_head; } ;
typedef TYPE_3__ hds_stream_t ;
struct TYPE_13__ {scalar_t__ mdat_len; int data_len; int * data; struct TYPE_13__* next; int * mdat_data; int failed; } ;
typedef TYPE_4__ chunk_t ;


 int * FUNC_0 (TYPE_1__*,TYPE_2__*,TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int **) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void* FUNC_8( void* VAR_0 )
{
    vlc_object_t* VAR_1 = (vlc_object_t*)VAR_0;
    stream_t* VAR_2 = (stream_t*) VAR_1;
    stream_sys_t* VAR_3 = VAR_2->p_sys;

    if ( FUNC_2( &VAR_3->hds_streams ) == 0 )
        return ((void*)0);


    hds_stream_t* VAR_4 = VAR_3->hds_streams.pp_elems[0];

    int VAR_5 = FUNC_7();

    FUNC_4( & VAR_4->dl_lock );

    while( ! VAR_3->closed )
    {
        if( ! VAR_4->chunks_downloadpos )
        {
            chunk_t* VAR_6 = VAR_4->chunks_head;
            while(VAR_6 && VAR_6->data )
            {
                VAR_6 = VAR_6->next;
            }

            if( VAR_6 && ! VAR_6->data )
                VAR_4->chunks_downloadpos = VAR_6;
        }

        while( VAR_4->chunks_downloadpos )
        {
            chunk_t *VAR_7 = VAR_4->chunks_downloadpos;

            uint8_t *VAR_8 = FUNC_0( (stream_t*)VAR_1,
                                            VAR_3,
                                            VAR_4,
                                            VAR_7 );

            if( ! VAR_7->failed )
            {
                VAR_7->mdat_len =
                    FUNC_1( VAR_1,
                                     VAR_8,
                                     VAR_8 + VAR_7->data_len,
                                     & VAR_7->mdat_data );
                if( VAR_7->mdat_len == 0 ) {
                    VAR_7->mdat_len = VAR_7->data_len - (VAR_7->mdat_data - VAR_8);
                }
                VAR_4->chunks_downloadpos = VAR_7->next;
                VAR_7->data = VAR_8;

                VAR_3->chunk_count++;
            }
        }

        FUNC_3( & VAR_4->dl_cond,
                       & VAR_4->dl_lock );
    }

    FUNC_5( & VAR_4->dl_lock );

    FUNC_6( VAR_5 );
    return ((void*)0);
}
