
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct siphash {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct siphash*,struct siphash*,int) ;
 int FUNC_2 (int const*,unsigned int,struct siphash*) ;
 int FUNC_3 (struct siphash*,int const*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(void) {
        const uint8_t VAR_0[] = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
                                0x09, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16 };
        const uint8_t VAR_1[16] = { 0x22, 0x24, 0x41, 0x22, 0x55, 0x77, 0x88, 0x07,
                                   0x23, 0x09, 0x23, 0x14, 0x0c, 0x33, 0x0e, 0x0f};
        uint8_t VAR_2[sizeof VAR_0] = {};

        struct siphash VAR_3 = {}, VAR_4 = {};
        unsigned VAR_5, VAR_6;

        FUNC_3(&VAR_3, VAR_1);
        FUNC_3(&VAR_4, VAR_1);


        for (VAR_5 = 1; VAR_5 <= sizeof VAR_0; VAR_5++) {
                FUNC_2(VAR_0, VAR_5, &VAR_3);

                VAR_2[VAR_5-1] = VAR_0[VAR_5-1];
                FUNC_2(VAR_2, VAR_5, &VAR_4);

                FUNC_0(FUNC_1(&VAR_3, &VAR_4, sizeof VAR_3) == 0);
        }


        for (VAR_5 = sizeof VAR_0; VAR_5 > 0; VAR_5--) {
                FUNC_4(VAR_2);

                for (VAR_6 = 1; VAR_6 <= sizeof VAR_0; VAR_6++) {
                        FUNC_2(VAR_0, VAR_5, &VAR_3);
                        FUNC_2(VAR_0, VAR_6, &VAR_3);

                        FUNC_2(VAR_0, VAR_5, &VAR_4);
                        VAR_2[VAR_6-1] = VAR_0[VAR_6-1];
                        FUNC_2(VAR_2, VAR_6, &VAR_4);

                        FUNC_0(FUNC_1(&VAR_3, &VAR_4, sizeof VAR_3) == 0);
                }
        }
}
