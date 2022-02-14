
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(Friend_Connections *VAR_3, int VAR_4, uint16_t VAR_5, uint8_t *VAR_6)
{
    uint8_t VAR_7[1 + VAR_1];
    VAR_5 = FUNC_1(VAR_5);
    VAR_7[0] = VAR_2;
    FUNC_2(VAR_7 + 1, &VAR_5, sizeof(uint16_t));
    FUNC_2(VAR_7 + 1 + sizeof(uint16_t), VAR_6, VAR_0);
    return FUNC_3(VAR_3->net_crypto, FUNC_0(VAR_3, VAR_4), VAR_7,
                             sizeof(VAR_7), 0) != -1;
}
