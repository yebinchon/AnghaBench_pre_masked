
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_0(const uint8_t *VAR_7, size_t VAR_8) {
        uint32_t VAR_9 = 0;

        for (size_t VAR_10 = 0; VAR_10 < VAR_8; ) {
                uint8_t VAR_11, VAR_12, VAR_13;
                size_t VAR_14;
                uint32_t VAR_15;


                if (VAR_7[VAR_10] == VAR_2) {




                        if (VAR_10 + 1 >= VAR_8)
                                return -VAR_0;
                        VAR_10 += VAR_7[VAR_10 + 1] + 3;
                        continue;
                }


                VAR_11 = VAR_7[VAR_10] >> 4;
                VAR_12 = (VAR_7[VAR_10] >> 2) & 0x3;
                VAR_13 = VAR_7[VAR_10] & 0x3;



                VAR_14 = VAR_13 < 3 ? VAR_13 : 4;

                VAR_10++;


                if (VAR_10 + VAR_14 > VAR_8)
                        return -VAR_0;
                VAR_15 = 0;
                for (size_t VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
                        VAR_15 |= (uint32_t) VAR_7[VAR_10 + VAR_16] << (8 * VAR_16);

                VAR_10 += VAR_14;

                if (VAR_12 == VAR_5 && VAR_11 == VAR_4) {

                        if (VAR_14 > 2)
                                return -VAR_0;

                        VAR_9 = (VAR_15 & 0x0000ffffu) << 16;
                }

                if (VAR_12 == VAR_6 && VAR_11 == VAR_3) {


                        if (VAR_14 == 4)
                                VAR_9 = VAR_15;
                        else
                                VAR_9 = (VAR_9 & 0xffff0000u) | (VAR_15 & 0x0000ffffu);
                        if (VAR_9 == VAR_1)
                                return 1;
                }
        }

        return 0;
}
