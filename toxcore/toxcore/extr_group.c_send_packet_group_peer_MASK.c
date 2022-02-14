
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int packet ;
struct TYPE_4__ {int net_crypto; } ;
typedef TYPE_1__ Friend_Connections ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int ,int ,int*,int,int ) ;

__attribute__((used)) static unsigned int FUNC_4(Friend_Connections *VAR_1, int VAR_2, uint8_t VAR_3,
        uint16_t VAR_4, const uint8_t *VAR_5, uint16_t VAR_6)
{
    if (1 + sizeof(uint16_t) + VAR_6 > VAR_0)
        return 0;

    VAR_4 = FUNC_1(VAR_4);
    uint8_t VAR_7[1 + sizeof(uint16_t) + VAR_6];
    VAR_7[0] = VAR_3;
    FUNC_2(VAR_7 + 1, &VAR_4, sizeof(uint16_t));
    FUNC_2(VAR_7 + 1 + sizeof(uint16_t), VAR_5, VAR_6);
    return FUNC_3(VAR_1->net_crypto, FUNC_0(VAR_1, VAR_2), VAR_7,
                             sizeof(VAR_7), 0) != -1;
}
