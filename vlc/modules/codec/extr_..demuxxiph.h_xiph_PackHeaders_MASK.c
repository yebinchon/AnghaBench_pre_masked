
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,void const* const,unsigned int) ;

__attribute__((used)) static inline int FUNC_3(int *VAR_4, void **VAR_5,
                                   unsigned VAR_6[],
                                   const void *const VAR_7[],
                                   unsigned VAR_8)
{
    if (VAR_8 <= 0 || VAR_8 > VAR_3)
        return VAR_0;


    unsigned VAR_9 = 0;
    unsigned VAR_10 = 1;
    for (unsigned VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        VAR_9 += VAR_6[VAR_11];
        if (VAR_11 < VAR_8 - 1)
            VAR_10 += 1 + VAR_6[VAR_11] / 255;
    }


    *VAR_4 = VAR_10 + VAR_9;
    *VAR_5 = FUNC_1(*VAR_4);
    if (*VAR_5 == ((void*)0))
        return VAR_1;


    uint8_t *VAR_12 = (uint8_t*)*VAR_5;
    *VAR_12++ = VAR_8 - 1;
    for (unsigned VAR_13 = 0; VAR_13 < VAR_8 - 1; VAR_13++) {
        unsigned VAR_14 = VAR_6[VAR_13];
        for (;;) {
            if (VAR_14 >= 255) {
                *VAR_12++ = 255;
                VAR_14 -= 255;
            } else {
                *VAR_12++ = VAR_14;
                break;
            }
        }
    }


    for (unsigned VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
        if (VAR_6[VAR_15] > 0) {
            FUNC_2(VAR_12, VAR_7[VAR_15], VAR_6[VAR_15]);
            VAR_12 += VAR_6[VAR_15];
        }
    }
    FUNC_0(VAR_12 == (uint8_t*)*VAR_5 + *VAR_4);
    return VAR_2;
}
