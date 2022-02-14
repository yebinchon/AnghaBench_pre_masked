
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ status; int priority_queue_start; int public_key; } ;
struct TYPE_5__ {scalar_t__ size_accepted_connections; scalar_t__ num_accepted_connections; TYPE_2__* accepted_connection_array; int accepted_key_list; } ;
typedef TYPE_1__ TCP_Server ;
typedef int TCP_Secure_Connection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(TCP_Server *VAR_1, int VAR_2)
{
    if ((uint32_t)VAR_2 >= VAR_1->size_accepted_connections)
        return -1;

    if (VAR_1->accepted_connection_array[VAR_2].status == VAR_0)
        return -1;

    if (!FUNC_0(&VAR_1->accepted_key_list, VAR_1->accepted_connection_array[VAR_2].public_key, VAR_2))
        return -1;

    FUNC_3(VAR_1->accepted_connection_array[VAR_2].priority_queue_start);
    FUNC_2(&VAR_1->accepted_connection_array[VAR_2], sizeof(TCP_Secure_Connection));
    --VAR_1->num_accepted_connections;

    if (VAR_1->num_accepted_connections == 0)
        FUNC_1(VAR_1, 0);

    return 0;
}
