
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * connections; } ;
typedef TYPE_1__ TCP_Connections ;
typedef int TCP_Connection_to ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int) ;

__attribute__((used)) static TCP_Connection_to *FUNC_1(const TCP_Connections *VAR_0, int VAR_1)
{
    if (FUNC_0(VAR_0, VAR_1))
        return 0;

    return &VAR_0->connections[VAR_1];
}
