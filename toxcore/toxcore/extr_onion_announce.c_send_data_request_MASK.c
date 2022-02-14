
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int request ;
typedef int packet ;
struct TYPE_4__ {int ip_port1; } ;
typedef TYPE_1__ Onion_Path ;
typedef int Networking_Core ;
typedef int IP_Port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int const*,int const*,int const*,int const*,int ) ;
 int FUNC_1 (int *,int,TYPE_1__ const*,int ,int *,int) ;
 int FUNC_2 (int *,int ,int *,int) ;

int FUNC_3(Networking_Core *VAR_2, const Onion_Path *VAR_3, IP_Port VAR_4, const uint8_t *VAR_5,
                      const uint8_t *VAR_6, const uint8_t *VAR_7, const uint8_t *VAR_8, uint16_t VAR_9)
{
    uint8_t VAR_10[VAR_0];
    int VAR_11 = FUNC_0(VAR_10, sizeof(VAR_10), VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    if (VAR_11 == -1)
        return -1;

    uint8_t VAR_12[VAR_1];
    VAR_11 = FUNC_1(VAR_12, sizeof(VAR_12), VAR_3, VAR_4, VAR_10, VAR_11);

    if (VAR_11 == -1)
        return -1;

    if (FUNC_2(VAR_2, VAR_3->ip_port1, VAR_12, VAR_11) != VAR_11)
        return -1;

    return 0;
}
