
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,size_t) ;

uint16_t FUNC_1(uint8_t *VAR_0, size_t VAR_1) {
        uint64_t *VAR_2 = (uint64_t*)VAR_0;
        uint64_t *VAR_3 = VAR_2 + (VAR_1 / sizeof(uint64_t));
        uint64_t VAR_4 = 0;



        while (VAR_2 < VAR_3) {
                VAR_4 += *VAR_2;
                if (VAR_4 < *VAR_2)

                        VAR_4++;

                VAR_2++;
        }

        if (VAR_1 % sizeof(uint64_t)) {


                uint64_t VAR_5 = 0;

                FUNC_0(&VAR_5, VAR_2, VAR_1 % sizeof(uint64_t));

                VAR_4 += VAR_5;
                if (VAR_4 < VAR_5)

                        VAR_4++;
        }

        while (VAR_4 >> 16)
                VAR_4 = (VAR_4 & 0xffff) + (VAR_4 >> 16);

        return ~VAR_4;
}
