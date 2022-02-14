
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {scalar_t__ status; int number; } ;
typedef TYPE_2__ TCP_Client_Connection ;


 size_t VAR_0 ;

int FUNC_0(TCP_Client_Connection *VAR_1, uint8_t VAR_2, uint32_t VAR_3)
{
    if (VAR_2 >= VAR_0)
        return -1;

    if (VAR_1->connections[VAR_2].status == 0)
        return -1;

    VAR_1->connections[VAR_2].number = VAR_3;
    return 0;
}
