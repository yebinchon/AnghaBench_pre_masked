
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int **,size_t*,int ,size_t) ;

int FUNC_3(uint8_t **VAR_1, size_t *VAR_2, uint16_t VAR_3,
                        size_t VAR_4, const void *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_5 || VAR_4 == 0, -VAR_0);

        VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        FUNC_1(*VAR_1, VAR_5, VAR_4);

        *VAR_1 += VAR_4;
        *VAR_2 -= VAR_4;

        return 0;
}
