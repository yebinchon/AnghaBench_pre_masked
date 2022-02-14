
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int write; } ;
struct TYPE_11__ {TYPE_1__ errors; int L; } ;
typedef TYPE_2__ thread ;
struct TYPE_12__ {int written; char* request; size_t length; int pending; int start; scalar_t__ delayed; TYPE_2__* thread; } ;
typedef TYPE_3__ connection ;
typedef int aeEventLoop ;
struct TYPE_14__ {int pipeline; scalar_t__ dynamic; } ;
struct TYPE_13__ {int (* write ) (TYPE_3__*,char*,size_t,size_t*) ;} ;


 int VAR_0 ;



 int FUNC_0 (int *,int ,int ,TYPE_3__*,int *) ;
 int FUNC_1 (int *,int,int ) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char**,size_t*) ;
 TYPE_5__ VAR_3 ;
 int FUNC_5 (TYPE_3__*,char*,size_t,size_t*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(aeEventLoop *VAR_4, int VAR_5, void *VAR_6, int VAR_7) {
    connection *VAR_8 = VAR_6;
    thread *VAR_9 = VAR_8->thread;

    if (VAR_8->delayed) {
        uint64_t VAR_10 = FUNC_3(VAR_9->L);
        FUNC_1(VAR_4, VAR_5, VAR_0);
        FUNC_0(VAR_4, VAR_10, VAR_2, VAR_8, ((void*)0));
        return;
    }

    if (!VAR_8->written) {
        if (VAR_1.dynamic) {
            FUNC_4(VAR_9->L, &VAR_8->request, &VAR_8->length);
        }
        VAR_8->start = FUNC_6();
        VAR_8->pending = VAR_1.pipeline;
    }

    char *VAR_11 = VAR_8->request + VAR_8->written;
    size_t VAR_12 = VAR_8->length - VAR_8->written;
    size_t VAR_13;

    switch (VAR_3.write(VAR_8, VAR_11, VAR_12, &VAR_13)) {
        case 129: break;
        case 130: goto error;
        case 128: return;
    }

    VAR_8->written += VAR_13;
    if (VAR_8->written == VAR_8->length) {
        VAR_8->written = 0;
        FUNC_1(VAR_4, VAR_5, VAR_0);
    }

    return;

  error:
    VAR_9->errors.write++;
    FUNC_2(VAR_9, VAR_8);
}
