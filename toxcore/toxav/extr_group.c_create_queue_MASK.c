
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; unsigned int capacity; void* queue; } ;
typedef TYPE_1__ Group_JitterBuffer ;
typedef int Group_Audio_Packet ;


 void* FUNC_0 (int,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static Group_JitterBuffer *FUNC_2(unsigned int VAR_0)
{
    unsigned int VAR_1 = 1;

    while (VAR_1 <= VAR_0) {
        VAR_1 *= 2;
    }

    Group_JitterBuffer *VAR_2;

    if (!(VAR_2 = FUNC_0(sizeof(Group_JitterBuffer), 1))) return ((void*)0);

    if (!(VAR_2->queue = FUNC_0(sizeof(Group_Audio_Packet *), VAR_1))) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->size = VAR_1;
    VAR_2->capacity = VAR_0;
    return VAR_2;
}
