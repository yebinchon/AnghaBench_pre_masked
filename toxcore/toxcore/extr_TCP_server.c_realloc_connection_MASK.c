
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int size_accepted_connections; int * accepted_connection_array; } ;
typedef TYPE_1__ TCP_Server ;
typedef int TCP_Secure_Connection ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(TCP_Server *VAR_0, uint32_t VAR_1)
{
    if (VAR_1 == 0) {
        FUNC_0(VAR_0->accepted_connection_array);
        VAR_0->accepted_connection_array = ((void*)0);
        VAR_0->size_accepted_connections = 0;
        return 0;
    }

    if (VAR_1 == VAR_0->size_accepted_connections) {
        return 0;
    }

    TCP_Secure_Connection *VAR_2 = FUNC_2(VAR_0->accepted_connection_array,
            VAR_1 * sizeof(TCP_Secure_Connection));

    if (VAR_2 == ((void*)0))
        return -1;

    if (VAR_1 > VAR_0->size_accepted_connections) {
        uint32_t VAR_3 = VAR_0->size_accepted_connections;
        uint32_t VAR_4 = (VAR_1 - VAR_3) * sizeof(TCP_Secure_Connection);
        FUNC_1(VAR_2 + VAR_3, 0, VAR_4);
    }

    VAR_0->accepted_connection_array = VAR_2;
    VAR_0->size_accepted_connections = VAR_1;
    return 0;
}
