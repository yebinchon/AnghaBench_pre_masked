
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int friend_number; struct TYPE_8__* prev; struct TYPE_8__* next; TYPE_2__* av; } ;
typedef TYPE_1__ ToxAVCall ;
struct TYPE_9__ {int calls_tail; int calls_head; TYPE_1__** calls; int m; } ;
typedef TYPE_2__ ToxAV ;
typedef int TOXAV_ERR_CALL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_2__*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (TYPE_1__**,int) ;

ToxAVCall *FUNC_6(ToxAV *VAR_5, uint32_t VAR_6, TOXAV_ERR_CALL *VAR_7)
{

    TOXAV_ERR_CALL VAR_8 = VAR_4;
    ToxAVCall *VAR_9 = ((void*)0);

    if (FUNC_3(VAR_5->m, VAR_6) == 0) {
        VAR_8 = VAR_2;
        goto END;
    }

    if (FUNC_4(VAR_5->m, VAR_6) < 1) {
        VAR_8 = VAR_1;
        goto END;
    }

    if (FUNC_0(VAR_5, VAR_6) != ((void*)0)) {
        VAR_8 = VAR_0;
        goto END;
    }


    VAR_9 = FUNC_1(sizeof(ToxAVCall), 1);

    if (VAR_9 == ((void*)0)) {
        VAR_8 = VAR_3;
        goto END;
    }

    VAR_9->av = VAR_5;
    VAR_9->friend_number = VAR_6;

    if (VAR_5->calls == ((void*)0)) {
        VAR_5->calls = FUNC_1 (sizeof(ToxAVCall *), VAR_6 + 1);

        if (VAR_5->calls == ((void*)0)) {
            FUNC_2(VAR_9);
            VAR_9 = ((void*)0);
            VAR_8 = VAR_3;
            goto END;
        }

        VAR_5->calls_tail = VAR_5->calls_head = VAR_6;

    } else if (VAR_5->calls_tail < VAR_6) {
        void *VAR_10 = FUNC_5(VAR_5->calls, sizeof(ToxAVCall *) * (VAR_6 + 1));

        if (VAR_10 == ((void*)0)) {
            FUNC_2(VAR_9);
            VAR_9 = ((void*)0);
            VAR_8 = VAR_3;
            goto END;
        }

        VAR_5->calls = VAR_10;


        uint32_t VAR_11 = VAR_5->calls_tail + 1;

        for (; VAR_11 < VAR_6; VAR_11 ++)
            VAR_5->calls[VAR_11] = ((void*)0);

        VAR_9->prev = VAR_5->calls[VAR_5->calls_tail];
        VAR_5->calls[VAR_5->calls_tail]->next = VAR_9;

        VAR_5->calls_tail = VAR_6;

    } else if (VAR_5->calls_head > VAR_6) {
        VAR_9->next = VAR_5->calls[VAR_5->calls_head];
        VAR_5->calls[VAR_5->calls_head]->prev = VAR_9;
        VAR_5->calls_head = VAR_6;
    }

    VAR_5->calls[VAR_6] = VAR_9;

END:

    if (VAR_7)
        *VAR_7 = VAR_8;

    return VAR_9;
}
