
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ogg_packet ;
struct TYPE_10__ {scalar_t__ i_data_start; int os; } ;
typedef TYPE_1__ logical_stream_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int fill; scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ i_input_position; int b_page_waiting; int current_page; TYPE_6__ oy; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int64_t FUNC_9( demux_t *VAR_1,
                                int64_t VAR_2, int64_t VAR_3,
                                logical_stream_t *VAR_4,
                                int64_t *VAR_5 )
{
    int64_t VAR_6;
    *VAR_5 = -1;
    int64_t VAR_7 = VAR_3 - VAR_2 + 1;
    int64_t VAR_8;
    int64_t VAR_9;

    demux_sys_t *VAR_10 = VAR_1->p_sys;

    ogg_packet VAR_11;

    FUNC_7( VAR_1, VAR_2 );

    if ( VAR_2 == VAR_4->i_data_start )
        return VAR_10->i_input_position;

    if ( VAR_7 > VAR_0 ) VAR_7 = VAR_0;

    while ( 1 )
    {

        if ( VAR_10->i_input_position >= VAR_3 )
        {

            return -1;
        }


        if ( ! ( VAR_8 = FUNC_0( VAR_1, VAR_7 ) ) )
        {

            return -1;
        }

        VAR_7 = VAR_0;

        VAR_6 = FUNC_5( &VAR_10->oy, &VAR_10->current_page );

        if ( VAR_6 < 0 )
        {

            VAR_10->i_input_position -= VAR_6;
            VAR_2 = VAR_10->i_input_position;
            continue;
        }

        if ( VAR_6 > 0 || ( VAR_6 == 0 && VAR_10->oy.fill > 3 &&
                               ! FUNC_8( (char *)VAR_10->oy.data, "OggS" , 4 ) ) )
        {
            VAR_2 = VAR_10->i_input_position;
            break;
        }

        VAR_10->i_input_position += VAR_8;

    };

    FUNC_7( VAR_1, VAR_10->i_input_position );
    FUNC_4( &VAR_4->os );

    while( 1 )
    {

        if ( VAR_10->i_input_position >= VAR_3 )
        {

            return VAR_10->i_input_position;
        }

        VAR_10->b_page_waiting = 0;

        if ( ! ( VAR_6 = FUNC_6( VAR_1 ) ) )
        {

            return VAR_10->i_input_position;
        }


        if ( FUNC_3( &VAR_4->os, &VAR_10->current_page ) != 0 )
        {

            VAR_10->i_input_position += VAR_6;
            continue;
        }

        if ( FUNC_1( &VAR_10->current_page ) <= 0 )
        {


            VAR_10->i_input_position += VAR_6;
            continue;
        }

        VAR_9 = 0;

        while ( FUNC_2( &VAR_4->os, &VAR_11 ) > 0 )
        {
            VAR_9++;
        }

        if ( VAR_9 )
        {
            *VAR_5 = FUNC_1( &VAR_10->current_page );
            return VAR_2;
        }


        VAR_10->i_input_position += VAR_6;
        VAR_2 = VAR_10->i_input_position;
    }
}
