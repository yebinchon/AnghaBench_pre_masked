
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ family; } ;
struct TYPE_8__ {TYPE_3__* net; int self_public_key; } ;
struct TYPE_7__ {void* ip; int port; } ;
typedef TYPE_1__ IP_Port ;
typedef TYPE_2__ DHT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (void**) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_1__,int *,int) ;

int FUNC_5(uint16_t VAR_4, DHT *VAR_5)
{
    uint8_t VAR_6[VAR_3 + 1];
    VAR_6[0] = VAR_2;
    FUNC_1(VAR_6 + 1, VAR_5->self_public_key);

    FUNC_3(VAR_5->net, VAR_4, VAR_6, 1 + VAR_3);

    int VAR_7 = -1;
    IP_Port VAR_8;
    VAR_8.port = VAR_4;


    if (VAR_5->net->family == VAR_1) {
        VAR_8.ip = FUNC_0(VAR_1, VAR_1);

        if (FUNC_2(&VAR_8.ip))
            if (FUNC_4(VAR_5->net, VAR_8, VAR_6, 1 + VAR_3) > 0)
                VAR_7 = 1;
    }


    VAR_8.ip = FUNC_0(VAR_5->net->family, VAR_0);

    if (FUNC_2(&VAR_8.ip))
        if (FUNC_4(VAR_5->net, VAR_8, VAR_6, 1 + VAR_3))
            VAR_7 = 1;

    return VAR_7;
}
