
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int connection_number_tcp; } ;
struct TYPE_6__ {int tcp_mutex; int tcp_c; } ;
typedef TYPE_1__ Net_Crypto ;
typedef int IP_Port ;
typedef TYPE_2__ Crypto_Connection ;


 int FUNC_0 (int ,int ,int ,int const*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(Net_Crypto *VAR_0, int VAR_1, IP_Port VAR_2, const uint8_t *VAR_3)
{
    Crypto_Connection *VAR_4 = FUNC_1(VAR_0, VAR_1);

    if (VAR_4 == 0)
        return -1;

    FUNC_2(&VAR_0->tcp_mutex);
    int VAR_5 = FUNC_0(VAR_0->tcp_c, VAR_4->connection_number_tcp, VAR_2, VAR_3);
    FUNC_3(&VAR_0->tcp_mutex);
    return VAR_5;
}
