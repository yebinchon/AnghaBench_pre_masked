
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_first; } ;
typedef TYPE_1__ fifo_t ;
typedef int fifo_item_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline fifo_item_t *FUNC_1(fifo_t *VAR_0)
{
    fifo_item_t *VAR_1;

    FUNC_0(VAR_0->p_first != ((void*)0));
    VAR_1 = VAR_0->p_first;

    return VAR_1;
}
