
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int connection_number_tcp; } ;
struct TYPE_7__ {int tcp_mutex; } ;
typedef TYPE_1__ Net_Crypto ;
typedef TYPE_2__ Crypto_Connection ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__ const*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__ const*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, int VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_5 == 0 || VAR_5 > VAR_0)
        return -1;

    Net_Crypto *VAR_6 = VAR_2;

    Crypto_Connection *VAR_7 = FUNC_0(VAR_6, VAR_3);

    if (VAR_7 == 0)
        return -1;

    if (VAR_4[0] == VAR_1) {
        return FUNC_4(VAR_6, VAR_7->connection_number_tcp, VAR_4, VAR_5);
    }

    FUNC_3(&VAR_6->tcp_mutex);
    int VAR_8 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5, 0);
    FUNC_2(&VAR_6->tcp_mutex);

    if (VAR_8 != 0)
        return -1;


    return 0;
}
