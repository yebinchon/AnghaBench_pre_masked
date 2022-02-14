
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {struct TYPE_5__* p_prev_s16_buff; int fifo; int gl; int thread; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(vlc_object_t *VAR_0)
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;


    FUNC_2(VAR_2->thread);
    FUNC_4(VAR_2->thread, ((void*)0));


    FUNC_3(VAR_2->gl);
    FUNC_0(VAR_2->fifo);
    FUNC_1(VAR_2->p_prev_s16_buff);
    FUNC_1(VAR_2);
}
