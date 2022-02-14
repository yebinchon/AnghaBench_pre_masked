
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tcp_connections_length; } ;
struct TYPE_7__ {scalar_t__ status; int connected_time; int lock_count; int onion; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,unsigned int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_3(TCP_Connections *VAR_3)
{
    if (VAR_3->tcp_connections_length == 0)
        return;

    unsigned int VAR_4, VAR_5 = 0, VAR_6 = 0, VAR_7[VAR_3->tcp_connections_length];

    for (VAR_4 = 0; VAR_4 < VAR_3->tcp_connections_length; ++VAR_4) {
        TCP_con *VAR_8 = FUNC_0(VAR_3, VAR_4);

        if (VAR_8) {
            if (VAR_8->status == VAR_2) {
                if (!VAR_8->onion && !VAR_8->lock_count && FUNC_1(VAR_8->connected_time, VAR_1)) {
                    VAR_7[VAR_6] = VAR_4;
                    ++VAR_6;
                }

                ++VAR_5;
            }
        }
    }

    if (VAR_5 <= VAR_0) {
        return;
    } else {
        unsigned int VAR_9 = VAR_5 - VAR_0;

        if (VAR_9 < VAR_6)
            VAR_6 = VAR_9;
    }

    for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
        FUNC_2(VAR_3, VAR_7[VAR_4]);
    }
}
