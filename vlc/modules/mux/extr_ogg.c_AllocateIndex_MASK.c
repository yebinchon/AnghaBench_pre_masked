
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_18__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ sout_mux_t ;
struct TYPE_16__ {int i_index_intvl; double i_index_ratio; } ;
struct TYPE_19__ {TYPE_4__ skeleton; } ;
typedef TYPE_7__ sout_mux_sys_t ;
struct TYPE_20__ {TYPE_3__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_8__ sout_input_t ;
struct TYPE_17__ {size_t i_index_size; scalar_t__ i_index_payload; int p_index; } ;
struct TYPE_13__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_14__ {TYPE_1__ video; } ;
struct TYPE_21__ {int i_length; TYPE_5__ skeleton; TYPE_2__ fmt; } ;
typedef TYPE_9__ ogg_stream_t ;
struct TYPE_15__ {scalar_t__ i_cat; int i_bitrate; } ;


 double VAR_0 ;
 double FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (TYPE_6__*,char*,...) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static bool FUNC_6( sout_mux_t *VAR_2, sout_input_t *VAR_3 )
{
    sout_mux_sys_t *VAR_4 = VAR_2->p_sys;
    ogg_stream_t *VAR_5 = (ogg_stream_t *) VAR_3->p_sys;
    size_t VAR_6;

    if ( VAR_5->i_length )
    {
        vlc_tick_t VAR_7 = VAR_4->skeleton.i_index_intvl;
        uint64_t VAR_8;

        if( VAR_3->p_fmt->i_cat == VAR_1 &&
                VAR_5->fmt.video.i_frame_rate )
        {

            VAR_7= FUNC_2( VAR_7,
                       FUNC_1(10) *
                       VAR_5->fmt.video.i_frame_rate_base /
                       VAR_5->fmt.video.i_frame_rate );
        }

        size_t VAR_9 = 0;

        if ( VAR_3->p_fmt->i_bitrate )
        {
            VAR_8 = FUNC_5(VAR_7, VAR_3->p_fmt->i_bitrate);
            while ( VAR_8 <<= 1 ) VAR_9++;
        }
        else
        {


            VAR_9 = 24 / 8;
        }


        VAR_8 = VAR_7;
        while ( VAR_8 <<= 1 ) VAR_9++;

        VAR_6 = VAR_9 * ( VAR_5->i_length / VAR_7 + 2 );
    }
    else
    {
        VAR_6 = ( FUNC_0(3600) * 11.2 * VAR_0 / VAR_4->skeleton.i_index_intvl )
                * VAR_4->skeleton.i_index_ratio;
        FUNC_4( VAR_2, "No stream length, using default allocation for index" );
    }
    VAR_6 *= ( 8.0 / 7 );
    FUNC_4( VAR_2, "allocating %zu bytes for index", VAR_6 );
    VAR_5->skeleton.p_index = FUNC_3( VAR_6, sizeof(uint8_t) );
    if ( !VAR_5->skeleton.p_index ) return 0;
    VAR_5->skeleton.i_index_size = VAR_6;
    VAR_5->skeleton.i_index_payload = 0;
    return 1;
}
