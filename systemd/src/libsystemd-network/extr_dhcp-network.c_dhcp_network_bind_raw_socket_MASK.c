
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sockaddr_union {int dummy; } sockaddr_union ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct ether_addr {TYPE_1__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,union sockaddr_union*,int ,int const*,size_t,int const*,struct ether_addr*,int ,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ether_addr*,int const*,size_t) ;

int FUNC_3(int VAR_5, union sockaddr_union *VAR_6,
                                 uint32_t VAR_7, const uint8_t *VAR_8,
                                 size_t VAR_9, uint16_t VAR_10,
                                 uint16_t VAR_11) {
        static const uint8_t VAR_12[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

        static const uint8_t VAR_13[] = {
                0x00, 0xff, 0xff, 0xff, 0xff, 0x12, 0x40, 0x1b,
                0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                0xff, 0xff, 0xff, 0xff
          };
        struct ether_addr VAR_14 = { { 0, 0, 0, 0, 0, 0 } };
        const uint8_t *VAR_15 = ((void*)0);
        uint8_t VAR_16 = 0;

        if (VAR_10 == VAR_0) {
                FUNC_1(VAR_9 == VAR_3, -VAR_2);
                FUNC_2(&VAR_14, VAR_8, VAR_3);
                VAR_15 = VAR_12;
                VAR_16 = VAR_3;
        } else if (VAR_10 == VAR_1) {
                FUNC_1(VAR_9 == VAR_4, -VAR_2);
                VAR_15 = VAR_13;
        } else
                return -VAR_2;

        return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                VAR_15, &VAR_14, VAR_10, VAR_16, VAR_11);
}
