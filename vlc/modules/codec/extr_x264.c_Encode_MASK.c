
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_23__ {int i_plane; int * i_stride; int * plane; int i_csp; } ;
struct TYPE_28__ {scalar_t__ i_type; int i_dts; int i_pts; scalar_t__ b_keyframe; TYPE_1__ img; } ;
typedef TYPE_6__ x264_picture_t ;
struct TYPE_29__ {int * p_payload; scalar_t__ i_payload; } ;
typedef TYPE_7__ x264_nal_t ;
struct TYPE_30__ {int i_planes; TYPE_2__* p; int date; } ;
typedef TYPE_8__ picture_t ;
struct TYPE_26__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_27__ {TYPE_4__ video; } ;
struct TYPE_31__ {TYPE_5__ fmt_in; TYPE_10__* p_sys; } ;
typedef TYPE_9__ encoder_t ;
struct TYPE_25__ {int b_vfr_input; } ;
struct TYPE_21__ {int i_sei_size; TYPE_3__ param; int * p_sei; int h; int i_colorspace; } ;
typedef TYPE_10__ encoder_sys_t ;
struct TYPE_22__ {int i_dts; int i_pts; int i_length; int i_flags; scalar_t__ p_buffer; } ;
typedef TYPE_11__ block_t ;
struct TYPE_24__ {int i_pitch; int p_pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_11__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_7__**,int*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static block_t *FUNC_10( encoder_t *VAR_6, picture_t *VAR_7 )
{
    encoder_sys_t *VAR_8 = VAR_6->p_sys;
    x264_picture_t VAR_9;
    x264_nal_t *VAR_10;
    block_t *VAR_11;
    int VAR_12=0, VAR_13=0, VAR_14=0;


    FUNC_9( &VAR_9 );
    if( FUNC_3(VAR_7) ) {
       VAR_9.i_pts = VAR_7->date;
       VAR_9.img.i_csp = VAR_8->i_colorspace;
       VAR_9.img.i_plane = VAR_7->i_planes;
       for( VAR_14 = 0; VAR_14 < VAR_7->i_planes; VAR_14++ )
       {
           VAR_9.img.plane[VAR_14] = VAR_7->p[VAR_14].p_pixels;
           VAR_9.img.i_stride[VAR_14] = VAR_7->p[VAR_14].i_pitch;
       }

       FUNC_8( VAR_8->h, &VAR_10, &VAR_12, &VAR_9, &VAR_9 );
    } else {
       while( FUNC_7( VAR_8->h ) && VAR_12 == 0 ) {
           FUNC_8( VAR_8->h, &VAR_10, &VAR_12, ((void*)0), &VAR_9 );
       }
    }

    if( !VAR_12 ) return ((void*)0);



    for( VAR_14 = 0; VAR_14 < VAR_12; VAR_14++ )
        VAR_13 += VAR_10[VAR_14].i_payload;

    VAR_11 = FUNC_1( VAR_13 + VAR_8->i_sei_size );
    if( !VAR_11 ) return ((void*)0);

    unsigned int VAR_15 = 0;
    if( FUNC_5( VAR_8->i_sei_size ) )
    {

       FUNC_4( VAR_11->p_buffer, VAR_8->p_sei, VAR_8->i_sei_size );
       VAR_15 = VAR_8->i_sei_size;
       VAR_8->i_sei_size = 0;
       FUNC_2( VAR_8->p_sei );
       VAR_8->p_sei = ((void*)0);
    }

    FUNC_4( VAR_11->p_buffer + VAR_15, VAR_10[0].p_payload, VAR_13 );

    if( VAR_9.b_keyframe )
        VAR_11->i_flags |= VAR_1;
    else if( VAR_9.i_type == VAR_5 || VAR_9.i_type == VAR_4 )
        VAR_11->i_flags |= VAR_2;
    else if( FUNC_0( VAR_9.i_type ) )
        VAR_11->i_flags |= VAR_0;
    else
        VAR_11->i_flags |= VAR_3;


    if( !VAR_8->param.b_vfr_input )
    {

        VAR_11->i_length = FUNC_6(
                    VAR_6->fmt_in.video.i_frame_rate_base,
                    VAR_6->fmt_in.video.i_frame_rate );
    }


    VAR_11->i_pts = VAR_9.i_pts;
    VAR_11->i_dts = VAR_9.i_dts;

    return VAR_11;
}
