
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_31__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ video_splitter_t ;
struct TYPE_32__ {int i_row; int i_col; int * lambdah; int * lambdav; int * p_lut; TYPE_6__* p_chroma; TYPE_11__** pp_output; } ;
typedef TYPE_8__ video_splitter_sys_t ;
struct TYPE_33__ {int const i_pitch; int const i_pixel_pitch; int * p_pixels; } ;
typedef TYPE_9__ plane_t ;
struct TYPE_22__ {int i_planes; TYPE_9__* p; } ;
typedef TYPE_10__ picture_t ;
struct TYPE_28__ {int const i_right; int const i_left; int const i_top; int const i_bottom; } ;
struct TYPE_26__ {int const i_right; int const i_left; int const i_top; int const i_bottom; } ;
struct TYPE_29__ {TYPE_4__ attenuate; TYPE_2__ black; } ;
struct TYPE_23__ {size_t i_output; int const i_src_x; int const i_src_y; int const i_src_width; int const i_src_height; TYPE_5__ filter; int b_active; } ;
typedef TYPE_11__ panoramix_output_t ;
struct TYPE_27__ {int i_right; int i_left; int i_top; int i_bottom; } ;
struct TYPE_25__ {int i_right; int i_left; int i_top; int i_bottom; } ;
struct TYPE_24__ {TYPE_3__ attenuate; TYPE_1__ black; } ;
typedef TYPE_12__ panoramix_filter_t ;
struct TYPE_30__ {int* pi_div_w; int* pi_div_h; int * pi_black; int b_planar; } ;


 int FUNC_0 (int *,int const,int *,int const,int const,int const,int ,TYPE_12__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_10__**) ;

__attribute__((used)) static int FUNC_5( video_splitter_t *VAR_2, picture_t *VAR_3[], picture_t *VAR_4 )
{
    video_splitter_sys_t *VAR_5 = VAR_2->p_sys;

    if( FUNC_4( VAR_2, VAR_3 ) )
    {
        FUNC_3( VAR_4 );
        return VAR_0;
    }

    for( int VAR_6 = 0; VAR_6 < VAR_5->i_row; VAR_6++ )
    {
        for( int VAR_7 = 0; VAR_7 < VAR_5->i_col; VAR_7++ )
        {
            const panoramix_output_t *VAR_8 = &VAR_5->pp_output[VAR_7][VAR_6];
            if( !VAR_8->b_active )
                continue;


            picture_t *VAR_9 = VAR_3[VAR_8->i_output];


            FUNC_2( VAR_9, VAR_4 );


            for( int VAR_10 = 0; VAR_10 < VAR_4->i_planes; VAR_10++ )
            {
                const int VAR_11 = VAR_5->p_chroma->pi_div_w[VAR_10];
                const int VAR_12 = VAR_5->p_chroma->pi_div_h[VAR_10];

                if( !VAR_11 || !VAR_12 )
                    continue;

                const plane_t *VAR_13 = &VAR_4->p[VAR_10];
                const plane_t *VAR_14 = &VAR_9->p[VAR_10];


                panoramix_filter_t VAR_15;
                VAR_15.black.i_right = VAR_8->filter.black.i_right / VAR_11;
                VAR_15.black.i_left = VAR_8->filter.black.i_left / VAR_11;
                VAR_15.black.i_top = VAR_8->filter.black.i_top / VAR_12;
                VAR_15.black.i_bottom = VAR_8->filter.black.i_bottom / VAR_12;

                VAR_15.attenuate.i_right = VAR_8->filter.attenuate.i_right / VAR_11;
                VAR_15.attenuate.i_left = VAR_8->filter.attenuate.i_left / VAR_11;
                VAR_15.attenuate.i_top = VAR_8->filter.attenuate.i_top / VAR_12;
                VAR_15.attenuate.i_bottom = VAR_8->filter.attenuate.i_bottom / VAR_12;


                const int VAR_16 = VAR_8->i_src_x/VAR_11;
                const int VAR_17 = VAR_8->i_src_y/VAR_12;

                FUNC_1( VAR_5->p_chroma->b_planar );
                FUNC_0( VAR_14->p_pixels, VAR_14->i_pitch,
                              &VAR_13->p_pixels[VAR_17 * VAR_13->i_pitch + VAR_16 * VAR_13->i_pixel_pitch], VAR_13->i_pitch,
                              VAR_8->i_src_width/VAR_11, VAR_8->i_src_height/VAR_12,
                              VAR_5->p_chroma->pi_black[VAR_10],
                              &VAR_15,
                              VAR_5->p_lut[VAR_10],
                              VAR_5->lambdav[VAR_10],
                              VAR_5->lambdah[VAR_10] );
            }
        }
    }

    FUNC_3( VAR_4 );
    return VAR_1;
}
