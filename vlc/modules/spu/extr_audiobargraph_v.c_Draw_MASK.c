
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int member_0; int member_1; int member_2; int member_3; int member_4; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_23__ {int i_visible_lines; int i_pitch; int p_pixels; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_24__ {int i_planes; TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_25__ {int nbChannels; int scale; int barWidth; int* i_values; scalar_t__ alarm; TYPE_3__* p_pic; } ;
typedef TYPE_4__ BarGraph_t ;


 int FUNC_0 (TYPE_2__*,int,int,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_2__*,int,int,TYPE_1__ const*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,TYPE_1__ const*,int) ;
 int FUNC_3 (char,unsigned char,char,char) ;
 TYPE_1__ const* VAR_0 ;
 TYPE_1__ const* VAR_1 ;
 TYPE_1__ const* VAR_2 ;
 TYPE_1__ const* VAR_3 ;
 TYPE_1__ const* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;
 TYPE_3__* FUNC_6 (int ,int,int,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_1__ const* VAR_5 ;
 TYPE_1__ const* VAR_6 ;
 TYPE_1__ const* VAR_7 ;

__attribute__((used)) static void FUNC_8(BarGraph_t *VAR_8)
{
    int VAR_9 = VAR_8->nbChannels;
    int VAR_10 = VAR_8->scale;
    int VAR_11 = VAR_8->barWidth;

    int VAR_12 = 40;
    if (VAR_9 > 0)
        VAR_12 = 2 * VAR_9 * VAR_11 + 30;
    int VAR_13 = VAR_10 + 30;

    int VAR_14[6];
    for (int VAR_15 = 0; VAR_15 < 6; VAR_15++)
        VAR_14[VAR_15] = FUNC_4(-(VAR_15+1) * 10) * VAR_10 + 20;

    if (VAR_8->p_pic)
        FUNC_7(VAR_8->p_pic);
    VAR_8->p_pic = FUNC_6(FUNC_3('Y','U','V','A'), VAR_12, VAR_13, 1, 1);
    if (!VAR_8->p_pic)
        return;
    picture_t *VAR_16 = VAR_8->p_pic;
    plane_t *VAR_17 = VAR_16->p;

    for (int VAR_18 = 0 ; VAR_18 < VAR_16->i_planes ; VAR_18++)
        FUNC_5(VAR_17[VAR_18].p_pixels, 0x00, VAR_17[VAR_18].i_visible_lines * VAR_17[VAR_18].i_pitch);

    FUNC_0(VAR_17, VAR_10, 20, VAR_0);
    FUNC_0(VAR_17, VAR_10, 22, VAR_6);

    static const uint8_t VAR_19[6][5] = {
        { 0x17, 0x15, 0x15, 0x15, 0x17 },
        { 0x77, 0x45, 0x75, 0x15, 0x77 },
        { 0x77, 0x15, 0x75, 0x15, 0x77 },
        { 0x17, 0x15, 0x75, 0x55, 0x57 },
        { 0x77, 0x15, 0x75, 0x45, 0x77 },
        { 0x77, 0x55, 0x75, 0x45, 0x77 },
    };

    for (int VAR_20 = 0; VAR_20 < 6; VAR_20++) {
        FUNC_1(VAR_17, VAR_13 - 1 - VAR_14[VAR_20] - 1, 24, VAR_6, 1, 3);
        FUNC_1(VAR_17, VAR_13 - 1 - VAR_14[VAR_20], 24, VAR_0, 2, 3);
        FUNC_2(VAR_17, VAR_13, VAR_19[VAR_20], VAR_14[VAR_20]);
    }

    int VAR_21 = FUNC_4(- 8) * VAR_10 + 20;
    int VAR_22 = FUNC_4(-18) * VAR_10 + 20;
    int *VAR_23 = VAR_8->i_values;
    const uint8_t *VAR_24 = VAR_8->alarm ? VAR_2 : VAR_0;

    for (int VAR_25 = 0; VAR_25 < VAR_9; VAR_25++) {
        int VAR_26 = 30 + VAR_25 * (5 + VAR_11);

        FUNC_1(VAR_17, VAR_13 - 20 - 1, VAR_26, VAR_24, 8, VAR_11);

        for (int VAR_27 = 20; VAR_27 < VAR_23[VAR_25] + 20; VAR_27++) {
            if (VAR_27 < VAR_22)
                FUNC_1(VAR_17, VAR_13 - VAR_27 - 1, VAR_26, VAR_1, 1, VAR_11);
            else if (VAR_27 < VAR_21)
                FUNC_1(VAR_17, VAR_13 - VAR_27 - 1, VAR_26, VAR_3, 1, VAR_11);
            else
                FUNC_1(VAR_17, VAR_13 - VAR_27 - 1, VAR_26, VAR_2, 1, VAR_11);
        }

        for (int VAR_28 = VAR_23[VAR_25] + 20; VAR_28 < VAR_10 + 20; VAR_28++) {
            if (VAR_28 < VAR_22)
                FUNC_1(VAR_17, VAR_13 - VAR_28 - 1, VAR_26, VAR_4, 1, VAR_11);
            else if (VAR_28 < VAR_21)
                FUNC_1(VAR_17, VAR_13 - VAR_28 - 1, VAR_26, VAR_7, 1, VAR_11);
            else
                FUNC_1(VAR_17, VAR_13 - VAR_28 - 1, VAR_26, VAR_5, 1, VAR_11);
        }
    }
}
