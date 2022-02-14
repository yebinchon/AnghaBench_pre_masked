
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t int32_t ;
struct TYPE_9__ {TYPE_3__* friendlist; } ;
struct TYPE_8__ {TYPE_1__* file_receiving; TYPE_2__* file_sending; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_6__ {scalar_t__ status; } ;
typedef TYPE_4__ Messenger ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(const Messenger *VAR_2, int32_t VAR_3)
{
    uint32_t VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
        if (VAR_2->friendlist[VAR_3].file_sending[VAR_4].status != VAR_0)
            VAR_2->friendlist[VAR_3].file_sending[VAR_4].status = VAR_0;

        if (VAR_2->friendlist[VAR_3].file_receiving[VAR_4].status != VAR_0)
            VAR_2->friendlist[VAR_3].file_receiving[VAR_4].status = VAR_0;
    }
}
