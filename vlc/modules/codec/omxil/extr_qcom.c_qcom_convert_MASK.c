
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t i_width; size_t i_height; } ;
struct TYPE_7__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_6__ {size_t i_pitch; int * p_pixels; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t const VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int const*,size_t) ;
 size_t const FUNC_1 (size_t,size_t,size_t const,size_t const) ;

void FUNC_2(const uint8_t *VAR_4, picture_t *VAR_5)
{
    size_t VAR_6 = VAR_5->format.i_width;
    size_t VAR_7 = VAR_5->p[0].i_pitch;
    size_t VAR_8 = VAR_5->format.i_height;

    const size_t VAR_9 = (VAR_6 - 1) / VAR_3 + 1;
    const size_t VAR_10 = (VAR_9 + 1) & ~1;

    const size_t VAR_11 = (VAR_8 - 1) / VAR_1 + 1;
    const size_t VAR_12 = (VAR_8 / 2 - 1) / VAR_1 + 1;

    size_t VAR_13 = VAR_10 * VAR_11 * VAR_2;


    if((VAR_13 % (4 * VAR_2)) != 0)
        VAR_13 = (((VAR_13 - 1) / (4 * VAR_2)) + 1) * (4 * VAR_2);

    for(size_t VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
        size_t VAR_15 = VAR_6;
        for(size_t VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {

            const uint8_t *VAR_17 = VAR_4
                + FUNC_1(VAR_16, VAR_14,VAR_10, VAR_11) * VAR_2;


            const uint8_t *VAR_18 = VAR_4 + VAR_13
                + FUNC_1(VAR_16, VAR_14/2, VAR_10, VAR_12) * VAR_2;
            if (VAR_14 & 1)
                VAR_18 += VAR_2/2;


            size_t VAR_19 = VAR_15;
            if (VAR_19 > VAR_3)
                VAR_19 = VAR_3;


            size_t VAR_20 = VAR_8;
            if (VAR_20 > VAR_1)
                VAR_20 = VAR_1;


            size_t VAR_21 = VAR_14 * VAR_1 * VAR_7 + VAR_16 * VAR_3;



            size_t VAR_22 = (VAR_21 / VAR_7) * VAR_7/2 + (VAR_21 % VAR_7);

            VAR_20 /= 2;
            while (VAR_20--) {
                FUNC_0(&VAR_5->p[0].p_pixels[VAR_21], VAR_17, VAR_19);
                VAR_17 += VAR_3;
                VAR_21 += VAR_7;

                FUNC_0(&VAR_5->p[0].p_pixels[VAR_21], VAR_17, VAR_19);
                VAR_17 += VAR_3;
                VAR_21 += VAR_7;

                FUNC_0(&VAR_5->p[1].p_pixels[VAR_22], VAR_18, VAR_19);
                VAR_18 += VAR_3;
                VAR_22 += VAR_7;
            }
            VAR_15 -= VAR_3;
        }
        VAR_8 -= VAR_1;
    }
}
