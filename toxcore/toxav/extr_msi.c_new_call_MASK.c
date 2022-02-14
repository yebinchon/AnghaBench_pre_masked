
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int friend_number; struct TYPE_9__* prev; struct TYPE_9__* next; TYPE_1__* session; } ;
struct TYPE_8__ {int calls_tail; int calls_head; TYPE_2__** calls; } ;
typedef TYPE_1__ MSISession ;
typedef TYPE_2__ MSICall ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_2__**,int) ;

MSICall *FUNC_4 (MSISession *VAR_0, uint32_t VAR_1)
{
    FUNC_0(VAR_0);

    MSICall *VAR_2 = FUNC_1(sizeof(MSICall), 1);

    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_2->session = VAR_0;
    VAR_2->friend_number = VAR_1;

    if (VAR_0->calls == ((void*)0)) {
        VAR_0->calls = FUNC_1 (sizeof(MSICall *), VAR_1 + 1);

        if (VAR_0->calls == ((void*)0)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }

        VAR_0->calls_tail = VAR_0->calls_head = VAR_1;

    } else if (VAR_0->calls_tail < VAR_1) {
        void *VAR_3 = FUNC_3(VAR_0->calls, sizeof(MSICall *) * (VAR_1 + 1));

        if (VAR_3 == ((void*)0)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }

        VAR_0->calls = VAR_3;


        uint32_t VAR_4 = VAR_0->calls_tail + 1;

        for (; VAR_4 < VAR_1; VAR_4 ++)
            VAR_0->calls[VAR_4] = ((void*)0);

        VAR_2->prev = VAR_0->calls[VAR_0->calls_tail];
        VAR_0->calls[VAR_0->calls_tail]->next = VAR_2;

        VAR_0->calls_tail = VAR_1;

    } else if (VAR_0->calls_head > VAR_1) {
        VAR_2->next = VAR_0->calls[VAR_0->calls_head];
        VAR_0->calls[VAR_0->calls_head]->prev = VAR_2;
        VAR_0->calls_head = VAR_1;
    }

    VAR_0->calls[VAR_1] = VAR_2;
    return VAR_2;
}
