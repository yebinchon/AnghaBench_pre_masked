
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int data ;
struct TYPE_5__ {scalar_t__ family; } ;
struct TYPE_6__ {TYPE_1__ ip; } ;
struct TYPE_7__ {int sock; TYPE_2__ ip_port; } ;
typedef TYPE_3__ TCP_Client_Connection ;
typedef int IP6 ;
typedef int IP4 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(TCP_Client_Connection *VAR_1)
{
    if (VAR_1->ip_port.ip.family == VAR_0) {
        uint8_t VAR_2[4 + sizeof(IP4) + sizeof(uint16_t)];
        int VAR_3 = FUNC_0(VAR_1->sock, VAR_2, sizeof(VAR_2));

        if (VAR_3 == -1)
            return 0;

        if (VAR_2[0] == 5 && VAR_2[1] == 0)
            return 1;

    } else {
        uint8_t VAR_4[4 + sizeof(IP6) + sizeof(uint16_t)];
        int VAR_5 = FUNC_0(VAR_1->sock, VAR_4, sizeof(VAR_4));

        if (VAR_5 == -1)
            return 0;

        if (VAR_4[0] == 5 && VAR_4[1] == 0)
            return 1;
    }

    return -1;
}
