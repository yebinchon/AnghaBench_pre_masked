
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_transform_t ;
typedef scalar_t__ video_orientation_t ;
struct TYPE_3__ {scalar_t__ orientation; int i_sar_num; int i_sar_den; int i_x_offset; int i_y_offset; int i_visible_width; int i_visible_height; int i_width; int i_height; } ;
typedef TYPE_1__ video_format_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,unsigned int*,int*) ;

void FUNC_2( video_format_t *VAR_8, video_transform_t VAR_9 )
{

    unsigned VAR_10, VAR_11;
    bool VAR_12, VAR_13;

    FUNC_1( VAR_9, &VAR_10, &VAR_12 );
    FUNC_1( (video_transform_t)VAR_8->orientation, &VAR_11, &VAR_13 );

    unsigned VAR_14 = (VAR_11 - VAR_10 + 360) % 360;
    bool VAR_15 = VAR_13 ^ VAR_12;

    video_orientation_t VAR_16 = VAR_2;

    if( VAR_15 ) {

        if( VAR_14 == 0 )
            VAR_16 = VAR_1;
        else if( VAR_14 == 90 )
            VAR_16 = VAR_0;
        else if( VAR_14 == 180 )
            VAR_16 = VAR_7;
        else if( VAR_14 == 270 )
            VAR_16 = VAR_6;
    }
    else {

        if( VAR_14 == 90 )
            VAR_16 = VAR_5;
        else if( VAR_14 == 180 )
            VAR_16 = VAR_3;
        else if( VAR_14 == 270 )
            VAR_16 = VAR_4;
    }


    if( FUNC_0( VAR_8->orientation ) != FUNC_0( VAR_16 ) )
    {
        video_format_t VAR_17 = *VAR_8;

        VAR_8->i_width = VAR_17.i_height;
        VAR_8->i_visible_width = VAR_17.i_visible_height;
        VAR_8->i_height = VAR_17.i_width;
        VAR_8->i_visible_height = VAR_17.i_visible_width;
        VAR_8->i_x_offset = VAR_17.i_y_offset;
        VAR_8->i_y_offset = VAR_17.i_x_offset;
        VAR_8->i_sar_num = VAR_17.i_sar_den;
        VAR_8->i_sar_den = VAR_17.i_sar_num;
    }

    VAR_8->orientation = VAR_16;
}
