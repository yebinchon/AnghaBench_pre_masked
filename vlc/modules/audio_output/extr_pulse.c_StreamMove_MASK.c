
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pa_operation ;
struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_8__ {int mainloop; int context; int * stream; int sink_force; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int * FUNC_4 (int ,int ,char const*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_11(audio_output_t *VAR_0, const char *VAR_1)
{
    aout_sys_t *VAR_2 = VAR_0->sys;

    if (VAR_2->stream == ((void*)0))
    {
        FUNC_3(VAR_0, "will connect to sink %s", VAR_1);
        FUNC_1(VAR_2->sink_force);
        VAR_2->sink_force = FUNC_9(VAR_1);
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    pa_operation *VAR_3;
    uint32_t VAR_4 = FUNC_6(VAR_2->stream);

    FUNC_7(VAR_2->mainloop);
    VAR_3 = FUNC_4(VAR_2->context, VAR_4, VAR_1,
                                            ((void*)0), ((void*)0));
    if (FUNC_2(VAR_3 != ((void*)0))) {
        FUNC_5(VAR_3);
        FUNC_3(VAR_0, "moving to sink %s", VAR_1);
    } else
        FUNC_10(VAR_0, "cannot move sink input", VAR_2->context);
    FUNC_8(VAR_2->mainloop);

    return (VAR_3 != ((void*)0)) ? 0 : -1;
}
