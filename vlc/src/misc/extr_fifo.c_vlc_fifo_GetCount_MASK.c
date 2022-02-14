
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_depth; int lock; } ;
typedef TYPE_1__ vlc_fifo_t ;


 int FUNC_0 (int *) ;

size_t FUNC_1(const vlc_fifo_t *VAR_0)
{
    FUNC_0(&VAR_0->lock);
    return VAR_0->i_depth;
}
