
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int sock_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,int,int ) ;
 int VAR_2 ;

uint16_t FUNC_4(sock_t VAR_3)
{
    unsigned int VAR_4 = FUNC_0(VAR_3);

    if (VAR_4 >= sizeof(uint16_t)) {
        uint16_t VAR_5;
        int VAR_6 = FUNC_3(VAR_3, (uint8_t *)&VAR_5, sizeof(uint16_t), VAR_1);

        if (VAR_6 != sizeof(uint16_t)) {
            FUNC_1(VAR_2, "FAIL recv packet\n");
            return 0;
        }

        VAR_5 = FUNC_2(VAR_5);

        if (VAR_5 > VAR_0) {
            return ~0;
        }

        return VAR_5;
    }

    return 0;
}
