
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const i_visible_width; float const i_x_offset; float const i_y_offset; scalar_t__ i_visible_height; } ;
typedef TYPE_1__ video_format_t ;
typedef int subpicture_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int const,int,int const,int const) ;
 int FUNC_1 (int *,int ,int ,int const,int ,int const,int) ;
 int * FUNC_2 (int,int const,int const,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int const,scalar_t__) ;
 int const FUNC_4 (int const,int const) ;

__attribute__((used)) static subpicture_region_t *FUNC_5(int VAR_7, const video_format_t *VAR_8)
{
    const float VAR_9 = 0.05;
    const float VAR_10 = 0.07;

    const int VAR_11 = FUNC_3(VAR_8->i_visible_width, VAR_8->i_visible_height);
    const int VAR_12 = VAR_11 * VAR_9;
    const int VAR_13 = VAR_11 * VAR_9;
    const int VAR_14 = VAR_8->i_x_offset + VAR_8->i_visible_width - VAR_10 * VAR_11 - VAR_12;
    const int VAR_15 = VAR_8->i_y_offset + VAR_10 * VAR_11;

    if( VAR_12 < 1 || VAR_13 < 1 )
        return ((void*)0);

    subpicture_region_t *VAR_16 = FUNC_2(FUNC_3(VAR_14, 0),
                                       FUNC_4(VAR_15, (int)VAR_8->i_visible_height - VAR_13),
                                       VAR_12, VAR_13);
    if (!VAR_16)
        return ((void*)0);

    FUNC_0(VAR_16, VAR_6, VAR_1, 0, 0, VAR_12 - 1, VAR_13 - 1);

    if (VAR_7 == VAR_4) {
        int VAR_17 = VAR_12 / 3;
        FUNC_0(VAR_16, VAR_6, VAR_2, 0, 0, VAR_17 - 1, VAR_13 -1);
        FUNC_0(VAR_16, VAR_6, VAR_2, VAR_12 - VAR_17, 0, VAR_12 - 1, VAR_13 - 1);
    } else if (VAR_7 == VAR_5) {
        int VAR_18 = VAR_13 >> 1;
        int VAR_19 = (VAR_12 - VAR_18) >> 1;
        int VAR_20 = ((VAR_13 - 1) >> 1) * 2;
        FUNC_1(VAR_16, VAR_6, VAR_2, VAR_19, 0, VAR_12 - VAR_19, VAR_20);
    } else {
        int VAR_21 = VAR_13 >> 1;
        int VAR_22 = (VAR_12 - VAR_21) >> 1;
        int VAR_23 = ((VAR_13 - 1) >> 1) * 2;
        FUNC_0(VAR_16, VAR_6, VAR_2, VAR_22, VAR_21 / 2, VAR_12 - VAR_22, VAR_13 - 1 - VAR_21 / 2);
        FUNC_1(VAR_16, VAR_6, VAR_2, VAR_12 - VAR_22, 0, VAR_22, VAR_23);
        if (VAR_7 == VAR_3) {
            for(int VAR_24 = 0; VAR_24 <= VAR_13 -1; VAR_24++)
                FUNC_0(VAR_16, VAR_6, VAR_0, VAR_24, VAR_24, FUNC_4(VAR_24 + VAR_22, VAR_12 - 1), VAR_24);
        }
    }
    return VAR_16;
}
