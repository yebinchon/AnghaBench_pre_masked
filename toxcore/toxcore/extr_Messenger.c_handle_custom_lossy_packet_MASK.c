
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int lossy_packethandler_userdata; int (* lossy_packethandler ) (TYPE_3__*,int,size_t const*,int ,int ) ;TYPE_2__* friendlist; } ;
struct TYPE_8__ {TYPE_1__* lossy_rtp_packethandlers; } ;
struct TYPE_7__ {int (* function ) (TYPE_3__*,int,size_t const*,int ,int ) ;int object; } ;
typedef TYPE_3__ Messenger ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int,size_t const*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int,size_t const*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, int VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    Messenger *VAR_6 = VAR_2;

    if (FUNC_0(VAR_6, VAR_3))
        return 1;

    if (VAR_4[0] < (VAR_0 + VAR_1)) {
        if (VAR_6->friendlist[VAR_3].lossy_rtp_packethandlers[VAR_4[0] % VAR_1].function)
            return VAR_6->friendlist[VAR_3].lossy_rtp_packethandlers[VAR_4[0] % VAR_1].function(
                       VAR_6, VAR_3, VAR_4, VAR_5, VAR_6->friendlist[VAR_3].lossy_rtp_packethandlers[VAR_4[0] %
                               VAR_1].object);

        return 1;
    }

    if (VAR_6->lossy_packethandler)
        VAR_6->lossy_packethandler(VAR_6, VAR_3, VAR_4, VAR_5, VAR_6->lossy_packethandler_userdata);

    return 1;
}
