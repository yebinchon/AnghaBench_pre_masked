
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint64_t ;
struct TYPE_7__ {int live_current_time; TYPE_2__* chunks_head; TYPE_2__* chunks_livereadpos; int dl_cond; scalar_t__ afrt_timescale; scalar_t__ timescale; } ;
typedef TYPE_1__ hds_stream_t ;
struct TYPE_8__ {int timestamp; scalar_t__ mdat_pos; scalar_t__ mdat_len; struct TYPE_8__* next; scalar_t__ data; } ;
typedef TYPE_2__ chunk_t ;


 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
    vlc_object_t* VAR_0,
    hds_stream_t* VAR_1
    )
{
    if( ! VAR_1->chunks_head )
    {




        VAR_1->chunks_head = FUNC_1(
            VAR_0, 0, VAR_1 );
        VAR_1->chunks_livereadpos = VAR_1->chunks_head;
    }

    chunk_t* VAR_2 = VAR_1->chunks_head;
    bool VAR_3 = 0;
    while( VAR_2 && ( VAR_2->timestamp * ((uint64_t)VAR_1->timescale) )
           / ((uint64_t)VAR_1->afrt_timescale)
           <= VAR_1->live_current_time )
    {
        if( VAR_2->next )
        {
            VAR_2 = VAR_2->next;
        }
        else
        {
            VAR_2->next = FUNC_1( VAR_0, VAR_2, VAR_1 );
            VAR_2 = VAR_2->next;
            VAR_3 = 1;
        }
    }

    if( VAR_3 )
        FUNC_2( & VAR_1->dl_cond );

    VAR_2 = VAR_1->chunks_head;
    while( VAR_2 && VAR_2->data && VAR_2->mdat_pos >= VAR_2->mdat_len && VAR_2->next )
    {
        chunk_t* VAR_4 = VAR_2->next;
        FUNC_0( VAR_2 );
        VAR_2 = VAR_4;
    }

    if( ! VAR_1->chunks_livereadpos )
        VAR_1->chunks_livereadpos = VAR_1->chunks_head;

    VAR_1->chunks_head = VAR_2;
}
