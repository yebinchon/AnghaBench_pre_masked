
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ server_entry_count; scalar_t__ fragment_run_count; scalar_t__ segment_run_count; int * quality_segment_modifier; void** server_entries; void* movie_id; int live_current_time; void* timescale; } ;
typedef TYPE_1__ hds_stream_t ;
typedef int abst_len ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int*,char,int) ;
 scalar_t__ FUNC_3 (int*,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int* FUNC_6 (int *,TYPE_1__*,int*,int*) ;
 int* FUNC_7 (int *,TYPE_1__*,int*,int*) ;
 scalar_t__ FUNC_8 (void*) ;
 void* FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char*,int) ;

__attribute__((used)) static void FUNC_11( vlc_object_t* VAR_1,
                                 hds_stream_t * VAR_2,
                                 uint8_t* VAR_3,
                                 uint8_t* VAR_4 )
{
    uint8_t* VAR_5 = VAR_3;

    uint32_t VAR_6 = FUNC_0( VAR_5 );
    if( VAR_6 > VAR_4 - VAR_3
        || VAR_4 - VAR_3 < 29 )
    {
        FUNC_5( VAR_1, "Not enough bootstrap data" );
        return;
    }
    VAR_5 += sizeof(VAR_6);

    if( 0 != FUNC_3( VAR_5, "abst", 4 ) )
    {
        FUNC_5( VAR_1, "Cant find abst in bootstrap" );
        return;
    }
    VAR_5 += 4;


    VAR_5 += 4;


    VAR_5 += 4;




    VAR_5 += 1;


    VAR_2->timescale = FUNC_0( VAR_5 );
    VAR_5 += sizeof(VAR_2->timescale);

    VAR_2->live_current_time = FUNC_1( VAR_5 );
    VAR_5 += sizeof(VAR_2->live_current_time);


    VAR_5 += 8;

    VAR_2->movie_id = FUNC_9( (char*)VAR_5, VAR_4 - VAR_5 );
    VAR_5 += ( FUNC_8( VAR_2->movie_id ) + 1 );

    if( VAR_4 - VAR_5 < 4 ) {
        FUNC_5( VAR_1, "Not enough bootstrap after Movie Identifier" );
        return;
    }

    uint8_t VAR_7 = 0;
    VAR_7 = (uint8_t) *VAR_5;
    VAR_5++;

    VAR_2->server_entry_count = 0;
    while( VAR_7-- > 0 )
    {
        if( VAR_2->server_entry_count < VAR_0 )
        {
            VAR_2->server_entries[VAR_2->server_entry_count++] = FUNC_9( (char*)VAR_5,
                                                                  VAR_4 - VAR_5 );
            VAR_5 += FUNC_8( VAR_2->server_entries[VAR_2->server_entry_count-1] ) + 1;
        }
        else
        {
            FUNC_5( VAR_1, "Too many servers" );
            VAR_5 = FUNC_2( VAR_5, '\0', VAR_4 - VAR_5 );
            if( ! VAR_5 )
            {
                FUNC_4( VAR_1, "Couldn't find server entry" );
                return;
            }
            VAR_5++;
        }

        if( VAR_5 >= VAR_4 )
        {
            FUNC_5( VAR_1, "Premature end of bootstrap info while reading servers" );
            return;
        }
    }

    if( VAR_4 - VAR_5 < 3 ) {
        FUNC_5( VAR_1, "Not enough bootstrap after Servers" );
        return;
    }

    VAR_2->quality_segment_modifier = ((void*)0);

    uint8_t VAR_8 = *VAR_5;
    VAR_5++;

    if( VAR_8 > 1 )
    {
        FUNC_4( VAR_1, "I don't know what to do with multiple quality levels in the bootstrap - shouldn't this be handled at the manifest level?" );
        return;
    }

    VAR_2->quality_segment_modifier = ((void*)0);
    while( VAR_8-- > 0 )
    {
        if( VAR_2->quality_segment_modifier )
        {
            VAR_2->quality_segment_modifier = FUNC_9( (char*)VAR_5, VAR_4 - VAR_5 );
        }
        VAR_5 += FUNC_10( (char*)VAR_5, VAR_4 - VAR_5 ) + 1;
    }

    if( VAR_4 - VAR_5 < 2 ) {
        FUNC_5( VAR_1, "Not enough bootstrap after quality entries" );
        return;
    }


    VAR_5 = FUNC_2( VAR_5, '\0', VAR_4 - VAR_5 );
    if( ! VAR_5 )
    {
        FUNC_4( VAR_1, "Couldn't find DRM Data" );
        return;
    }
    VAR_5++;

    if( VAR_4 - VAR_5 < 2 ) {
        FUNC_5( VAR_1, "Not enough bootstrap after drm data" );
        return;
    }


    VAR_5 = FUNC_2( VAR_5, '\0', VAR_4 - VAR_5 );
    if( ! VAR_5 )
    {
        FUNC_4( VAR_1, "Couldn't find metadata");
        return;
    }
    VAR_5++;

    if( VAR_4 - VAR_5 < 2 ) {
        FUNC_5( VAR_1, "Not enough bootstrap after drm data" );
        return;
    }

    uint8_t VAR_9 = *VAR_5;
    VAR_5++;

    VAR_2->segment_run_count = 0;
    while( VAR_9-- > 0 &&
           VAR_4 > VAR_5 &&
           (VAR_5 = FUNC_7( VAR_1, VAR_2, VAR_5, VAR_4 )) );

    if( ! VAR_5 )
    {
        FUNC_5( VAR_1, "Couldn't find afrt data" );
        return;
    }

    uint8_t VAR_10 = *VAR_5;
    VAR_5++;

    VAR_2->fragment_run_count = 0;
    while( VAR_10-- > 0 &&
           VAR_4 > VAR_5 &&
           (VAR_5 = FUNC_6( VAR_1, VAR_2, VAR_5, VAR_4 )) );
}
