
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_5__ {size_t num_cons; TYPE_3__* conns; } ;
typedef TYPE_1__ Friend_Connections ;
typedef int Friend_Conn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(Friend_Connections *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_cons; ++VAR_2) {
        if (VAR_1->conns[VAR_2].status == VAR_0)
            return VAR_2;
    }

    int VAR_3 = -1;

    if (FUNC_1(VAR_1, VAR_1->num_cons + 1) == 0) {
        VAR_3 = VAR_1->num_cons;
        ++VAR_1->num_cons;
        FUNC_0(&(VAR_1->conns[VAR_3]), 0, sizeof(Friend_Conn));
    }

    return VAR_3;
}
