
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {int connections; TYPE_2__* cs; int start; int * loop; int L; } ;
typedef TYPE_1__ thread ;
struct TYPE_10__ {char* request; size_t length; int delayed; int * ssl; TYPE_1__* thread; } ;
typedef TYPE_2__ connection ;
typedef int aeEventLoop ;
struct TYPE_11__ {int delay; scalar_t__ ctx; int dynamic; } ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_7__ VAR_1 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char**,size_t*) ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;

void *FUNC_9(void *VAR_3) {
    thread *VAR_4 = VAR_3;

    char *VAR_5 = ((void*)0);
    size_t VAR_6 = 0;

    if (!VAR_1.dynamic) {
        FUNC_5(VAR_4->L, &VAR_5, &VAR_6);
    }

    VAR_4->cs = FUNC_7(VAR_4->connections * sizeof(connection));
    connection *VAR_7 = VAR_4->cs;

    for (uint64_t VAR_8 = 0; VAR_8 < VAR_4->connections; VAR_8++, VAR_7++) {
        VAR_7->thread = VAR_4;
        VAR_7->ssl = VAR_1.ctx ? FUNC_0(VAR_1.ctx) : ((void*)0);
        VAR_7->request = VAR_5;
        VAR_7->length = VAR_6;
        VAR_7->delayed = VAR_1.delay;
        FUNC_4(VAR_4, VAR_7);
    }

    aeEventLoop *VAR_9 = VAR_4->loop;
    FUNC_1(VAR_9, VAR_0, VAR_2, VAR_4, ((void*)0));

    VAR_4->start = FUNC_6();
    FUNC_3(VAR_9);

    FUNC_2(VAR_9);
    FUNC_8(VAR_4->cs);

    return ((void*)0);
}
