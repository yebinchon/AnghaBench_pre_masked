
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
struct TYPE_5__ {scalar_t__ statusmessage_length; int statusmessage; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;
 int FUNC_1 (int ,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(const Messenger *VAR_1, int32_t VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (FUNC_0(VAR_1, VAR_2))
        return -1;

    if (VAR_4 > VAR_0)
        return -1;

    if (VAR_4)
        FUNC_1(VAR_1->friendlist[VAR_2].statusmessage, VAR_3, VAR_4);

    VAR_1->friendlist[VAR_2].statusmessage_length = VAR_4;
    return 0;
}
