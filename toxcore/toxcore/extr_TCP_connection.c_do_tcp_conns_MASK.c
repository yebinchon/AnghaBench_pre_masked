
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {unsigned int tcp_connections_length; } ;
struct TYPE_13__ {scalar_t__ status; scalar_t__ lock_count; scalar_t__ sleep_count; scalar_t__ unsleep; int connected_time; int onion; TYPE_11__* connection; } ;
struct TYPE_12__ {scalar_t__ status; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_11__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,unsigned int) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,unsigned int) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_8(TCP_Connections *VAR_6)
{
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_6->tcp_connections_length; ++VAR_7) {
        TCP_con *VAR_8 = FUNC_1(VAR_6, VAR_7);

        if (VAR_8) {
            if (VAR_8->status != VAR_4) {
                FUNC_0(VAR_8->connection);


                VAR_8 = FUNC_1(VAR_6, VAR_7);

                if (VAR_8->connection->status == VAR_1) {
                    if (VAR_8->status == VAR_3) {
                        FUNC_4(VAR_6, VAR_7);
                    } else {
                        FUNC_3(VAR_6, VAR_7);
                    }

                    continue;
                }

                if (VAR_8->status == VAR_5 && VAR_8->connection->status == VAR_0) {
                    FUNC_6(VAR_6, VAR_7);
                }

                if (VAR_8->status == VAR_3 && !VAR_8->onion && VAR_8->lock_count
                        && VAR_8->lock_count == VAR_8->sleep_count
                        && FUNC_2(VAR_8->connected_time, VAR_2)) {
                    FUNC_5(VAR_6, VAR_7);
                }
            }

            if (VAR_8->status == VAR_4 && VAR_8->unsleep) {
                FUNC_7(VAR_6, VAR_7);
            }
        }
    }
}
