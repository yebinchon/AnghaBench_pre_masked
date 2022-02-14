
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ status; int connection; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(TCP_Connections *VAR_1, int VAR_2, uint8_t *VAR_3)
{
    TCP_con *VAR_4 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_4)
        return -1;

    if (VAR_4->status == VAR_0)
        return -1;

    if (FUNC_1(VAR_4->connection, VAR_3) != 1)
        return -1;

    return 0;
}
