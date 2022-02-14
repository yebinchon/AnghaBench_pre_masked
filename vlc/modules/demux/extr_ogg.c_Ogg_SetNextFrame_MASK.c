
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_21__ {int bytes; int granulepos; } ;
typedef TYPE_5__ ogg_packet ;
typedef int ogg_int64_t ;
struct TYPE_23__ {int i_divider_num; int i_divider_den; } ;
struct TYPE_20__ {scalar_t__ i_cat; int i_codec; int i_bitrate; } ;
struct TYPE_18__ {long i_prev_blocksize; int p_info; } ;
struct TYPE_17__ {int i_framesize; int i_framesperpacket; } ;
struct TYPE_19__ {TYPE_2__ vorbis; TYPE_1__ speex; } ;
struct TYPE_22__ {int b_interpolation_failed; TYPE_8__ dts; TYPE_4__ fmt; TYPE_3__ special; int b_contiguous; } ;
typedef TYPE_6__ logical_stream_t ;
typedef int int64_t ;
typedef int demux_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ,int,int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,int) ;
 int FUNC_8 (TYPE_8__*,scalar_t__) ;
 long FUNC_9 (int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_10( demux_t *VAR_3, logical_stream_t *VAR_4,
                              ogg_packet *VAR_5 )
{
    FUNC_3(VAR_3);
    ogg_int64_t VAR_6 = VAR_5->granulepos;

    if( FUNC_0( VAR_4, VAR_6 ) )
    {
        vlc_tick_t VAR_7 = FUNC_1( VAR_4, VAR_6, 0, 0 );
        FUNC_5( !VAR_4->b_contiguous || VAR_7 != VAR_2 );
        if( VAR_7 != VAR_2 )
        {
            FUNC_8( &VAR_4->dts, VAR_7 );
            return;
        }
    }


    if( FUNC_6( &VAR_4->dts ) != VAR_2 )
    {
        if( VAR_4->fmt.i_cat == VAR_1 )
        {
            FUNC_7( &VAR_4->dts, 1 );
        }
        else if( VAR_4->fmt.i_cat == VAR_0 )
        {
            int64_t VAR_8 = 0;
            switch( VAR_4->fmt.i_codec )
            {
                case 130:
                    VAR_8 = FUNC_2( VAR_5 );
                    break;
                case 129:
                    VAR_8 = VAR_4->special.speex.i_framesize *
                                VAR_4->special.speex.i_framesperpacket;
                    break;
                default:
                    if( VAR_4->fmt.i_bitrate )
                    {
                        VAR_8 = 8 * VAR_5->bytes * VAR_4->dts.i_divider_num;
                        VAR_8 /= VAR_4->fmt.i_bitrate / VAR_4->dts.i_divider_den;
                    }
                    break;
            }
            if( VAR_8 == 0 )
                VAR_4->b_interpolation_failed = 1;
            else
                FUNC_7( &VAR_4->dts, VAR_8 );
        }
    }
}
