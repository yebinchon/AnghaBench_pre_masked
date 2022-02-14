
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int block_t ;
struct TYPE_5__ {int resource; } ;
typedef TYPE_2__ access_sys_t ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static block_t *FUNC_1(stream_t *VAR_0, bool *restrict VAR_1)
{
    access_sys_t *VAR_2 = VAR_0->p_sys;

    block_t *VAR_3 = FUNC_0(VAR_2->resource);
    if (VAR_3 == ((void*)0))
        *VAR_1 = 1;
    return VAR_3;
}
