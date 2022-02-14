
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int public_key; } ;
struct TYPE_13__ {unsigned int connections_length; scalar_t__ onion_num_conns; scalar_t__ onion_status; } ;
struct TYPE_12__ {int onion; scalar_t__ connected_time; int status; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;
typedef TYPE_3__ TCP_Connection_to ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(TCP_Connections *VAR_2, int VAR_3)
{
    TCP_con *VAR_4 = FUNC_1(VAR_2, VAR_3);

    if (!VAR_4)
        return -1;

    unsigned int VAR_5, VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2->connections_length; ++VAR_5) {
        TCP_Connection_to *VAR_7 = FUNC_0(VAR_2, VAR_5);

        if (VAR_7) {
            if (FUNC_3(VAR_7, VAR_3)) {
                if (FUNC_2(VAR_2, VAR_3, VAR_7->public_key) == 0) {
                    ++VAR_6;
                }
            }
        }
    }

    FUNC_4(VAR_2, VAR_3);
    VAR_4->status = VAR_1;


    if (VAR_6) {
        VAR_4->connected_time = FUNC_5();
    } else {
        VAR_4->connected_time = 0;
    }

    if (VAR_2->onion_status && VAR_2->onion_num_conns < VAR_0) {
        VAR_4->onion = 1;
        ++VAR_2->onion_num_conns;
    }

    return 0;
}
