
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_logger {int * ops; } ;
struct TYPE_3__ {struct vlc_logger logger; struct vlc_logger* sink; int * head; int ** tailp; int lock; } ;
typedef TYPE_1__ vlc_logger_early_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct vlc_logger *FUNC_3(struct vlc_logger *VAR_1)
{
    vlc_logger_early_t *VAR_2 = FUNC_0(sizeof (*VAR_2));
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->logger.ops = &VAR_0;
    FUNC_2(&VAR_2->lock);
    VAR_2->head = ((void*)0);
    VAR_2->tailp = &VAR_2->head;
    VAR_2->sink = VAR_1;
    return &VAR_2->logger;
}
