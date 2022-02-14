
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int sequnum; } ;
struct TYPE_6__ {int size; int bottom; int capacity; int top; void* last_queued_time; TYPE_2__** queue; } ;
typedef TYPE_1__ Group_JitterBuffer ;
typedef TYPE_2__ Group_Audio_Packet ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(Group_JitterBuffer *VAR_1, Group_Audio_Packet *VAR_2)
{
    uint16_t VAR_3 = VAR_2->sequnum;

    unsigned int VAR_4 = VAR_3 % VAR_1->size;

    if (!FUNC_1(VAR_1->last_queued_time, VAR_0)) {
        if ((uint32_t)(VAR_3 - VAR_1->bottom) > (1 << 15)) {

            return -1;
        }
    }

    if ((uint32_t)(VAR_3 - VAR_1->bottom) > VAR_1->size) {
        FUNC_0(VAR_1);
        VAR_1->bottom = VAR_3 - VAR_1->capacity;
        VAR_1->queue[VAR_4] = VAR_2;
        VAR_1->top = VAR_3 + 1;
        VAR_1->last_queued_time = FUNC_2();
        return 0;
    }

    if (VAR_1->queue[VAR_4])
        return -1;

    VAR_1->queue[VAR_4] = VAR_2;

    if ((VAR_3 - VAR_1->bottom) >= (VAR_1->top - VAR_1->bottom))
        VAR_1->top = VAR_3 + 1;

    VAR_1->last_queued_time = FUNC_2();
    return 0;
}
