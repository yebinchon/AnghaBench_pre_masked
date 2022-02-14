
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int pa_stream ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_4__ {int mainloop; int context; int * stream; } ;
typedef TYPE_2__ demux_sys_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_14 (vlc_object_t *VAR_0)
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    pa_stream *VAR_3 = VAR_2->stream;

    if (FUNC_0(VAR_3 != ((void*)0))) {
        FUNC_11(VAR_2->mainloop);
        FUNC_1(VAR_3);
        FUNC_7(VAR_3, ((void*)0), ((void*)0));
        FUNC_5(VAR_3, ((void*)0), ((void*)0));
        FUNC_2(VAR_3, ((void*)0), ((void*)0));
        FUNC_3(VAR_3, ((void*)0), ((void*)0));
        FUNC_4(VAR_3, ((void*)0), ((void*)0));
        FUNC_6(VAR_3, ((void*)0), ((void*)0));
        FUNC_8(VAR_3, ((void*)0), ((void*)0));
        FUNC_9(VAR_3, ((void*)0), ((void*)0));
        FUNC_10(VAR_3);
        FUNC_12(VAR_2->mainloop);
    }

    FUNC_13(VAR_0, VAR_2->context, VAR_2->mainloop);
}
