
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_7__ {int timestamp; } ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_9__ {TYPE_2__ assoc6; TYPE_1__ assoc4; } ;
struct TYPE_8__ {TYPE_4__* close_clientlist; } ;
typedef TYPE_3__ DHT ;
typedef TYPE_4__ Client_data ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

int FUNC_2(const DHT *VAR_2)
{
    uint32_t VAR_3;
    FUNC_1();

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        const Client_data *VAR_4 = &VAR_2->close_clientlist[VAR_3];

        if (!FUNC_0(VAR_4->assoc4.timestamp, VAR_0) ||
                !FUNC_0(VAR_4->assoc6.timestamp, VAR_0))
            return 1;
    }

    return 0;
}
