
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int crypt_connection_id; } ;
struct TYPE_6__ {int net_crypto; } ;
typedef int IP_Port ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (int ,int ,int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int const*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, uint32_t VAR_1, IP_Port VAR_2, const uint8_t *VAR_3)
{
    Friend_Connections *VAR_4 = VAR_0;
    Friend_Conn *VAR_5 = FUNC_2(VAR_4, VAR_1);

    if (!VAR_5)
        return -1;

    if (VAR_5->crypt_connection_id != -1) {
        return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
    } else {
        return FUNC_0(VAR_4->net_crypto, VAR_2, VAR_3);
    }
}
