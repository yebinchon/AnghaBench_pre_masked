
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int id; int public_key; int status; } ;
struct TYPE_6__ {TYPE_2__* connections; } ;
typedef TYPE_1__ TCP_Connections ;
typedef TYPE_2__ TCP_Connection_to ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (int ,int const*,int ) ;

int FUNC_3(TCP_Connections *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
    if (FUNC_1(VAR_2, VAR_3) != -1)
        return -1;

    int VAR_5 = FUNC_0(VAR_2);

    if (VAR_5 == -1)
        return -1;

    TCP_Connection_to *VAR_6 = &VAR_2->connections[VAR_5];

    VAR_6->status = VAR_0;
    FUNC_2(VAR_6->public_key, VAR_3, VAR_1);
    VAR_6->id = VAR_4;

    return VAR_5;
}
