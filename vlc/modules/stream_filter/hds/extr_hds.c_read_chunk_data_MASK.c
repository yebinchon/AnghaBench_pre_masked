
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {scalar_t__ live; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_11__ {int afrt_timescale; int download_leadtime; int dl_cond; TYPE_4__* chunks_head; TYPE_4__* chunks_livereadpos; } ;
typedef TYPE_3__ hds_stream_t ;
struct TYPE_12__ {scalar_t__ mdat_pos; scalar_t__ mdat_len; unsigned int mdat_data; int duration; struct TYPE_12__* next; scalar_t__ eof; scalar_t__ failed; scalar_t__ data; } ;
typedef TYPE_4__ chunk_t ;


 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned FUNC_4(
    vlc_object_t* VAR_0,
    uint8_t* VAR_1, unsigned VAR_2,
    hds_stream_t* VAR_3 )
{
    stream_t* VAR_4 = (stream_t*) VAR_0;
    stream_sys_t* VAR_5 = VAR_4->p_sys;
    chunk_t* VAR_6 = VAR_3->chunks_head;
    uint8_t* VAR_7 = VAR_1;
    bool VAR_8 = 0;

    if( VAR_6 && VAR_6->eof && VAR_6->mdat_pos >= VAR_6->mdat_len )
        return 0;

    while( VAR_6 && VAR_6->data && VAR_2 > 0 && ! (VAR_6->eof && VAR_6->mdat_pos >= VAR_6->mdat_len ) )
    {



        chunk_t* VAR_9 = VAR_6->next;

        if( VAR_6->mdat_pos < VAR_6->mdat_len )
        {
            unsigned VAR_10 = VAR_6->mdat_len - VAR_6->mdat_pos;
            if( VAR_10 > VAR_2 )
                VAR_10 = VAR_2;
            FUNC_2( VAR_1, VAR_6->mdat_data + VAR_6->mdat_pos,
                    VAR_10 );

            VAR_2 -= VAR_10;
            VAR_1 += VAR_10;
            VAR_6->mdat_pos += VAR_10;
        }

        if( ! VAR_5->live && (VAR_6->mdat_pos >= VAR_6->mdat_len || VAR_6->failed) )
        {

            if( ! VAR_6->next && ! VAR_6->eof )
            {
                VAR_6->next = FUNC_1( VAR_0, VAR_6, VAR_3 );
                VAR_8 = 1;
            }

            if( ! VAR_6->eof )
            {
                FUNC_0( VAR_6 );
                VAR_6 = VAR_9;
                VAR_3->chunks_head = VAR_6;
            }
        }
        else if( VAR_5->live && (VAR_6->mdat_pos >= VAR_6->mdat_len || VAR_6->failed) )
        {
            VAR_6 = VAR_9;
        }
    }

    if( VAR_5->live )
    {
        VAR_3->chunks_livereadpos = VAR_6;
    }


    if( ! VAR_5->live )
    {
        VAR_6 = VAR_3->chunks_head;
        if( VAR_6 )
        {
            uint64_t VAR_11 = VAR_6->duration;
            while( VAR_6 && VAR_11/VAR_3->afrt_timescale < VAR_3->download_leadtime && ! VAR_6->eof )
            {
                if( ! VAR_6->next && ! VAR_6->eof )
                {
                    VAR_6->next = FUNC_1( VAR_0, VAR_6, VAR_3 );
                    VAR_8 = 1;
                }

                if( ! VAR_6->eof )
                {
                    VAR_6 = VAR_6->next;
                    if( VAR_6 )
                    {
                        VAR_11 += VAR_6->duration;
                    }
                }
            }
        }

        if( VAR_8 )
            FUNC_3( & VAR_3->dl_cond );
    }

    return ( ((uint8_t*)VAR_1) - ((uint8_t*)VAR_7));
}
