
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,size_t*,int *,size_t*) ;

int FUNC_2(uint8_t **VAR_2, size_t *VAR_3, uint16_t *VAR_4,
                       size_t *VAR_5, uint8_t **VAR_6) {
        int VAR_7;

        FUNC_0(VAR_2 && VAR_3 && VAR_4 && VAR_5 && VAR_6, -VAR_0);

        VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
        if (VAR_7 < 0)
                return VAR_7;

        if (*VAR_5 > *VAR_3)
                return -VAR_1;

        *VAR_6 = *VAR_2;
        *VAR_3 -= *VAR_5;
        *VAR_2 += *VAR_5;

        return 0;
}
