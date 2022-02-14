
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ping ;
typedef int int64_t ;
struct TYPE_7__ {int ping_lastsent; int crypt_connection_id; } ;
struct TYPE_6__ {int net_crypto; } ;
typedef TYPE_1__ Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__ const*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(const Friend_Connections *VAR_1, int VAR_2)
{
    Friend_Conn *VAR_3 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_3)
        return -1;

    uint8_t VAR_4 = VAR_0;
    int64_t VAR_5 = FUNC_2(VAR_1->net_crypto, VAR_3->crypt_connection_id, &VAR_4, sizeof(VAR_4), 0);

    if (VAR_5 != -1) {
        VAR_3->ping_lastsent = FUNC_1();
        return 0;
    }

    return -1;
}
