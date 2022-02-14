
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int i_visible_lines; int i_visible_pitch; int i_pitch; int * p_pixels; } ;
typedef TYPE_1__ plane_t ;
typedef int int16_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_9__ {int (* emms ) () ;int (* blend ) (int *,int,int const*,int,int const*) ;} ;
typedef TYPE_3__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int const*,int,int const*,int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int const*,int,int const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(filter_t *VAR_2,
                        plane_t *VAR_3, const plane_t *VAR_4,
                        int16_t *VAR_5, uint32_t *VAR_6)
{
    filter_sys_t *VAR_7 = VAR_2->p_sys;

    for (int VAR_8 = 0; VAR_8 < VAR_3->i_visible_lines; VAR_8 += VAR_1) {
        for (int VAR_9 = 0; VAR_9 < VAR_3->i_visible_pitch; VAR_9 += VAR_1) {
            int VAR_10 = FUNC_4(VAR_6) % (VAR_0 - VAR_1 + 1);
            int VAR_11 = FUNC_4(VAR_6) % (VAR_0 - VAR_1 + 1);
            const int16_t *VAR_12 = &VAR_5[VAR_11 * VAR_0 + VAR_10];

            int VAR_13 = VAR_3->i_visible_pitch - VAR_9;
            int VAR_14 = VAR_3->i_visible_lines - VAR_8;

            const uint8_t *VAR_15 = &VAR_4->p_pixels[VAR_8 * VAR_4->i_pitch + VAR_9];
            uint8_t *VAR_16 = &VAR_3->p_pixels[VAR_8 * VAR_3->i_pitch + VAR_9];

            if (VAR_13 >= VAR_1 && VAR_14 >= VAR_1)
                VAR_7->blend(VAR_16, VAR_3->i_pitch, VAR_15, VAR_4->i_pitch, VAR_12);
            else
                FUNC_0(VAR_16, VAR_3->i_pitch, VAR_15, VAR_4->i_pitch, VAR_12,
                           FUNC_1(VAR_13, VAR_1), FUNC_1(VAR_14, VAR_1));
        }
    }
    if (VAR_7->emms)
        VAR_7->emms();
}
