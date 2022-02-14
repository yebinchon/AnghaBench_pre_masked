
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int send_nodes_ok; int send_nodes_pingedid; int send_nodes_timestamp; } ;
struct TYPE_18__ {TYPE_2__ hardening; } ;
struct TYPE_14__ {int family; } ;
struct TYPE_17__ {TYPE_1__ ip; } ;
struct TYPE_16__ {TYPE_4__ ip_port; struct TYPE_16__* public_key; } ;
typedef TYPE_3__ Node_format ;
typedef TYPE_4__ IP_Port ;
typedef TYPE_5__ IPPTsPng ;
typedef int DHT ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int *,TYPE_4__,TYPE_3__*,int const*,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int const*,int) ;
 int FUNC_5 (int ,int const*) ;
 int FUNC_6 (TYPE_3__*,int,int ,int const*,int,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, IP_Port VAR_5, const uint8_t *VAR_6, const uint8_t *VAR_7,
                            uint16_t VAR_8)
{
    DHT *VAR_9 = VAR_4;

    if (VAR_8 < 2) {
        return 1;
    }

    switch (VAR_7[0]) {
        case 129: {
            if (VAR_8 != VAR_1)
                return 1;

            Node_format VAR_10, VAR_11;
            VAR_10.ip_port = VAR_5;
            FUNC_4(VAR_10.public_key, VAR_6, VAR_3);
            FUNC_4(&VAR_11, VAR_7 + 1, sizeof(Node_format));

            if (FUNC_1(VAR_9, VAR_11.ip_port, VAR_11.public_key, VAR_7 + 1 + sizeof(Node_format), &VAR_10) == -1)
                return 1;

            return 0;
        }

        case 128: {
            if (VAR_8 <= VAR_3 + 1)
                return 1;

            if (VAR_8 > 1 + VAR_3 + sizeof(Node_format) * VAR_2)
                return 1;

            uint16_t VAR_12 = VAR_8 - 1 - VAR_3;
            Node_format VAR_13[VAR_2];
            int VAR_14 = FUNC_6(VAR_13, VAR_2, 0, VAR_7 + 1 + VAR_3, VAR_12, 0);



            if (VAR_14 <= 0)
                return 1;


            if (FUNC_2(VAR_9, VAR_13, VAR_14) < (uint32_t)((VAR_14 + 2) / 2))
                return 1;

            IPPTsPng *VAR_15 = FUNC_0(VAR_9, VAR_7 + 1, VAR_13[0].ip_port.ip.family);

            if (VAR_15 == ((void*)0))
                return 1;

            if (FUNC_3(VAR_15->hardening.send_nodes_timestamp, VAR_0))
                return 1;

            if (FUNC_5(VAR_15->hardening.send_nodes_pingedid, VAR_6) != 0)
                return 1;


            VAR_15->hardening.send_nodes_ok = 1;
            return 0;
        }
    }

    return 1;
}
