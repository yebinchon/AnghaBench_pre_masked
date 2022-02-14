
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int * stream; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;

    FUNC_3(VAR_1->stream != ((void*)0));

    FUNC_0();
    FUNC_2(VAR_1->stream);
    FUNC_1();

    FUNC_4(VAR_1->stream);
    VAR_1->stream = ((void*)0);
}
