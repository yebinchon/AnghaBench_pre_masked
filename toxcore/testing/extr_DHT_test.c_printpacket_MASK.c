
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int IP_Port ;


 int FUNC_0 (char*,...) ;

void FUNC_1(uint8_t *VAR_0, uint32_t VAR_1, IP_Port VAR_2)
{
    uint32_t VAR_3;
    FUNC_0("UNHANDLED PACKET RECEIVED\nLENGTH:%u\nCONTENTS:\n", VAR_1);
    FUNC_0("--------------------BEGIN-----------------------------\n");

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0[VAR_3] < 16)
            FUNC_0("0");

        FUNC_0("%hhX", VAR_0[VAR_3]);
    }

    FUNC_0("\n--------------------END-----------------------------\n\n\n");
}
