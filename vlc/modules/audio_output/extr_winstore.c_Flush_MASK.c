
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int stream; int * client; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(audio_output_t *VAR_0)
{
    aout_sys_t *VAR_1 = VAR_0->sys;
    if( FUNC_3( VAR_1->client == ((void*)0) ) )
        return;

    FUNC_0();
    HRESULT VAR_2 = FUNC_2(VAR_1->stream);
    FUNC_1();

    FUNC_4(VAR_0, VAR_2);
}
