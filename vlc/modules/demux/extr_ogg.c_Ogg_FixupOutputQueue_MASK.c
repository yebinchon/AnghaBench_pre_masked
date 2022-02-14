
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_18__ {int packet; int bytes; } ;
typedef TYPE_6__ ogg_packet ;
struct TYPE_17__ {TYPE_8__* p_blocks; } ;
struct TYPE_16__ {int i_codec; int i_cat; } ;
struct TYPE_14__ {int p_info; } ;
struct TYPE_13__ {int i_framesize; int i_framesperpacket; } ;
struct TYPE_15__ {TYPE_2__ vorbis; TYPE_1__ speex; } ;
struct TYPE_19__ {TYPE_5__ queue; int dts; TYPE_4__ fmt; TYPE_3__ special; } ;
typedef TYPE_7__ logical_stream_t ;
typedef int demux_t ;
typedef int date_t ;
struct TYPE_20__ {scalar_t__ i_dts; int i_flags; int i_nb_samples; struct TYPE_20__* p_next; int p_buffer; int i_buffer; } ;
typedef TYPE_8__ block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,char*) ;
 long FUNC_8 (int ,TYPE_6__*) ;

__attribute__((used)) static vlc_tick_t FUNC_9( demux_t *VAR_3, logical_stream_t *VAR_4 )
{
    vlc_tick_t VAR_5 = VAR_2;




    FUNC_1(VAR_3);


    unsigned VAR_6 = 0;
    for( block_t *VAR_7 = VAR_4->queue.p_blocks; VAR_7; VAR_7 = VAR_7->p_next )
    {
        if( VAR_7->i_dts != VAR_2 )
        {
            VAR_5 = VAR_7->i_dts;
            break;
        }

        if( VAR_7->i_flags & VAR_0 )
            continue;

        ogg_packet VAR_8;
        VAR_8.bytes = VAR_7->i_buffer;
        VAR_8.packet = VAR_7->p_buffer;

        switch( VAR_4->fmt.i_codec )
        {
            case 129:
                VAR_7->i_nb_samples = VAR_4->special.speex.i_framesize *
                                        VAR_4->special.speex.i_framesperpacket;
                break;
            case 130:
                VAR_7->i_nb_samples = FUNC_0( &VAR_8 );
                break;
            default:
                if( VAR_4->fmt.i_cat == VAR_1 )
                    VAR_7->i_nb_samples = 1;
                break;
        }
        VAR_6 += VAR_7->i_nb_samples;
    }


    if( VAR_5 != VAR_2 )
    {
        date_t VAR_9 = VAR_4->dts;
        FUNC_6( &VAR_9, VAR_5 );
        VAR_5 = FUNC_3( &VAR_9, VAR_6 );
        for( block_t *VAR_10 = VAR_4->queue.p_blocks; VAR_10; VAR_10 = VAR_10->p_next )
        {
            if( VAR_10->i_dts != VAR_2 )
                break;
            if( VAR_10->i_flags & VAR_0 )
                continue;
            VAR_10->i_dts = FUNC_4( &VAR_9 );
            FUNC_5( &VAR_9, VAR_10->i_nb_samples );
        }
    }

    return VAR_5;
}
