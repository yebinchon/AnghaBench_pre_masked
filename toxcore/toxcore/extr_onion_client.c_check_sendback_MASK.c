
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int const uint64_t ;
typedef int const uint32_t ;
typedef int data ;
struct TYPE_3__ {int announce_ping_array; } ;
typedef TYPE_1__ Onion_Client ;
typedef int const IP_Port ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int,int *,int const) ;

__attribute__((used)) static uint32_t FUNC_2(Onion_Client *VAR_1, const uint8_t *VAR_2, uint8_t *VAR_3,
                               IP_Port *VAR_4, uint32_t *VAR_5)
{
    uint64_t VAR_6;
    FUNC_0(&VAR_6, VAR_2, sizeof(uint64_t));
    uint8_t VAR_7[sizeof(uint32_t) + VAR_0 + sizeof(IP_Port) + sizeof(uint32_t)];

    if (FUNC_1(VAR_7, sizeof(VAR_7), &VAR_1->announce_ping_array, VAR_6) != sizeof(VAR_7))
        return ~0;

    FUNC_0(VAR_3, VAR_7 + sizeof(uint32_t), VAR_0);
    FUNC_0(VAR_4, VAR_7 + sizeof(uint32_t) + VAR_0, sizeof(IP_Port));
    FUNC_0(VAR_5, VAR_7 + sizeof(uint32_t) + VAR_0 + sizeof(IP_Port), sizeof(uint32_t));

    uint32_t VAR_8;
    FUNC_0(&VAR_8, VAR_7, sizeof(uint32_t));
    return VAR_8;
}
