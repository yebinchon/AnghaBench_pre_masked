
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_6__ {int num_cons; TYPE_4__* conns; } ;
typedef TYPE_1__ Friend_Connections ;
typedef int Friend_Conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(Friend_Connections *VAR_1, int VAR_2)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    uint32_t VAR_3;
    FUNC_1(&(VAR_1->conns[VAR_2]), 0 , sizeof(Friend_Conn));

    for (VAR_3 = VAR_1->num_cons; VAR_3 != 0; --VAR_3) {
        if (VAR_1->conns[VAR_3 - 1].status != VAR_0)
            break;
    }

    if (VAR_1->num_cons != VAR_3) {
        VAR_1->num_cons = VAR_3;
        FUNC_2(VAR_1, VAR_1->num_cons);
    }

    return 0;
}
