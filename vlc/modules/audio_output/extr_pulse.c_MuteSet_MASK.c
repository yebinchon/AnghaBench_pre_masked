
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pa_operation ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int flags_force; int mainloop; int context; int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(audio_output_t *VAR_2, bool VAR_3)
{
    aout_sys_t *VAR_4 = VAR_2->sys;

    if (VAR_4->stream == ((void*)0))
    {
        VAR_4->flags_force &= ~(VAR_0|VAR_1);
        VAR_4->flags_force |=
            VAR_3 ? VAR_0 : VAR_1;
        FUNC_0(VAR_2, VAR_3);
        return 0;
    }

    pa_operation *VAR_5;
    uint32_t VAR_6 = FUNC_4(VAR_4->stream);
    FUNC_5(VAR_4->mainloop);
    VAR_5 = FUNC_2(VAR_4->context, VAR_6, VAR_3, ((void*)0), ((void*)0));
    if (FUNC_1(VAR_5 != ((void*)0)))
        FUNC_3(VAR_5);
    FUNC_6(VAR_4->mainloop);

    return 0;
}
