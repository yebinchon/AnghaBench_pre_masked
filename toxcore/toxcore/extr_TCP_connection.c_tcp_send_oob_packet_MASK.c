
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ status; int connection; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int ,int const*,int const*,int ) ;

int FUNC_2(TCP_Connections *VAR_1, unsigned int VAR_2, const uint8_t *VAR_3,
                        const uint8_t *VAR_4, uint16_t VAR_5)
{
    TCP_con *VAR_6 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_6)
        return -1;

    if (VAR_6->status != VAR_0)
        return -1;

    int VAR_7 = FUNC_1(VAR_6->connection, VAR_3, VAR_4, VAR_5);

    if (VAR_7 == 1)
        return 0;

    return -1;
}
