
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_6__* thread; int parser; int buf; } ;
typedef TYPE_2__ connection ;
typedef int aeEventLoop ;
struct TYPE_8__ {int read; } ;
struct TYPE_11__ {size_t bytes; TYPE_1__ errors; } ;
struct TYPE_10__ {scalar_t__ (* readable ) (TYPE_2__*) ;int (* read ) (TYPE_2__*,size_t*) ;} ;




 size_t VAR_0 ;

 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int *,int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_6__*,TYPE_2__*) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,size_t*) ;

__attribute__((used)) static void FUNC_5(aeEventLoop *VAR_3, int VAR_4, void *VAR_5, int VAR_6) {
    connection *VAR_7 = VAR_5;
    size_t VAR_8;

    do {
        switch (VAR_2.read(VAR_7, &VAR_8)) {
            case 129: break;
            case 130: goto error;
            case 128: return;
        }

        if (FUNC_1(&VAR_7->parser, &VAR_1, VAR_7->buf, VAR_8) != VAR_8) goto error;
        if (VAR_8 == 0 && !FUNC_0(&VAR_7->parser)) goto error;

        VAR_7->thread->bytes += VAR_8;
    } while (VAR_8 == VAR_0 && VAR_2.readable(VAR_7) > 0);

    return;

  error:
    VAR_7->thread->errors.read++;
    FUNC_2(VAR_7->thread, VAR_7);
}
