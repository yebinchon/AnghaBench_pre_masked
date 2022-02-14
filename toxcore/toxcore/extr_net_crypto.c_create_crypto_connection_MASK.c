
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ status; int mutex; } ;
struct TYPE_5__ {size_t crypto_connections_length; int connections_mutex; TYPE_3__* crypto_connections; int connection_use_counter; } ;
typedef TYPE_1__ Net_Crypto ;
typedef int Crypto_Connection ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(Net_Crypto *VAR_1)
{
    uint32_t VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->crypto_connections_length; ++VAR_2) {
        if (VAR_1->crypto_connections[VAR_2].status == VAR_0)
            return VAR_2;
    }

    while (1) {
        FUNC_2(&VAR_1->connections_mutex);

        if (!VAR_1->connection_use_counter) {
            break;
        }

        FUNC_3(&VAR_1->connections_mutex);
    }

    int VAR_3 = -1;

    if (FUNC_4(VAR_1, VAR_1->crypto_connections_length + 1) == 0) {
        VAR_3 = VAR_1->crypto_connections_length;
        ++VAR_1->crypto_connections_length;
        FUNC_0(&(VAR_1->crypto_connections[VAR_3]), 0, sizeof(Crypto_Connection));

        if (FUNC_1(&VAR_1->crypto_connections[VAR_3].mutex, ((void*)0)) != 0) {
            FUNC_3(&VAR_1->connections_mutex);
            return -1;
        }
    }

    FUNC_3(&VAR_1->connections_mutex);
    return VAR_3;
}
