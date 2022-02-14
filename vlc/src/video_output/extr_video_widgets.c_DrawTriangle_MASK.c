
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* p_picture; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_7__ {TYPE_1__* p; } ;
struct TYPE_6__ {int i_pitch; int * p_pixels; } ;


 int FUNC_0 (TYPE_3__*,int,int ,int const,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(subpicture_region_t *VAR_1, int VAR_2, uint8_t VAR_3,
                         int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    uint8_t *VAR_8 = VAR_1->p_picture->p->p_pixels;
    int VAR_9 = VAR_1->p_picture->p->i_pitch;
    const int VAR_10 = VAR_5 + (VAR_7 - VAR_5) / 2;
    const bool VAR_11 = (VAR_4 > VAR_6);

    for (int VAR_12 = VAR_5; VAR_12 <= VAR_10; VAR_12++) {
        const int VAR_13 = VAR_12 - VAR_5;
        if (VAR_2 == VAR_0) {
            const int VAR_14 = VAR_11 ? FUNC_1(VAR_4 - VAR_13, VAR_6) : FUNC_2(VAR_4 + VAR_13, VAR_6);
            FUNC_0(VAR_1, VAR_0, VAR_3,
                     (VAR_11) ? VAR_14 : VAR_4, VAR_12, (VAR_11) ? VAR_4 : VAR_14, VAR_12);
            FUNC_0(VAR_1, VAR_0, VAR_3,
                     (VAR_11) ? VAR_14 : VAR_4, VAR_7 - VAR_13, (VAR_11) ? VAR_4 : VAR_14, VAR_7 - VAR_13);
        } else {
            VAR_8[VAR_4 + VAR_9 * VAR_12 ] = VAR_3;
            VAR_8[VAR_4 + (VAR_11 ? -VAR_13 : VAR_13) + VAR_9 * VAR_12 ] = VAR_3;
            VAR_8[VAR_4 + VAR_9 * (VAR_7 - VAR_13)] = VAR_3;
            VAR_8[VAR_4 + (VAR_11 ? -VAR_13 : VAR_13) + VAR_9 * (VAR_7 - VAR_13)] = VAR_3;
        }
    }
}
