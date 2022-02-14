
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_12__ {scalar_t__ family; } ;
struct TYPE_13__ {TYPE_2__ ip; } ;
struct TYPE_16__ {TYPE_3__ ip_port; int public_key; } ;
struct TYPE_15__ {unsigned int tcp_connections_length; } ;
struct TYPE_14__ {scalar_t__ status; TYPE_1__* connection; } ;
struct TYPE_11__ {TYPE_3__ ip_port; int public_key; } ;
typedef TYPE_4__ TCP_con ;
typedef TYPE_5__ TCP_Connections ;
typedef TYPE_6__ Node_format ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int FUNC_2 () ;

unsigned int FUNC_3(TCP_Connections *VAR_6, Node_format *VAR_7, uint16_t VAR_8)
{
    unsigned int VAR_9, VAR_10 = 0, VAR_11 = FUNC_2();

    for (VAR_9 = 0; (VAR_9 < VAR_6->tcp_connections_length) && (VAR_10 < VAR_8); ++VAR_9) {
        TCP_con *VAR_12 = FUNC_0(VAR_6, (VAR_9 + VAR_11) % VAR_6->tcp_connections_length);

        if (!VAR_12) {
            continue;
        }

        if (VAR_12->status == VAR_2) {
            FUNC_1(VAR_7[VAR_10].public_key, VAR_12->connection->public_key, VAR_5);
            VAR_7[VAR_10].ip_port = VAR_12->connection->ip_port;

            if (VAR_7[VAR_10].ip_port.ip.family == VAR_0) {
                VAR_7[VAR_10].ip_port.ip.family = VAR_3;
            } else if (VAR_7[VAR_10].ip_port.ip.family == VAR_1) {
                VAR_7[VAR_10].ip_port.ip.family = VAR_4;
            }

            ++VAR_10;
        }
    }

    return VAR_10;
}
