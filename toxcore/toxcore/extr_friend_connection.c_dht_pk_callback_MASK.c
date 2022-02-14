
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_8__ {int crypt_connection_id; int onion_friendnum; int dht_temp_pk; } ;
struct TYPE_7__ {int onion_c; int net_crypto; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int FUNC_0 (TYPE_1__*,int ,int const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (int ,int ,int const*) ;
 scalar_t__ FUNC_6 (int ,int const*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0, int32_t VAR_1, const uint8_t *VAR_2)
{
    Friend_Connections *VAR_3 = VAR_0;
    Friend_Conn *VAR_4 = FUNC_3(VAR_3, VAR_1);

    if (!VAR_4)
        return;

    if (FUNC_6(VAR_4->dht_temp_pk, VAR_2) == 0)
        return;

    FUNC_0(VAR_3, VAR_1, VAR_2);


    if (VAR_4->crypt_connection_id != -1) {
        FUNC_1(VAR_3->net_crypto, VAR_4->crypt_connection_id);
        VAR_4->crypt_connection_id = -1;
        FUNC_4(VAR_0, VAR_1, 0);
    }

    FUNC_2(VAR_3, VAR_1);
    FUNC_5(VAR_3->onion_c, VAR_4->onion_friendnum, VAR_2);
}
