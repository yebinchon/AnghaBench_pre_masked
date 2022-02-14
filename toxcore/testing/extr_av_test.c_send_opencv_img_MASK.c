
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int ToxAV ;
struct TYPE_3__ {int height; int width; int * imageData; } ;
typedef TYPE_1__ IplImage ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int,int,int *,int *,int *,int *) ;

int FUNC_6(ToxAV *VAR_0, uint32_t VAR_1, const IplImage *VAR_2)
{
    int32_t VAR_3[3] = { 1280, 640, 640 };
    uint8_t *VAR_4[3] = {
        FUNC_4(VAR_2->height * VAR_2->width),
        FUNC_4(VAR_2->height * VAR_2->width / 4),
        FUNC_4(VAR_2->height * VAR_2->width / 4),
    };

    int VAR_5 = 1;
    int VAR_6 = 1;

    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2->height; ++VAR_8) {
        for (VAR_7 = 0; VAR_7 < VAR_2->width; ++VAR_7) {
            uint8_t VAR_9 = VAR_2->imageData[(VAR_7 + VAR_8 * VAR_2->width) * 3 + 0];
            uint8_t VAR_10 = VAR_2->imageData[(VAR_7 + VAR_8 * VAR_2->width) * 3 + 1];
            uint8_t VAR_11 = VAR_2->imageData[(VAR_7 + VAR_8 * VAR_2->width) * 3 + 2];

            VAR_4[0][VAR_7 + VAR_8 * VAR_3[0]] = FUNC_2(VAR_9, VAR_10, VAR_11);

            if (!(VAR_7 % (1 << VAR_5)) && !(VAR_8 % (1 << VAR_6))) {
                const int VAR_12 = VAR_7 / (1 << VAR_5);
                const int VAR_13 = VAR_8 / (1 << VAR_6);
                VAR_4[1][VAR_12 + VAR_13 * VAR_3[1]] = FUNC_0(VAR_9, VAR_10, VAR_11);
                VAR_4[2][VAR_12 + VAR_13 * VAR_3[2]] = FUNC_1(VAR_9, VAR_10, VAR_11);
            }
        }
    }

    int VAR_14 = FUNC_5(VAR_0, VAR_1, VAR_2->width, VAR_2->height,
                                    VAR_4[0], VAR_4[1], VAR_4[2], ((void*)0));
    FUNC_3(VAR_4[0]);
    FUNC_3(VAR_4[1]);
    FUNC_3(VAR_4[2]);
    return VAR_14;
}
