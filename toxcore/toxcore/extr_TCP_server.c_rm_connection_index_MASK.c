
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct TYPE_12__ {TYPE_1__* connections; } ;
struct TYPE_11__ {TYPE_2__* connections; } ;
struct TYPE_10__ {size_t size_accepted_connections; TYPE_5__* accepted_connection_array; } ;
struct TYPE_9__ {int status; size_t index; size_t other_id; } ;
struct TYPE_8__ {int status; scalar_t__ index; scalar_t__ other_id; } ;
typedef TYPE_3__ TCP_Server ;
typedef TYPE_4__ TCP_Secure_Connection ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_5__*,size_t) ;

__attribute__((used)) static int FUNC_1(TCP_Server *VAR_1, TCP_Secure_Connection *VAR_2, uint8_t VAR_3)
{
    if (VAR_3 >= VAR_0)
        return -1;

    if (VAR_2->connections[VAR_3].status) {
        uint32_t VAR_4 = VAR_2->connections[VAR_3].index;
        uint8_t VAR_5 = VAR_2->connections[VAR_3].other_id;

        if (VAR_2->connections[VAR_3].status == 2) {

            if (VAR_4 >= VAR_1->size_accepted_connections)
                return -1;

            VAR_1->accepted_connection_array[VAR_4].connections[VAR_5].other_id = 0;
            VAR_1->accepted_connection_array[VAR_4].connections[VAR_5].index = 0;
            VAR_1->accepted_connection_array[VAR_4].connections[VAR_5].status = 1;

            FUNC_0(&VAR_1->accepted_connection_array[VAR_4], VAR_5);
        }

        VAR_2->connections[VAR_3].index = 0;
        VAR_2->connections[VAR_3].other_id = 0;
        VAR_2->connections[VAR_3].status = 0;
        return 0;
    } else {
        return -1;
    }
}
