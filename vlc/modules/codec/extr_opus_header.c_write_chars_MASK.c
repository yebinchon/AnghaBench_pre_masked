
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; int maxlen; unsigned char* data; } ;
typedef TYPE_1__ Packet ;



__attribute__((used)) static int FUNC_0(Packet *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    if (VAR_0->pos>VAR_0->maxlen-VAR_2)
        return 0;
    for (int VAR_3=0;VAR_3<VAR_2;VAR_3++)
        VAR_0->data[VAR_0->pos++] = VAR_1[VAR_3];
    return 1;
}
