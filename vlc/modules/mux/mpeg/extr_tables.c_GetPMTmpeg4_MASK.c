
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_14__ {TYPE_3__* fmt; TYPE_2__* ts; TYPE_1__* pes; } ;
typedef TYPE_4__ pes_mapped_stream_t ;
typedef int dvbpsi_pmt_t ;
struct TYPE_15__ {int i_data; int p_data; } ;
typedef TYPE_5__ bits_buffer_t ;
struct TYPE_13__ {scalar_t__ i_codec; scalar_t__ i_extra; scalar_t__ p_extra; } ;
struct TYPE_12__ {int i_stream_type; } ;
struct TYPE_11__ {int i_stream_id; int i_es_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int,int*) ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (int *,int,int,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_1, dvbpsi_pmt_t *VAR_2,
                         unsigned VAR_3, const pes_mapped_stream_t *VAR_4 )
{
    uint8_t VAR_5[4096];
    bits_buffer_t VAR_6, VAR_7;




    FUNC_6( VAR_5, 0, 4096 );

    FUNC_3( &VAR_6, 4096, VAR_5 );

    FUNC_4( &VAR_6, 8, 0x11 );

    FUNC_4( &VAR_6, 8, 0x01 );

    FUNC_2( &VAR_6 );
    FUNC_4( &VAR_6, 8, 0x02 );
    VAR_7 = VAR_6;
    FUNC_4( &VAR_6, 24,
        FUNC_0( 0 ) );
    FUNC_4( &VAR_6, 10, 0x01 );
    FUNC_4( &VAR_6, 1, 0x00 );
    FUNC_4( &VAR_6, 1, 0x00 );
    FUNC_4( &VAR_6, 4, 0x0f );
    FUNC_4( &VAR_6, 8, 0xff );
    FUNC_4( &VAR_6, 8, 0xff );
    FUNC_4( &VAR_6, 8, 0xfe );
    FUNC_4( &VAR_6, 8, 0xfe );
    FUNC_4( &VAR_6, 8, 0xff );
    for (unsigned VAR_8 = 0; VAR_8 < VAR_3; VAR_8++ )
    {
        const pes_mapped_stream_t *VAR_9 = &VAR_4[VAR_8];

        if( VAR_9->pes->i_stream_id != 0xfa && VAR_9->pes->i_stream_id != 0xfb &&
            VAR_9->pes->i_stream_id != 0xfe )
            continue;

        bits_buffer_t VAR_10, VAR_11;

        FUNC_2( &VAR_6 );
        FUNC_4( &VAR_6, 8, 0x03 );
        VAR_10 = VAR_6;
        FUNC_4( &VAR_6, 24,
                    FUNC_0( 0 ) );
        FUNC_4( &VAR_6, 16, VAR_9->pes->i_es_id );
        FUNC_4( &VAR_6, 1, 0x00 );
        FUNC_4( &VAR_6, 1, 0x00 );
        FUNC_4( &VAR_6, 1, 0x00 );
        FUNC_4( &VAR_6, 5, 0x1f );


        FUNC_2( &VAR_6 );
        FUNC_4( &VAR_6, 8, 0x04 );
        VAR_11 = VAR_6;
        FUNC_4( &VAR_6, 24, FUNC_0( 0 ) );
        if( VAR_9->ts->i_stream_type == 0x10 )
        {
            FUNC_4( &VAR_6, 8, 0x20 );
            FUNC_4( &VAR_6, 6, 0x04 );
        }
        else if( VAR_9->ts->i_stream_type == 0x1b )
        {
            FUNC_4( &VAR_6, 8, 0x21 );
            FUNC_4( &VAR_6, 6, 0x04 );
        }
        else if( VAR_9->ts->i_stream_type == 0x11 ||
                 VAR_9->ts->i_stream_type == 0x0f )
        {
            FUNC_4( &VAR_6, 8, 0x40 );
            FUNC_4( &VAR_6, 6, 0x05 );
        }
        else if( VAR_9->ts->i_stream_type == 0x12 &&
                 VAR_9->fmt->i_codec == VAR_0 )
        {
            FUNC_4( &VAR_6, 8, 0x0B );
            FUNC_4( &VAR_6, 6, 0x04 );
        }
        else
        {
            FUNC_4( &VAR_6, 8, 0x00 );
            FUNC_4( &VAR_6, 6, 0x00 );

            FUNC_7( VAR_1, "Unsupported stream_type => broken IOD" );
        }
        FUNC_4( &VAR_6, 1, 0x00 );
        FUNC_4( &VAR_6, 1, 0x01 );
        FUNC_4( &VAR_6, 24, 1024 * 1024 );
        FUNC_4( &VAR_6, 32, 0x7fffffff );
        FUNC_4( &VAR_6, 32, 0 );


        if( VAR_9->fmt->i_codec == VAR_0 )
        {
            FUNC_2( &VAR_6 );
            FUNC_4( &VAR_6, 8, 0x05 );
            FUNC_4( &VAR_6, 24, 55 );

            FUNC_1( &VAR_6 );
        }
        else if( VAR_9->fmt->i_extra > 0 )
        {

            FUNC_2( &VAR_6 );
            FUNC_4( &VAR_6, 8, 0x05 );
            FUNC_4( &VAR_6, 24, FUNC_0(
                        VAR_9->fmt->i_extra ) );
            for (int VAR_12 = 0; VAR_12 < VAR_9->fmt->i_extra; VAR_12++ )
            {
                FUNC_4( &VAR_6, 8,
                    ((uint8_t*)VAR_9->fmt->p_extra)[VAR_12] );
            }
        }


        FUNC_4( &VAR_11, 24,
                    FUNC_0( VAR_6.i_data -
                    VAR_11.i_data - 3 ) );


        FUNC_2( &VAR_6 );
        FUNC_4( &VAR_6, 8, 0x06 );
        FUNC_4( &VAR_6, 24, FUNC_0( 8 ) );
        FUNC_4( &VAR_6, 8, 0x01 );
        FUNC_4( &VAR_6, 1, 0 );
        FUNC_4( &VAR_6, 32, 0 );
        FUNC_4( &VAR_6, 8, 0 );
        FUNC_4( &VAR_6, 8, 0 );
        FUNC_2( &VAR_6 );


        FUNC_4( &VAR_10, 24,
                    FUNC_0( VAR_6.i_data -
                    VAR_10.i_data - 3 ) );
    }
    FUNC_2( &VAR_6 );

    FUNC_4( &VAR_7, 24,
                FUNC_0(VAR_6.i_data - VAR_7.i_data - 3 ));

    FUNC_5(&VAR_2[0], 0x1d, VAR_6.i_data, VAR_6.p_data);
}
