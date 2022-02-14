
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {scalar_t__ unsynced; } ;
typedef TYPE_1__ ogg_sync_state ;
typedef int ogg_stream_state ;
typedef int ogg_page ;
typedef scalar_t__ int64_t ;
struct TYPE_14__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_streams; scalar_t__ i_length; TYPE_11__** pp_stream; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_12__ {scalar_t__ i_serial_no; int b_contiguous; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_11__*,scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,void*,int) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (int ) ;

void FUNC_18( demux_t *VAR_5 )
{

    ogg_stream_state VAR_6;
    ogg_sync_state VAR_7;
    ogg_page VAR_8;
    demux_sys_t *VAR_9 = VAR_5->p_sys;
    int64_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int64_t VAR_15 = 0;
    int64_t VAR_16 = FUNC_17( VAR_5->s );
    int64_t VAR_17 = FUNC_14( VAR_5->s );
    unsigned int VAR_18 = VAR_1;
    FUNC_3( VAR_1 < VAR_2 );

    const char *VAR_19;

    FUNC_7( &VAR_6, -1 );
    FUNC_10( &VAR_7 );


    VAR_14 = FUNC_14( VAR_5->s ) - VAR_9->i_streams * VAR_0 * 2;
    VAR_14 = FUNC_2( 0, VAR_14 );

    VAR_10 = VAR_11 = FUNC_2( VAR_14, VAR_17 - VAR_18 );

    if ( FUNC_16( VAR_5->s, VAR_10 ) )
    {
        FUNC_9( &VAR_7 );
        FUNC_6( &VAR_6 );
        return;
    }

    while( VAR_10 >= VAR_14 )
    {

        while( VAR_10 < VAR_17 )
        {
            if ( VAR_7.unsynced )
                VAR_12 = FUNC_12( &VAR_7, &VAR_8 );

            VAR_19 = FUNC_8( &VAR_7, VAR_1 );
            if ( VAR_19 == ((void*)0) ) goto clean;
            VAR_12 = FUNC_15( VAR_5->s, (void*) VAR_19, VAR_1 );
            if ( VAR_12 < 1 ) goto clean;
            VAR_10 += VAR_12;
            FUNC_13( &VAR_7, VAR_12 );

            while( FUNC_11( &VAR_7, &VAR_8 ) == 1 )
            {
                VAR_13 = FUNC_4( &VAR_8 );
                if ( VAR_13 == -1 ) continue;

                for ( int VAR_20=0; VAR_20< VAR_9->i_streams; VAR_20++ )
                {
                    if ( VAR_9->pp_stream[VAR_20]->i_serial_no != FUNC_5( &VAR_8 ) )
                        continue;

                    VAR_15 = FUNC_0( VAR_9->pp_stream[VAR_20], VAR_13,
                                                  !VAR_9->pp_stream[VAR_20]->b_contiguous, 0 );
                    if( VAR_15 != VAR_4 )
                    {

                        VAR_9->i_length = FUNC_2( VAR_9->i_length, FUNC_1(VAR_15 - VAR_3) );
                        goto clean;
                    }
                    break;
                }
            }
        }


        if ( VAR_18 <= ( VAR_2 >> 1 ) )
        {
            VAR_18 <<= 1;
            VAR_11 = VAR_17 - VAR_18;
        }
        else
        {
            VAR_11 -= VAR_18;
        }
        VAR_10 = VAR_11;

        if ( FUNC_16( VAR_5->s, VAR_10 ) )
            break;
    }

clean:
    FUNC_16( VAR_5->s, VAR_16 );

    FUNC_9( &VAR_7 );
    FUNC_6( &VAR_6 );
}
