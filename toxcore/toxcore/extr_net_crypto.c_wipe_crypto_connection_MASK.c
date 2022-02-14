
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pthread_mutex_t ;
struct TYPE_7__ {scalar_t__ status; int mutex; } ;
struct TYPE_6__ {int crypto_connections_length; TYPE_3__* crypto_connections; } ;
typedef TYPE_1__ Net_Crypto ;
typedef int Crypto_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_4(Net_Crypto *VAR_1, int VAR_2)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    uint32_t VAR_3;


    pthread_mutex_t VAR_4 = VAR_1->crypto_connections[VAR_2].mutex;
    FUNC_3(&(VAR_1->crypto_connections[VAR_2]), sizeof(Crypto_Connection));
    VAR_1->crypto_connections[VAR_2].mutex = VAR_4;

    for (VAR_3 = VAR_1->crypto_connections_length; VAR_3 != 0; --VAR_3) {
        if (VAR_1->crypto_connections[VAR_3 - 1].status == VAR_0) {
            FUNC_1(&VAR_1->crypto_connections[VAR_3 - 1].mutex);
        } else {
            break;
        }
    }

    if (VAR_1->crypto_connections_length != VAR_3) {
        VAR_1->crypto_connections_length = VAR_3;
        FUNC_2(VAR_1, VAR_1->crypto_connections_length);
    }

    return 0;
}
