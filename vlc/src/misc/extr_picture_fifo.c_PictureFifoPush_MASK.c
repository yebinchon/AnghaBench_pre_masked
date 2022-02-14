
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_6__ {TYPE_1__** last_ptr; } ;
typedef TYPE_2__ picture_fifo_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(picture_fifo_t *VAR_0, picture_t *VAR_1)
{
    FUNC_0(!VAR_1->p_next);
    *VAR_0->last_ptr = VAR_1;
    VAR_0->last_ptr = &VAR_1->p_next;
}
