
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_4__ {int ip_port1; } ;
typedef TYPE_1__ Onion_Path ;
typedef int Networking_Core ;
typedef int IP_Port ;


 int VAR_0 ;
 int FUNC_0 (int *,int,TYPE_1__ const*,int ,int const*,int ) ;
 int FUNC_1 (int *,int ,int *,int) ;

int FUNC_2(Networking_Core *VAR_1, const Onion_Path *VAR_2, IP_Port VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    uint8_t VAR_6[VAR_0];
    int VAR_7 = FUNC_0(VAR_6, sizeof(VAR_6), VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_7 == -1)
        return -1;

    if (FUNC_1(VAR_1, VAR_2->ip_port1, VAR_6, VAR_7) != VAR_7)
        return -1;

    return 0;
}
