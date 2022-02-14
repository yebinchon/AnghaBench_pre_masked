
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int control; int content_base; int tcp_sock; int rtcp_sock; int udp_sock; int fifo; int thread; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_4(VAR_2->thread);
    FUNC_5(VAR_2->thread, ((void*)0));

    FUNC_3(VAR_1);

    FUNC_0(VAR_2->fifo);
    FUNC_2(VAR_2->udp_sock);
    FUNC_2(VAR_2->rtcp_sock);
    FUNC_2(VAR_2->tcp_sock);
    FUNC_1(VAR_2->content_base);
    FUNC_1(VAR_2->control);
}
