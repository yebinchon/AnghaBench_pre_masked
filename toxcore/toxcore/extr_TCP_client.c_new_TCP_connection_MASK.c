
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int sock_t ;
struct TYPE_17__ {scalar_t__ family; } ;
struct TYPE_22__ {TYPE_1__ ip; } ;
struct TYPE_18__ {scalar_t__ family; } ;
struct TYPE_19__ {TYPE_2__ ip; } ;
struct TYPE_20__ {int proxy_type; TYPE_3__ ip_port; } ;
struct TYPE_21__ {scalar_t__ kill_at; int status; TYPE_4__ proxy_info; TYPE_6__ ip_port; int shared_key; int public_key; int self_public_key; int sock; } ;
typedef TYPE_4__ TCP_Proxy_Info ;
typedef TYPE_5__ TCP_Client_Connection ;
typedef TYPE_6__ IP_Port ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;



 TYPE_5__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__,TYPE_4__*) ;
 int VAR_8 ;
 int FUNC_2 (int ,scalar_t__ const*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__ const*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_14 () ;

TCP_Client_Connection *FUNC_15(IP_Port VAR_9, const uint8_t *VAR_10, const uint8_t *VAR_11,
        const uint8_t *VAR_12, TCP_Proxy_Info *VAR_13)
{
    if (FUNC_7() != 0) {
        return ((void*)0);
    }

    if (VAR_9.ip.family != VAR_0 && VAR_9.ip.family != VAR_1)
        return ((void*)0);

    uint8_t VAR_14 = VAR_9.ip.family;

    TCP_Proxy_Info VAR_15;

    if (VAR_13 == ((void*)0)) {
        VAR_15.proxy_type = 129;
        VAR_13 = &VAR_15;
    }

    if (VAR_13->proxy_type != 129) {
        VAR_14 = VAR_13->ip_port.ip.family;
    }

    sock_t VAR_16 = FUNC_13(VAR_14, VAR_3, VAR_2);

    if (!FUNC_12(VAR_16)) {
        return ((void*)0);
    }

    if (!FUNC_11(VAR_16)) {
        FUNC_5(VAR_16);
        return 0;
    }

    if (!(FUNC_10(VAR_16) && FUNC_1(VAR_16, VAR_9, VAR_13))) {
        FUNC_5(VAR_16);
        return ((void*)0);
    }

    TCP_Client_Connection *VAR_17 = FUNC_0(sizeof(TCP_Client_Connection), 1);

    if (VAR_17 == ((void*)0)) {
        FUNC_5(VAR_16);
        return ((void*)0);
    }

    VAR_17->sock = VAR_16;
    FUNC_6(VAR_17->public_key, VAR_10, VAR_8);
    FUNC_6(VAR_17->self_public_key, VAR_11, VAR_8);
    FUNC_2(VAR_17->public_key, VAR_12, VAR_17->shared_key);
    VAR_17->ip_port = VAR_9;
    VAR_17->proxy_info = *VAR_13;

    switch (VAR_13->proxy_type) {
        case 130:
            VAR_17->status = VAR_5;
            FUNC_8(VAR_17);
            break;

        case 128:
            VAR_17->status = VAR_6;
            FUNC_9(VAR_17);
            break;

        case 129:
            VAR_17->status = VAR_4;

            if (FUNC_4(VAR_17) == -1) {
                FUNC_5(VAR_16);
                FUNC_3(VAR_17);
                return ((void*)0);
            }

            break;
    }

    VAR_17->kill_at = FUNC_14() + VAR_7;

    return VAR_17;
}
