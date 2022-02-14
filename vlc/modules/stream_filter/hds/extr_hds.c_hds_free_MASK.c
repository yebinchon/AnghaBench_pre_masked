
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int server_entry_count; TYPE_2__* chunks_head; int * server_entries; int movie_id; int url; int metadata; int abst_url; int quality_segment_modifier; } ;
typedef TYPE_1__ hds_stream_t ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_2__ chunk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( hds_stream_t *VAR_0 )
{
    FUNC_0( VAR_0->quality_segment_modifier );

    FUNC_0( VAR_0->abst_url );

    FUNC_2( VAR_0 );

    FUNC_0( VAR_0->metadata );
    FUNC_0( VAR_0->url );
    FUNC_0( VAR_0->movie_id );
    for( int VAR_1 = 0; VAR_1 < VAR_0->server_entry_count; VAR_1++ )
    {
        FUNC_0( VAR_0->server_entries[VAR_1] );
    }

    chunk_t* VAR_2 = VAR_0->chunks_head;
    while( VAR_2 )
    {
        chunk_t* VAR_3 = VAR_2->next;
        FUNC_1( VAR_2 );
        VAR_2 = VAR_3;
    }

    FUNC_3( VAR_0 );
}
