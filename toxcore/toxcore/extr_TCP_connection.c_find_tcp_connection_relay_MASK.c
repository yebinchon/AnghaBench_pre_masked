
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {unsigned int tcp_connections_length; } ;
struct TYPE_8__ {scalar_t__ status; TYPE_1__* connection; int relay_pk; } ;
struct TYPE_7__ {int public_key; } ;
typedef TYPE_2__ TCP_con ;
typedef TYPE_3__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static int FUNC_2(TCP_Connections *VAR_1, const uint8_t *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->tcp_connections_length; ++VAR_3) {
        TCP_con *VAR_4 = FUNC_0(VAR_1, VAR_3);

        if (VAR_4) {
            if (VAR_4->status == VAR_0) {
                if (FUNC_1(VAR_4->relay_pk, VAR_2) == 0) {
                    return VAR_3;
                }
            } else {
                if (FUNC_1(VAR_4->connection->public_key, VAR_2) == 0) {
                    return VAR_3;
                }
            }
        }
    }

    return -1;
}
