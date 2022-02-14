
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {scalar_t__ i_type; } ;
struct TYPE_3__ {int i_chunk_size; scalar_t__ i_chunk_fourcc; union avi_chunk_u* p_next; union avi_chunk_u* p_first; } ;
union avi_chunk_u {TYPE_2__ list; TYPE_1__ common; } ;
typedef int uint8_t ;
typedef int stream_t ;
typedef union avi_chunk_u avi_chunk_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,union avi_chunk_u*) ;
 scalar_t__ FUNC_1 (union avi_chunk_u*) ;
 int FUNC_2 (int *,union avi_chunk_u*,union avi_chunk_u*) ;
 int FUNC_3 (int *,union avi_chunk_u*) ;
 int FUNC_4 (int *,union avi_chunk_u*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 union avi_chunk_u* FUNC_6 (int,int) ;
 int FUNC_7 (union avi_chunk_u*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ,int*) ;
 int FUNC_11 (int *,int const**,int) ;
 int FUNC_12 (int *,int *,int) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14( stream_t *VAR_11, avi_chunk_t *VAR_12 )
{
    avi_chunk_t *VAR_13;
    const uint8_t *VAR_14;
    bool VAR_15;
    int VAR_16 = VAR_10;

    if( VAR_12->common.i_chunk_size > 0 && VAR_12->common.i_chunk_size < 4 )
    {

        FUNC_9( (vlc_object_t*)VAR_11, "empty list chunk" );
        return VAR_9;
    }
    if( FUNC_11( VAR_11, &VAR_14, 12 ) < 12 )
    {
        FUNC_9( (vlc_object_t*)VAR_11, "cannot peek while reading list chunk" );
        return VAR_9;
    }

    FUNC_10( VAR_11, VAR_8, &VAR_15 );

    VAR_12->list.i_type = FUNC_5( VAR_14 + 8 );


    if( VAR_12->common.i_chunk_fourcc == VAR_2 && VAR_12->list.i_type == VAR_3 )
    {
        VAR_12->common.i_chunk_fourcc = VAR_4;
        VAR_12->list.i_type = VAR_0;
    }

    if( VAR_12->common.i_chunk_fourcc == VAR_1 &&
        VAR_12->list.i_type == VAR_5 )
    {
        if( !VAR_15 )
            return VAR_10;
        FUNC_8( (vlc_object_t*)VAR_11, "skipping movi chunk" );
        return FUNC_4( VAR_11, VAR_12 );
    }

    if( FUNC_12( VAR_11, ((void*)0), 12 ) != 12 )
    {
        FUNC_9( (vlc_object_t*)VAR_11, "cannot enter chunk" );
        return VAR_9;
    }






    FUNC_8( (vlc_object_t*)VAR_11, "<list \'%4.4s\'>", (char*)&VAR_12->list.i_type );

    union avi_chunk_u **VAR_17 = &VAR_12->common.p_first;
    for( ; ; )
    {
        VAR_13 = FUNC_6( 1, sizeof( avi_chunk_t ) );
        if( !VAR_13 )
            return VAR_9;

        VAR_16 = FUNC_2( VAR_11, VAR_13, VAR_12 );
        if( VAR_16 )
        {
            FUNC_0( VAR_11, VAR_13 );
            FUNC_7( VAR_13 );
            VAR_13 = ((void*)0);
            if( VAR_16 != VAR_6 )
                break;
        }

        if( VAR_13 )
        {
            *VAR_17 = VAR_13;
            while( *VAR_17 )
                VAR_17 = &((*VAR_17)->common.p_next);
        }

        if( VAR_12->common.i_chunk_size > 0 &&
            FUNC_13( VAR_11 ) >= FUNC_1( VAR_12 ) )
        {
            break;
        }


        if( VAR_13 &&
            VAR_13->common.i_chunk_fourcc == VAR_1 &&
            VAR_13->list.i_type == VAR_5 &&
            ( !VAR_15 || VAR_13->common.i_chunk_size == 0 ) )
        {
            break;
        }

    }
    FUNC_8( (vlc_object_t*)VAR_11, "</list \'%4.4s\'>%x", (char*)&VAR_12->list.i_type, VAR_16 );

    if( VAR_16 == VAR_7 || VAR_16 == VAR_6 )
        return FUNC_3( VAR_11, VAR_12 );

    return VAR_10;
}
