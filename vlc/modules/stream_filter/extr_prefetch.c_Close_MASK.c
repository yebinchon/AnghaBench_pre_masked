
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct stream_ctrl {struct stream_ctrl* content_type; struct stream_ctrl* buffer; struct stream_ctrl* next; struct stream_ctrl* controls; int lock; int wait_data; int wait_space; int interrupt; int thread; } ;
struct TYPE_2__ {struct stream_ctrl* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef struct stream_ctrl stream_sys_t ;


 int FUNC_0 (struct stream_ctrl*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7 (vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    stream_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1(VAR_2->thread);
    FUNC_4(VAR_2->interrupt);
    FUNC_5(VAR_2->thread, ((void*)0));
    FUNC_3(VAR_2->interrupt);
    FUNC_2(&VAR_2->wait_space);
    FUNC_2(&VAR_2->wait_data);
    FUNC_6(&VAR_2->lock);

    while(VAR_2->controls)
    {
        struct stream_ctrl *VAR_3 = VAR_2->controls;
        VAR_2->controls = VAR_3->next;
        FUNC_0(VAR_3);
    }
    FUNC_0(VAR_2->buffer);
    FUNC_0(VAR_2->content_type);
    FUNC_0(VAR_2);
}
