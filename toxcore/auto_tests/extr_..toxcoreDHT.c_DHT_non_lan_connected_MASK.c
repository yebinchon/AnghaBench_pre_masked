
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {int ip; } ;
struct TYPE_10__ {TYPE_2__ ip_port; int timestamp; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_11__ {TYPE_1__ ip_port; int timestamp; } ;
struct TYPE_13__ {TYPE_3__ assoc6; TYPE_4__ assoc4; } ;
struct TYPE_12__ {TYPE_6__* close_clientlist; } ;
typedef TYPE_5__ DHT ;
typedef TYPE_6__ Client_data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

int FUNC_3(const DHT *VAR_2)
{
    uint32_t VAR_3;
    FUNC_2();

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        const Client_data *VAR_4 = &VAR_2->close_clientlist[VAR_3];

        if (!FUNC_1(VAR_4->assoc4.timestamp, VAR_0) && FUNC_0(VAR_4->assoc4.ip_port.ip) == -1)
            return 1;

        if (!FUNC_1(VAR_4->assoc6.timestamp, VAR_0) && FUNC_0(VAR_4->assoc6.ip_port.ip) == -1)
            return 1;

    }

    return 0;
}
