
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int * p_mount; } ;
typedef TYPE_3__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int (*) (TYPE_1__*)) ;

__attribute__((used)) static int
FUNC_2(stream_t *VAR_0, bool (*VAR_1)(stream_t *))
{
    access_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_0(VAR_2->p_mount != ((void*)0));
    return FUNC_1(VAR_0, VAR_2->p_mount, VAR_1);
}
