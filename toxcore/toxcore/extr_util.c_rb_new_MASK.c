
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; void* data; } ;
typedef TYPE_1__ RingBuffer ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

RingBuffer *FUNC_2(int VAR_0)
{
    RingBuffer *VAR_1 = FUNC_0(sizeof(RingBuffer), 1);

    if (!VAR_1) return ((void*)0);

    VAR_1->size = VAR_0 + 1;

    if (!(VAR_1->data = FUNC_0(VAR_1->size, sizeof(void *)))) {
        FUNC_1(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
