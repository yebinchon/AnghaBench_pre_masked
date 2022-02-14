
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int sock_t ;
struct TYPE_7__ {int sock; } ;
struct TYPE_6__ {scalar_t__ size_accepted_connections; TYPE_3__* accepted_connection_array; } ;
typedef TYPE_1__ TCP_Server ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(TCP_Server *VAR_1, int VAR_2)
{
    if ((uint32_t)VAR_2 >= VAR_1->size_accepted_connections)
        return -1;

    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        FUNC_2(VAR_1, &VAR_1->accepted_connection_array[VAR_2], VAR_3);
    }

    sock_t VAR_4 = VAR_1->accepted_connection_array[VAR_2].sock;

    if (FUNC_0(VAR_1, VAR_2) != 0)
        return -1;

    FUNC_1(VAR_4);
    return 0;
}
