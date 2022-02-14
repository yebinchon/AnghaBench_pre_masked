
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_visible_width; scalar_t__ i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; int i_sar_den; scalar_t__ orientation; scalar_t__ multiview_mode; scalar_t__ i_rmask; scalar_t__ i_gmask; scalar_t__ i_bmask; scalar_t__ i_sar_num; } ;
typedef TYPE_1__ video_format_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1( const video_format_t *VAR_4,
                             const video_format_t *VAR_5 )
{
    if( VAR_4->i_chroma != VAR_5->i_chroma )
        return 0;

    if( VAR_4->i_width != VAR_5->i_width || VAR_4->i_height != VAR_5->i_height ||
        VAR_4->i_visible_width != VAR_5->i_visible_width ||
        VAR_4->i_visible_height != VAR_5->i_visible_height ||
        VAR_4->i_x_offset != VAR_5->i_x_offset || VAR_4->i_y_offset != VAR_5->i_y_offset )
        return 0;
    if( (int64_t)VAR_4->i_sar_num * VAR_5->i_sar_den !=
        (int64_t)VAR_5->i_sar_num * VAR_4->i_sar_den )
        return 0;

    if( VAR_4->orientation != VAR_5->orientation)
        return 0;

    if( VAR_4->multiview_mode!= VAR_5->multiview_mode )
       return 0;

    if( VAR_4->i_chroma == VAR_0 ||
        VAR_4->i_chroma == VAR_1 ||
        VAR_4->i_chroma == VAR_2 ||
        VAR_4->i_chroma == VAR_3 )
    {
        video_format_t VAR_6 = *VAR_4;
        video_format_t VAR_7 = *VAR_5;

        FUNC_0( &VAR_6 );
        FUNC_0( &VAR_7 );

        if( VAR_6 != VAR_7 ||
            VAR_6 != VAR_7 ||
            VAR_6 != VAR_7 )
            return 0;
    }
    return 1;
}
