
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int sd_bus_message ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int *,int,int,int) ;

__attribute__((used)) static int FUNC_3(sd_bus_message *VAR_2, uint64_t VAR_3, uint32_t VAR_4) {
        uint8_t *VAR_5;

        FUNC_1(VAR_2);


        if (VAR_3 > 0xFF)
                return -VAR_0;

        if (FUNC_0(VAR_2)) {


                VAR_5 = FUNC_2(VAR_2, 8, 8 + 4 + 1 + 1, 1);
                if (!VAR_5)
                        return -VAR_1;

                *((uint64_t*) VAR_5) = VAR_3;
                *((uint32_t*) (VAR_5 + 8)) = VAR_4;
                VAR_5[12] = 0;
                VAR_5[13] = 'u';
        } else {

                VAR_5 = FUNC_2(VAR_2, 8, 4 + 4, 0);
                if (!VAR_5)
                        return -VAR_1;

                VAR_5[0] = (uint8_t) VAR_3;
                VAR_5[1] = 1;
                VAR_5[2] = 'u';
                VAR_5[3] = 0;

                ((uint32_t*) VAR_5)[1] = VAR_4;
        }

        return 0;
}
