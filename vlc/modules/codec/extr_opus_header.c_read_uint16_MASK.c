
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int pos; int maxlen; scalar_t__* data; } ;
typedef TYPE_1__ ROPacket ;



__attribute__((used)) static int FUNC_0(ROPacket *VAR_0, uint16_t *VAR_1)
{
    if (VAR_0->pos>VAR_0->maxlen-2)
        return 0;
    *VAR_1 = (uint16_t)VAR_0->data[VAR_0->pos ];
    *VAR_1 |= (uint16_t)VAR_0->data[VAR_0->pos+1]<<8;
    VAR_0->pos += 2;
    return 1;
}
