
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p; } ;
typedef TYPE_1__ vout_thread_t ;
typedef int vout_thread_sys_t ;
typedef int vlc_object_t ;


 TYPE_1__* FUNC_0 (int *,int,char*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static vout_thread_t *FUNC_2(vlc_object_t *VAR_0)
{

    vout_thread_t *VAR_1 = FUNC_0(VAR_0,
                                            sizeof(*VAR_1) + sizeof(*VAR_1->p),
                                            "video output");
    if (!VAR_1)
        return ((void*)0);

    FUNC_1(VAR_1);

    vout_thread_sys_t *VAR_2 = (vout_thread_sys_t *)&VAR_1[1];

    VAR_1->p = VAR_2;
    return VAR_1;
}
