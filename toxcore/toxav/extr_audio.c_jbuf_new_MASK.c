
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct RTPMessage {int dummy; } ;
struct JitterBuffer {unsigned int size; int capacity; void* queue; } ;


 void* FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct JitterBuffer*) ;

__attribute__((used)) static struct JitterBuffer *FUNC_2(uint32_t VAR_0)
{
    unsigned int VAR_1 = 1;

    while (VAR_1 <= (VAR_0 * 4)) {
        VAR_1 *= 2;
    }

    struct JitterBuffer *VAR_2;

    if (!(VAR_2 = FUNC_0(sizeof(struct JitterBuffer), 1))) return ((void*)0);

    if (!(VAR_2->queue = FUNC_0(sizeof(struct RTPMessage *), VAR_1))) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }

    VAR_2->size = VAR_1;
    VAR_2->capacity = VAR_0;
    return VAR_2;
}
