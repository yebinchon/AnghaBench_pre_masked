
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i_original_picture_height; int i_original_picture_width; scalar_t__ b_absolute; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_6__ {int i_visible_height; int i_visible_width; } ;
struct TYPE_8__ {int i_x; int i_y; TYPE_1__ fmt; } ;
typedef TYPE_3__ subpicture_region_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int *VAR_5, int *VAR_6,
                           const subpicture_t *VAR_7,
                           const subpicture_region_t *VAR_8,
                           int VAR_9)
{
    FUNC_0(VAR_8->i_x != VAR_0 && VAR_8->i_y != VAR_0);
    if (VAR_7->b_absolute) {
        *VAR_5 = VAR_8->i_x;
        *VAR_6 = VAR_8->i_y;
    } else {
        if (VAR_9 & VAR_4)
            *VAR_6 = VAR_8->i_y;
        else if (VAR_9 & VAR_1)
            *VAR_6 = VAR_7->i_original_picture_height - VAR_8->fmt.i_visible_height - VAR_8->i_y;
        else
            *VAR_6 = VAR_7->i_original_picture_height / 2 - VAR_8->fmt.i_visible_height / 2;

        if (VAR_9 & VAR_2)
            *VAR_5 = VAR_8->i_x;
        else if (VAR_9 & VAR_3)
            *VAR_5 = VAR_7->i_original_picture_width - VAR_8->fmt.i_visible_width - VAR_8->i_x;
        else
            *VAR_5 = VAR_7->i_original_picture_width / 2 - VAR_8->fmt.i_visible_width / 2;
    }
}
