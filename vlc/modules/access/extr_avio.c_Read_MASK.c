
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;
struct TYPE_5__ {int context; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    access_sys_t *VAR_3 = VAR_0->p_sys;

    int VAR_4 = FUNC_0(VAR_3->context, VAR_1, VAR_2);
    if (VAR_4 < 0)
        VAR_4 = 0;
    return VAR_4;
}
