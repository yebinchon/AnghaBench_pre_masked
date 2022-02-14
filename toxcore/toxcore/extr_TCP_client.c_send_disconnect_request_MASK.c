
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {TYPE_1__* connections; } ;
struct TYPE_5__ {scalar_t__ number; scalar_t__ status; } ;
typedef TYPE_2__ TCP_Client_Connection ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;

int FUNC_1(TCP_Client_Connection *VAR_2, uint8_t VAR_3)
{
    if (VAR_3 >= VAR_0)
        return -1;

    VAR_2->connections[VAR_3].status = 0;
    VAR_2->connections[VAR_3].number = 0;
    return FUNC_0(VAR_2, VAR_3 + VAR_1);
}
