
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* connections; } ;
struct TYPE_4__ {unsigned int tcp_connection; unsigned int status; int connection_id; } ;
typedef TYPE_2__ TCP_Connection_to ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(TCP_Connection_to *VAR_1, unsigned int VAR_2,
                                     unsigned int VAR_3, uint8_t VAR_4)
{
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
        if (VAR_1->connections[VAR_5].tcp_connection == (VAR_2 + 1)) {

            if (VAR_1->connections[VAR_5].status == VAR_3) {
                return -1;
            }

            VAR_1->connections[VAR_5].status = VAR_3;
            VAR_1->connections[VAR_5].connection_id = VAR_4;
            return VAR_5;
        }
    }

    return -1;
}
