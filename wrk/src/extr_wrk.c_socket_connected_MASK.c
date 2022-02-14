
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* thread; scalar_t__ written; int parser; } ;
typedef TYPE_2__ connection ;
typedef int aeEventLoop ;
struct TYPE_13__ {int host; } ;
struct TYPE_9__ {int connect; } ;
struct TYPE_12__ {TYPE_1__ errors; int loop; } ;
struct TYPE_11__ {int (* connect ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (int ,int,int ,int ,TYPE_2__*) ;
 TYPE_7__ VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(aeEventLoop *VAR_7, int VAR_8, void *VAR_9, int VAR_10) {
    connection *VAR_11 = VAR_9;

    switch (VAR_4.connect(VAR_11, VAR_3.host)) {
        case 129: break;
        case 130: goto error;
        case 128: return;
    }

    FUNC_1(&VAR_11->parser, VAR_2);
    VAR_11->written = 0;

    FUNC_0(VAR_11->thread->loop, VAR_8, VAR_0, VAR_5, VAR_11);
    FUNC_0(VAR_11->thread->loop, VAR_8, VAR_1, VAR_6, VAR_11);

    return;

  error:
    VAR_11->thread->errors.connect++;
    FUNC_2(VAR_11->thread, VAR_11);
}
