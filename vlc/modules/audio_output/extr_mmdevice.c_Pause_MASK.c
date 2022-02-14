
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int stream; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(audio_output_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2)
{
    aout_sys_t *VAR_3 = VAR_0->sys;
    HRESULT VAR_4;

    FUNC_0();
    VAR_4 = FUNC_2(VAR_3->stream, VAR_1);
    FUNC_1();

    FUNC_3(VAR_0, VAR_4);
    (void) VAR_2;
}
