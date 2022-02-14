
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_sar_num; int i_sar_den; int i_x_offset; int i_visible_width; int i_visible_height; int i_y_offset; } ;
typedef TYPE_1__ video_format_t ;
typedef int uint64_t ;


 int FUNC_0 (int*,int*,int,int,int ) ;

__attribute__((used)) static void FUNC_1( const video_format_t *VAR_0,
                                       video_format_t *VAR_1 )
{

    if( VAR_1->i_sar_num <= 0 || VAR_1->i_sar_den <= 0 )
    {
        FUNC_0( &VAR_1->i_sar_num, &VAR_1->i_sar_den,
                     (uint64_t)VAR_0->i_sar_num * (VAR_1->i_x_offset + VAR_1->i_visible_width)
                                                * (VAR_0->i_x_offset + VAR_0->i_visible_height),
                     (uint64_t)VAR_0->i_sar_den * (VAR_1->i_y_offset + VAR_1->i_visible_height)
                                                * (VAR_0->i_y_offset + VAR_0->i_visible_width),
                     0 );
    }
    else
    {
        FUNC_0( &VAR_1->i_sar_num, &VAR_1->i_sar_den,
                     VAR_1->i_sar_num, VAR_1->i_sar_den, 0 );
    }
}
