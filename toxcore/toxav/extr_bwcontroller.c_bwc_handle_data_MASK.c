
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct BWCMessage {int dummy; } ;
typedef int Messenger ;


 int FUNC_0 (void*,struct BWCMessage*) ;

int FUNC_1(Messenger *VAR_0, uint32_t VAR_1, const uint8_t *VAR_2, uint16_t VAR_3, void *VAR_4)
{
    if (VAR_3 - 1 != sizeof(struct BWCMessage))
        return -1;


    return FUNC_0(VAR_4, (struct BWCMessage *) (VAR_2 + 1));
}
