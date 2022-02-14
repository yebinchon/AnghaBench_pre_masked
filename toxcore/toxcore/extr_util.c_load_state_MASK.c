
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int (* load_state_callback_func ) (void*,int const*,scalar_t__,scalar_t__) ;
typedef int length_sub ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int const*) ;
 int VAR_0 ;

int FUNC_3(load_state_callback_func VAR_1, void *VAR_2,
               const uint8_t *VAR_3, uint32_t VAR_4, uint16_t VAR_5)
{
    if (!VAR_1 || !VAR_3) {



        return -1;
    }


    uint16_t VAR_6;
    uint32_t VAR_7, VAR_8;
    uint32_t VAR_9 = sizeof(uint32_t) * 2;

    while (VAR_4 >= VAR_9) {
        FUNC_2(&VAR_7, VAR_3);
        FUNC_2(&VAR_8, VAR_3 + sizeof(VAR_7));
        VAR_3 += VAR_9;
        VAR_4 -= VAR_9;

        if (VAR_4 < VAR_7) {




            return -1;
        }

        if (FUNC_1((VAR_8 >> 16)) != VAR_5) {




            return -1;
        }

        VAR_6 = FUNC_1(VAR_8 & 0xFFFF);

        int VAR_10 = VAR_1(VAR_2, VAR_3, VAR_7, VAR_6);

        if (VAR_10 == -1) {
            return -1;
        }


        if (VAR_10 == -2)
            return 0;

        VAR_3 += VAR_7;
        VAR_4 -= VAR_7;
    }

    return VAR_4 == 0 ? 0 : -1;
}
