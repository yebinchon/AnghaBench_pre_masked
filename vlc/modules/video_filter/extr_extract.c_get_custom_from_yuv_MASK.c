
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int i_chroma; } ;
struct TYPE_8__ {TYPE_2__* p; TYPE_1__ format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_7__ {int i_pitch; int i_visible_pitch; int i_visible_lines; int * p_pixels; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int **,int **,int **,int **,int **,int ,int ,int const*,int) ;
 int FUNC_2 (int **,int **,int **,int **,int **,int **,int ,int ,int const*,int) ;

__attribute__((used)) static void
FUNC_3( picture_t *VAR_4, picture_t *VAR_5,
                     int const VAR_6, int const VAR_7, int const VAR_8, int const *VAR_9 )
{
    int const VAR_10 = VAR_4->p[VAR_6].i_pitch;
    int const VAR_11 = VAR_5->p[VAR_6].i_pitch;
    int const VAR_12 = VAR_4->p[VAR_6].i_visible_pitch;
    int const VAR_13 = VAR_4->p[VAR_6].i_visible_lines;
    int const VAR_14 = VAR_4->p[VAR_7].i_visible_pitch;
    uint8_t *VAR_15[2] = { VAR_4->p[VAR_6].p_pixels };
    uint8_t *VAR_16 = VAR_4->p[VAR_7].p_pixels;
    uint8_t *VAR_17 = VAR_4->p[VAR_8].p_pixels;
    uint8_t *VAR_18[2] = { VAR_5->p[VAR_6].p_pixels };
    uint8_t *VAR_19 = VAR_5->p[VAR_7].p_pixels;
    uint8_t *VAR_20 = VAR_5->p[VAR_8].p_pixels;
    uint8_t *const VAR_21 = VAR_15[0] + VAR_13 * VAR_10;

    while (VAR_15[0] < VAR_21)
    {
        VAR_15[1] = VAR_15[0] + VAR_10;
        VAR_18[1] = VAR_18[0] + VAR_11;
        for (uint8_t *const VAR_22 = VAR_15[0] + VAR_12; VAR_15[0] < VAR_22; )
        {
            !FUNC_0(VAR_4->format.i_chroma)
                ? FUNC_2(VAR_15, VAR_18, &VAR_16, &VAR_19, &VAR_17, &VAR_20, VAR_1,
                                 VAR_3, VAR_9, 255)
                : FUNC_1((uint16_t **)VAR_15, (uint16_t **)VAR_18,
                                  (uint16_t **)&VAR_16, (uint16_t **)&VAR_19,
                                  (uint16_t **)&VAR_17, (uint16_t **)&VAR_20, VAR_0,
                                  VAR_2, VAR_9, 1023);
        }
        VAR_15[0] += 2 * VAR_10 - VAR_12;
        VAR_18[0] += 2 * VAR_11 - VAR_12;
        VAR_16 += VAR_4->p[VAR_7].i_pitch - VAR_14;
        VAR_19 += VAR_5->p[VAR_7].i_pitch - VAR_14;
        VAR_17 += VAR_4->p[VAR_8].i_pitch - VAR_14;
        VAR_20 += VAR_5->p[VAR_8].i_pitch - VAR_14;
    }
}
