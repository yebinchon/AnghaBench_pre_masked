
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* p_picture; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_6__ {TYPE_1__* p; } ;
struct TYPE_5__ {int i_pitch; int i_visible_pitch; int * p_pixels; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(subpicture_region_t *VAR_1, int VAR_2, uint8_t VAR_3,
                     int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    uint8_t *VAR_8 = VAR_1->p_picture->p->p_pixels;
    int VAR_9 = VAR_1->p_picture->p->i_pitch;
    if( VAR_4 > VAR_6 || VAR_5 > VAR_7 )
        return;

    if (VAR_2 == VAR_0) {
        if(VAR_4 == 0 && VAR_6 + 1 == VAR_1->p_picture->p->i_visible_pitch) {
            FUNC_0(&VAR_8[VAR_9 * VAR_5], VAR_3, VAR_9 * (VAR_7 - VAR_5 + 1));
        } else {
            for (int VAR_10 = VAR_5; VAR_10 <= VAR_7; VAR_10++)
                FUNC_0(&VAR_8[VAR_4 + VAR_9 * VAR_10], VAR_3, VAR_6 - VAR_4 + 1);
        }
    } else {
        FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, VAR_5, VAR_4, VAR_7);
        FUNC_1(VAR_1, VAR_0, VAR_3, VAR_6, VAR_5, VAR_6, VAR_7);
        FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_5);
        FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4, VAR_7, VAR_6, VAR_7);
    }
}
