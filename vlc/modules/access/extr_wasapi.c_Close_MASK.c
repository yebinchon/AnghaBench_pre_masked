
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_4__ {int * events; int client; int es; int thread; } ;
typedef TYPE_2__ demux_sys_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9 (vlc_object_t *VAR_2)
{
    demux_t *VAR_3 = (demux_t *)VAR_2;
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(((void*)0), VAR_0);
    FUNC_7(FUNC_4(VAR_5));

    FUNC_5(VAR_4->events[0]);
    FUNC_6(VAR_4->thread, VAR_1);
    FUNC_0(VAR_4->thread);

    FUNC_8(VAR_3->out, VAR_4->es);
    FUNC_3(VAR_4->client);
    FUNC_2();
    for (unsigned VAR_6 = 0; VAR_6 < 2; VAR_6++)
        FUNC_0(VAR_4->events[VAR_6]);
}
