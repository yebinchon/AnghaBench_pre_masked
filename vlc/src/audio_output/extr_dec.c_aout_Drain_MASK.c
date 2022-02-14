
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {scalar_t__ (* time_get ) (TYPE_1__*,int *) ;int (* drain ) (TYPE_1__*) ;} ;
typedef TYPE_1__ audio_output_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(audio_output_t *VAR_0)
{
    if (VAR_0->drain)
        VAR_0->drain(VAR_0);
    else
    {
        vlc_tick_t VAR_1;
        if (VAR_0->time_get(VAR_0, &VAR_1) == 0)
            FUNC_2(VAR_1);
    }
}
