
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * conns; } ;
typedef TYPE_1__ Friend_Connections ;
typedef int Friend_Conn ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(Friend_Connections *VAR_0, uint32_t VAR_1)
{
    if (VAR_1 == 0) {
        FUNC_0(VAR_0->conns);
        VAR_0->conns = ((void*)0);
        return 0;
    }

    Friend_Conn *VAR_2 = FUNC_1(VAR_0->conns, VAR_1 * sizeof(Friend_Conn));

    if (VAR_2 == ((void*)0))
        return -1;

    VAR_0->conns = VAR_2;
    return 0;
}
