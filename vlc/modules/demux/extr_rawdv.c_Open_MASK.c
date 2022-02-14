
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_19__ {int sct; int dsn; int fsc; int dbn; } ;
typedef TYPE_3__ dv_id_t ;
struct TYPE_20__ {int dsf; int apt; int tf1; int ap1; int tf2; int ap2; int tf3; int ap3; } ;
typedef TYPE_4__ dv_header_t ;
struct TYPE_17__ {int force; } ;
struct TYPE_21__ {int pf_control; int pf_demux; int out; TYPE_6__* p_sys; int s; TYPE_1__ obj; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_18__ {int i_width; int i_height; int i_visible_width; int i_visible_height; } ;
struct TYPE_16__ {TYPE_2__ video; } ;
struct TYPE_22__ {int i_dsf; int f_rate; TYPE_12__ fmt_audio; int * p_es_audio; TYPE_12__ fmt_video; int * p_es_video; scalar_t__ i_bitrate; scalar_t__ i_pcr; scalar_t__ frame_size; scalar_t__ b_hurry_up; } ;
typedef TYPE_6__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_12__*,int const*) ;
 int FUNC_3 (TYPE_12__*,int ,int ) ;
 void* FUNC_4 (int ,TYPE_12__*) ;
 TYPE_6__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__*,char*,char*) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_10 (int ,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_11( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;

    const uint8_t *VAR_12, *VAR_13;

    uint32_t VAR_14;
    dv_header_t VAR_15;
    dv_id_t VAR_16;







    if( !FUNC_1( VAR_10, ".dv" ) && !VAR_10->obj.force )
        return VAR_6;

    if( FUNC_10( VAR_10->s, &VAR_12, VAR_2 ) <
        VAR_1 )
    {

        FUNC_7( VAR_10, "cannot peek()" );
        return VAR_6;
    }
    VAR_13 = VAR_12;


    VAR_14 = FUNC_0( VAR_12 ); VAR_12 += 4;
    VAR_16.sct = VAR_14 >> (32 - 3);
    VAR_14 <<= 8;
    VAR_16.dsn = VAR_14 >> (32 - 4);
    VAR_14 <<= 4;
    VAR_16.fsc = VAR_14 >> (32 - 1);
    VAR_14 <<= 4;
    VAR_16.dbn = VAR_14 >> (32 - 8);
    VAR_14 <<= 8;

    if( VAR_16.sct != 0 )
    {
        FUNC_8( VAR_10, "not a raw DV stream header" );
        return VAR_6;
    }


    VAR_15.dsf = VAR_14 >> (32 - 1);
    VAR_14 <<= 1;
    if( VAR_14 >> (32 - 1) )
    {
        FUNC_8( VAR_10, "incorrect bit" );
        return VAR_6;
    }

    VAR_14 = FUNC_0( VAR_12 ); VAR_12 += 4;
    VAR_14 <<= 5;
    VAR_15.apt = VAR_14 >> (32 - 3);
    VAR_14 <<= 3;
    VAR_15.tf1 = VAR_14 >> (32 - 1);
    VAR_14 <<= 5;
    VAR_15.ap1 = VAR_14 >> (32 - 3);
    VAR_14 <<= 3;
    VAR_15.tf2 = VAR_14 >> (32 - 1);
    VAR_14 <<= 5;
    VAR_15.ap2 = VAR_14 >> (32 - 3);
    VAR_14 <<= 3;
    VAR_15.tf3 = VAR_14 >> (32 - 1);
    VAR_14 <<= 5;
    VAR_15.ap3 = VAR_14 >> (32 - 3);

    VAR_12 += 72;

    VAR_10->p_sys = VAR_11 = FUNC_5( sizeof( demux_sys_t ) );
    if( !VAR_11 )
        return VAR_7;

    VAR_11->b_hurry_up = FUNC_9( VAR_10, "rawdv-hurry-up" );
    FUNC_6( VAR_10, "Realtime DV Source: %s", (VAR_11->b_hurry_up)?"Yes":"No" );

    VAR_11->i_dsf = VAR_15.dsf;
    VAR_11->frame_size = VAR_15.dsf ? VAR_2
                                      : VAR_1;
    VAR_11->f_rate = VAR_15.dsf ? 25 : 29.97;

    VAR_11->i_pcr = 0;
    VAR_11->p_es_video = ((void*)0);
    VAR_11->p_es_audio = ((void*)0);

    VAR_11->i_bitrate = 0;

    FUNC_3( &VAR_11->fmt_video, VAR_4, VAR_5 );
    VAR_11->fmt_video.video.i_width = 720;
    VAR_11->fmt_video.video.i_height= VAR_15.dsf ? 576 : 480;;
    VAR_11->fmt_video.video.i_visible_width = VAR_11->fmt_video.video.i_width;
    VAR_11->fmt_video.video.i_visible_height = VAR_11->fmt_video.video.i_height;

    VAR_11->p_es_video = FUNC_4( VAR_10->out, &VAR_11->fmt_video );


    VAR_12 = VAR_13 + 80*6+80*16*3 + 3;
    if( *VAR_12 == 0x50 )
    {
        FUNC_2( &VAR_11->fmt_audio, &VAR_12[1] );
        VAR_11->p_es_audio = FUNC_4( VAR_10->out, &VAR_11->fmt_audio );
    }

    VAR_10->pf_demux = VAR_3;
    VAR_10->pf_control = VAR_0;
    return VAR_8;
}
