
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {unsigned int top; unsigned int bottom; unsigned int size; scalar_t__ capacity; int ** queue; } ;
typedef TYPE_1__ Group_JitterBuffer ;
typedef int Group_Audio_Packet ;



__attribute__((used)) static Group_Audio_Packet *FUNC_0(Group_JitterBuffer *VAR_0, int *VAR_1)
{
    if (VAR_0->top == VAR_0->bottom) {
        *VAR_1 = 0;
        return ((void*)0);
    }

    unsigned int VAR_2 = VAR_0->bottom % VAR_0->size;

    if (VAR_0->queue[VAR_2]) {
        Group_Audio_Packet *VAR_3 = VAR_0->queue[VAR_2];
        VAR_0->queue[VAR_2] = ((void*)0);
        ++VAR_0->bottom;
        *VAR_1 = 1;
        return VAR_3;
    }

    if ((uint32_t)(VAR_0->top - VAR_0->bottom) > VAR_0->capacity) {
        ++VAR_0->bottom;
        *VAR_1 = 2;
        return ((void*)0);
    }

    *VAR_1 = 0;
    return ((void*)0);
}
