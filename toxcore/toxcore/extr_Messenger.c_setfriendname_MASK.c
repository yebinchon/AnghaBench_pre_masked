
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {int name; scalar_t__ name_length; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,int const*,scalar_t__) ;

int FUNC_2(Messenger *VAR_1, int32_t VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    if (VAR_4 > VAR_0 || VAR_4 == 0)
        return -1;

    VAR_1->friendlist[VAR_2].name_length = VAR_4;
    FUNC_1(VAR_1->friendlist[VAR_2].name, VAR_3, VAR_4);
    return 0;
}
