
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int connection_number_tcp; void* direct_lastrecv_timev6; void* direct_lastrecv_timev4; } ;
struct TYPE_12__ {int * uint32; } ;
struct TYPE_13__ {scalar_t__ family; TYPE_1__ ip6; } ;
struct TYPE_15__ {TYPE_2__ ip; } ;
struct TYPE_14__ {int tcp_c; } ;
typedef TYPE_3__ Net_Crypto ;
typedef TYPE_4__ IP_Port ;
typedef TYPE_5__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,TYPE_4__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int) ;
 void* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(Net_Crypto *VAR_3, int VAR_4, IP_Port VAR_5)
{
    Crypto_Connection *VAR_6 = FUNC_2(VAR_3, VAR_4);

    if (VAR_6 == 0)
        return -1;

    if (VAR_5.ip.family == VAR_0 || VAR_5.ip.family == VAR_1) {
        if (FUNC_0(VAR_3, VAR_4, VAR_5) != 0)
            return -1;

        if (VAR_5.ip.family == VAR_0) {
            VAR_6->direct_lastrecv_timev4 = FUNC_3();
        } else {
            VAR_6->direct_lastrecv_timev6 = FUNC_3();
        }

        return 0;
    } else if (VAR_5.ip.family == VAR_2) {
        if (FUNC_1(VAR_3->tcp_c, VAR_6->connection_number_tcp, VAR_5.ip.ip6.uint32[0]) == 0)
            return 1;
    }

    return -1;
}
