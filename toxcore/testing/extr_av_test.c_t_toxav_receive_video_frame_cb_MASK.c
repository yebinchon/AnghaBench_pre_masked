
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef unsigned long int32_t ;
typedef int ToxAV ;
struct TYPE_3__ {int height; int width; } ;
typedef int IplImage ;
typedef TYPE_1__ CvSize ;
typedef int CvMat ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;
 unsigned long FUNC_3 (unsigned long) ;
 int * FUNC_4 (TYPE_1__,int,int) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int,int,int ,int*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int*) ;
 int* FUNC_9 (int) ;
 int VAR_1 ;

void FUNC_10(ToxAV *VAR_2, uint32_t VAR_3,
                                    uint16_t VAR_4, uint16_t VAR_5,
                                    uint8_t const *VAR_6, uint8_t const *VAR_7, uint8_t const *VAR_8,
                                    int32_t VAR_9, int32_t VAR_10, int32_t VAR_11,
                                    void *VAR_12)
{
    VAR_9 = FUNC_3(VAR_9);
    VAR_10 = FUNC_3(VAR_10);
    VAR_11 = FUNC_3(VAR_11);

    uint16_t *VAR_13 = FUNC_9(VAR_5 * VAR_4 * 6);

    unsigned long int VAR_14, VAR_15;

    for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
        for (VAR_15 = 0; VAR_15 < VAR_4; ++VAR_15) {
            uint8_t *VAR_16 = (uint8_t *) VAR_13 + 3 * ((VAR_14 * VAR_4) + VAR_15);
            int VAR_17 = VAR_6[(VAR_14 * VAR_9) + VAR_15];
            int VAR_18 = VAR_7[((VAR_14 / 2) * VAR_10) + (VAR_15 / 2)];
            int VAR_19 = VAR_8[((VAR_14 / 2) * VAR_11) + (VAR_15 / 2)];

            VAR_16[0] = FUNC_2(VAR_17, VAR_18, VAR_19);
            VAR_16[1] = FUNC_1(VAR_17, VAR_18, VAR_19);
            VAR_16[2] = FUNC_0(VAR_17, VAR_18, VAR_19);
        }
    }


    CvMat VAR_20 = FUNC_6(VAR_5, VAR_4, VAR_0, VAR_13);

    CvSize VAR_21 = {.height = VAR_5, .width = VAR_4};

    IplImage *VAR_22 = FUNC_4(VAR_21, 1, 3);
    IplImage *VAR_23 = FUNC_5(&VAR_20, VAR_22);
    FUNC_7(VAR_1, VAR_23);
    FUNC_8(VAR_13);
}
