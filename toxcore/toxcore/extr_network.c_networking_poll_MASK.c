
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ family; TYPE_1__* packethandlers; int sock; } ;
struct TYPE_4__ {int object; int (* function ) (int ,int ,size_t*,int) ;} ;
typedef TYPE_2__ Networking_Core ;
typedef int IP_Port ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,size_t*,int*) ;
 int FUNC_2 (int ,int ,size_t*,int) ;
 int FUNC_3 () ;

void FUNC_4(Networking_Core *VAR_1)
{
    if (VAR_1->family == 0)
        return;

    FUNC_3();

    IP_Port VAR_2;
    uint8_t VAR_3[VAR_0];
    uint32_t VAR_4;

    while (FUNC_1(VAR_1->sock, &VAR_2, VAR_3, &VAR_4) != -1) {
        if (VAR_4 < 1) continue;

        if (!(VAR_1->packethandlers[VAR_3[0]].function)) {
            FUNC_0("[%02u] -- Packet has no handler", VAR_3[0]);
            continue;
        }

        VAR_1->packethandlers[VAR_3[0]].function(VAR_1->packethandlers[VAR_3[0]].object, VAR_2, VAR_3, VAR_4);
    }
}
