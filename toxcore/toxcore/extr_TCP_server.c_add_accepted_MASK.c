
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ status; scalar_t__ ping_id; int last_pinged; scalar_t__ identifier; } ;
struct TYPE_11__ {int public_key; } ;
struct TYPE_10__ {int size_accepted_connections; int num_accepted_connections; TYPE_4__* accepted_connection_array; scalar_t__ counter; int accepted_key_list; } ;
typedef TYPE_1__ TCP_Server ;
typedef TYPE_2__ TCP_Secure_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_2__ const*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(TCP_Server *VAR_3, const TCP_Secure_Connection *VAR_4)
{
    int VAR_5 = FUNC_2(VAR_3, VAR_4->public_key);

    if (VAR_5 != -1) {
        FUNC_3(VAR_3, VAR_5);
        VAR_5 = -1;
    }

    if (VAR_3->size_accepted_connections == VAR_3->num_accepted_connections) {
        if (FUNC_5(VAR_3, VAR_3->size_accepted_connections + 4) == -1)
            return -1;

        VAR_5 = VAR_3->num_accepted_connections;
    } else {
        uint32_t VAR_6;

        for (VAR_6 = VAR_3->size_accepted_connections; VAR_6 != 0; --VAR_6) {
            if (VAR_3->accepted_connection_array[VAR_6 - 1].status == VAR_1) {
                VAR_5 = VAR_6 - 1;
                break;
            }
        }
    }

    if (VAR_5 == -1) {
        FUNC_1(VAR_2, "FAIL index is -1\n");
        return -1;
    }

    if (!FUNC_0(&VAR_3->accepted_key_list, VAR_4->public_key, VAR_5))
        return -1;

    FUNC_4(&VAR_3->accepted_connection_array[VAR_5], VAR_4, sizeof(TCP_Secure_Connection));
    VAR_3->accepted_connection_array[VAR_5].status = VAR_0;
    ++VAR_3->num_accepted_connections;
    VAR_3->accepted_connection_array[VAR_5].identifier = ++VAR_3->counter;
    VAR_3->accepted_connection_array[VAR_5].last_pinged = FUNC_6();
    VAR_3->accepted_connection_array[VAR_5].ping_id = 0;

    return VAR_5;
}
