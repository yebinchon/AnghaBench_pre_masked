
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sockaddr_union {int dummy; } sockaddr_union ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int*) ;
 int* VAR_5 ;

int FUNC_1(
                int VAR_6,
                union sockaddr_union *VAR_7,
                uint32_t VAR_8,
                const uint8_t *VAR_9, size_t VAR_10,
                uint16_t VAR_11, uint16_t VAR_12) {

        if (FUNC_0(VAR_0, VAR_3 | VAR_1 | VAR_2, 0, VAR_5) < 0)
                return -VAR_4;

        return VAR_5[0];
}
