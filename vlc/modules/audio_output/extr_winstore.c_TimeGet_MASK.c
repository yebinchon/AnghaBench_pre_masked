
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_5__ {int stream; int * client; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(audio_output_t *VAR_1, vlc_tick_t *restrict VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    if( FUNC_4( VAR_3->client == ((void*)0) ) )
        return VAR_0;
    HRESULT VAR_4;

    FUNC_0();
    VAR_4 = FUNC_3(VAR_3->stream, VAR_2);
    FUNC_1();

    return FUNC_2(VAR_4) ? 0 : -1;
}
