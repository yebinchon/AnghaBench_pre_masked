
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int lossless_packethandler_userdata; int (* lossless_packethandler ) (TYPE_1__*,int,scalar_t__ const*,int ,int ) ;} ;
typedef TYPE_1__ Messenger ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__ const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    Messenger *VAR_6 = VAR_2;

    if (FUNC_0(VAR_6, VAR_3))
        return -1;

    if (VAR_4[0] < VAR_1)
        return -1;

    if (VAR_4[0] >= (VAR_1 + VAR_0))
        return -1;

    if (VAR_6->lossless_packethandler)
        VAR_6->lossless_packethandler(VAR_6, VAR_3, VAR_4, VAR_5, VAR_6->lossless_packethandler_userdata);

    return 1;
}
