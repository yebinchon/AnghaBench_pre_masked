
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const i_visible_width; int i_visible_height; int const i_x_offset; int const i_y_offset; } ;
typedef TYPE_1__ video_format_t ;
typedef int uint8_t ;
typedef int subpicture_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,int,int,int) ;
 int * FUNC_1 (int,int,int,int) ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int const,int) ;
 int FUNC_3 (int const,int const) ;

__attribute__((used)) static subpicture_region_t *FUNC_4(int VAR_5, int VAR_6,
                                      const video_format_t *VAR_7)
{
    const int VAR_8 = FUNC_2(VAR_7->i_visible_width, VAR_7->i_visible_height);
    const int VAR_9 = VAR_8 * VAR_3;
    const int VAR_10 = VAR_8 * VAR_3 * 0.6;
    uint8_t VAR_11 = FUNC_3(5, VAR_8 * 0.25);

    int VAR_12, VAR_13;
    int VAR_14, VAR_15;
    if (VAR_5 == VAR_2) {
        VAR_14 = FUNC_2(VAR_7->i_visible_width - 2 * VAR_9, 1);
        VAR_15 = FUNC_2(VAR_7->i_visible_height * 0.05, 1);
        VAR_12 = FUNC_3(VAR_7->i_x_offset + VAR_9, VAR_7->i_visible_width - VAR_14);
        VAR_13 = FUNC_2(VAR_7->i_y_offset + VAR_7->i_visible_height - VAR_10, 0);
    } else {
        VAR_14 = FUNC_2(VAR_7->i_visible_width * 0.025, 1);
        VAR_15 = FUNC_2(VAR_7->i_visible_height - 2 * VAR_9, 1);
        VAR_12 = FUNC_2(VAR_7->i_x_offset + VAR_7->i_visible_width - VAR_9, 0);
        VAR_13 = FUNC_3(VAR_7->i_y_offset + VAR_9, VAR_7->i_visible_height - VAR_15);
    }

    if( (VAR_14 < 1 + 2 * VAR_11) || (VAR_15 < 1 + 2 * VAR_11) )
        return ((void*)0);

    subpicture_region_t *VAR_16 = FUNC_1(VAR_12, VAR_13, VAR_14, VAR_15);
    if( !VAR_16)
        return ((void*)0);

    int VAR_17 = VAR_11;
    int VAR_18, VAR_19;
    int VAR_20 = VAR_15 - 1 - VAR_11;

    if (VAR_5 == VAR_2 ) {
        VAR_18 = VAR_11;
        VAR_19 = VAR_17 + (VAR_14 - 2 * VAR_11) * VAR_6 / 100;
    } else {
        VAR_18 = VAR_15 - (VAR_15 - 2 * VAR_11) * VAR_6 / 100;
        VAR_19 = VAR_14 - 1 - VAR_11;
    }


    FUNC_0(VAR_16, VAR_4, VAR_1, 0, 0, VAR_14 - 1, VAR_15 - 1);
    FUNC_0(VAR_16, VAR_4, VAR_0, VAR_17, VAR_18, VAR_19, VAR_20);

    return VAR_16;
}
