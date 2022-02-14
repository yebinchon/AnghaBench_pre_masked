
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ family; } ;
struct TYPE_12__ {TYPE_1__ ip; } ;
struct TYPE_11__ {int proxy_info; int self_secret_key; int self_public_key; TYPE_2__* tcp_connections; } ;
struct TYPE_10__ {int status; int connection; } ;
typedef TYPE_2__ TCP_con ;
typedef TYPE_3__ TCP_Connections ;
typedef TYPE_4__ IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__,int const*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(TCP_Connections *VAR_5, IP_Port VAR_6, const uint8_t *VAR_7)
{
    if (VAR_6.ip.family == VAR_3) {
        VAR_6.ip.family = VAR_0;
    } else if (VAR_6.ip.family == VAR_4) {
        VAR_6.ip.family = VAR_1;
    }

    if (VAR_6.ip.family != VAR_0 && VAR_6.ip.family != VAR_1)
        return -1;

    int VAR_8 = FUNC_0(VAR_5);

    if (VAR_8 == -1)
        return -1;

    TCP_con *VAR_9 = &VAR_5->tcp_connections[VAR_8];


    VAR_9->connection = FUNC_1(VAR_6, VAR_7, VAR_5->self_public_key, VAR_5->self_secret_key,
                          &VAR_5->proxy_info);

    if (!VAR_9->connection)
        return -1;

    VAR_9->status = VAR_2;

    return VAR_8;
}
