
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int proxy_info; int self_secret_key; int self_public_key; } ;
struct TYPE_7__ {scalar_t__ status; scalar_t__ unsleep; scalar_t__ connected_time; scalar_t__ sleep_count; scalar_t__ lock_count; int connection; int relay_pk; int ip_port; } ;
typedef TYPE_1__ TCP_con ;
typedef TYPE_2__ TCP_Connections ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(TCP_Connections *VAR_2, int VAR_3)
{
    TCP_con *VAR_4 = FUNC_0(VAR_2, VAR_3);

    if (!VAR_4)
        return -1;

    if (VAR_4->status != VAR_0)
        return -1;

    VAR_4->connection = FUNC_2(VAR_4->ip_port, VAR_4->relay_pk, VAR_2->self_public_key,
                          VAR_2->self_secret_key, &VAR_2->proxy_info);

    if (!VAR_4->connection) {
        FUNC_1(VAR_2, VAR_3);
        return -1;
    }

    VAR_4->lock_count = 0;
    VAR_4->sleep_count = 0;
    VAR_4->connected_time = 0;
    VAR_4->status = VAR_1;
    VAR_4->unsleep = 0;
    return 0;
}
