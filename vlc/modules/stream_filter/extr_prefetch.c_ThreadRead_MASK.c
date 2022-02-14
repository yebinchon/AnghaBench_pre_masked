
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;
    int VAR_4 = FUNC_4();

    FUNC_2(&VAR_3->lock);
    FUNC_0(VAR_2 > 0);

    ssize_t VAR_5 = FUNC_5(VAR_0->s, VAR_1, VAR_2);

    FUNC_1(&VAR_3->lock);
    FUNC_3(VAR_4);
    return VAR_5;
}
