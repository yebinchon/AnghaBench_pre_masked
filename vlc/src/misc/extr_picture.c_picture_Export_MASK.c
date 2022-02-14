
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_12__ {int i_sar_num; int i_sar_den; unsigned int i_visible_width; unsigned int i_visible_height; unsigned int i_width; unsigned int i_height; unsigned int i_x_offset; unsigned int i_y_offset; int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_13__ {int date; TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
typedef unsigned int int64_t ;
typedef int image_handler_t ;
typedef int fmt_out ;
struct TYPE_14__ {int i_dts; int i_pts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

int FUNC_4( vlc_object_t *VAR_3,
                    block_t **VAR_4,
                    video_format_t *VAR_5,
                    picture_t *VAR_6,
                    vlc_fourcc_t VAR_7,
                    int VAR_8, int VAR_9,
                    bool VAR_10 )
{

    video_format_t VAR_11 = VAR_6->format;
    if( VAR_11.i_sar_num <= 0 || VAR_11.i_sar_den <= 0 )
    {
        VAR_11.i_sar_num =
        VAR_11.i_sar_den = 1;
    }


    video_format_t VAR_12;
    FUNC_3( &VAR_12, 0, sizeof(VAR_12) );
    VAR_12.i_sar_num =
    VAR_12.i_sar_den = 1;
    VAR_12.i_chroma = VAR_7;


    unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
    if( VAR_11.i_visible_width > 0 && VAR_11.i_visible_height > 0 )
    {
        VAR_13 = VAR_11.i_visible_width;
        VAR_14 = VAR_11.i_visible_height;
    }
    else
    {
        VAR_13 = VAR_11.i_width;
        VAR_14 = VAR_11.i_height;
    }
    if( VAR_11.i_sar_num >= VAR_11.i_sar_den )
    {
        VAR_15 = (int64_t)VAR_13 * VAR_11.i_sar_num / VAR_11.i_sar_den;
        VAR_16 = VAR_14;
    }
    else
    {
        VAR_15 = VAR_13;
        VAR_16 = VAR_14 * VAR_11.i_sar_den / VAR_11.i_sar_num;
    }


    if( VAR_10 && VAR_8 > 0 && VAR_9 > 0 )
    {
        float VAR_17 = (float)VAR_8 / VAR_9;
        float VAR_18 = (float)VAR_13 / VAR_14;
        unsigned int VAR_19, VAR_20;
        if ( VAR_17 > VAR_18 )
        {
            VAR_19 = VAR_13;
            VAR_20 = (float)VAR_19 / VAR_17;
        }
        else
        {
            VAR_20 = VAR_14;
            VAR_19 = (float)VAR_20 * VAR_17;
        }
        VAR_12.i_width = VAR_8;
        VAR_12.i_height = VAR_9;
        VAR_11.i_visible_width = VAR_19;
        VAR_11.i_visible_height = VAR_20;
        VAR_11.i_x_offset += (VAR_13 - VAR_19) / 2;
        VAR_11.i_y_offset += (VAR_14 - VAR_20) / 2;
    }
    else
    {
        VAR_12.i_width = ( VAR_8 < 0 ) ?
                           VAR_15 : (unsigned)VAR_8;
        VAR_12.i_height = ( VAR_9 < 0 ) ?
                           VAR_16 : (unsigned)VAR_9;
    }


    if( VAR_12.i_height == 0 && VAR_12.i_width > 0 )
    {
        VAR_12.i_height = VAR_14 * VAR_12.i_width
                         * VAR_11.i_sar_den / VAR_11.i_width / VAR_11.i_sar_num;
    }
    else if( VAR_12.i_width == 0 && VAR_12.i_height > 0 )
    {
        VAR_12.i_width = VAR_13 * VAR_12.i_height
                         * VAR_11.i_sar_num / VAR_11.i_height / VAR_11.i_sar_den;
    }

    image_handler_t *VAR_21 = FUNC_0( VAR_3 );
    if( !VAR_21 )
        return VAR_1;

    block_t *VAR_22 = FUNC_2( VAR_21, VAR_6, &VAR_11, &VAR_12 );

    FUNC_1( VAR_21 );

    if( !VAR_22 )
        return VAR_0;

    VAR_22->i_pts =
    VAR_22->i_dts = VAR_6->date;

    if( VAR_5 )
        *VAR_5 = VAR_12;
    *VAR_4 = VAR_22;

    return VAR_2;
}
