
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int sequnum; } ;
struct RTPMessage {TYPE_1__ header; } ;
struct JitterBuffer {int size; int bottom; int capacity; int top; struct RTPMessage** queue; } ;


 int FUNC_0 (char*,struct JitterBuffer*) ;
 int FUNC_1 (struct JitterBuffer*) ;

__attribute__((used)) static int FUNC_2(struct JitterBuffer *VAR_0, struct RTPMessage *VAR_1)
{
    uint16_t VAR_2 = VAR_1->header.sequnum;

    unsigned int VAR_3 = VAR_2 % VAR_0->size;

    if ((uint32_t)(VAR_2 - VAR_0->bottom) > VAR_0->size) {
        FUNC_0("Clearing filled jitter buffer: %p", VAR_0);

        FUNC_1(VAR_0);
        VAR_0->bottom = VAR_2 - VAR_0->capacity;
        VAR_0->queue[VAR_3] = VAR_1;
        VAR_0->top = VAR_2 + 1;
        return 0;
    }

    if (VAR_0->queue[VAR_3])
        return -1;

    VAR_0->queue[VAR_3] = VAR_1;

    if ((VAR_2 - VAR_0->bottom) >= (VAR_0->top - VAR_0->bottom))
        VAR_0->top = VAR_2 + 1;

    return 0;
}
