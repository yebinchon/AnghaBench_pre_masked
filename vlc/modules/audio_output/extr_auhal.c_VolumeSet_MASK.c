
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {float f_volume; int au_unit; int b_mute; scalar_t__ b_digital; } ;
typedef TYPE_2__ aout_sys_t ;
typedef int OSStatus ;


 float VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,float,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,float) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (float) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_5(audio_output_t * VAR_4, float VAR_5)
{
    aout_sys_t *VAR_6 = VAR_4->sys;
    OSStatus VAR_7 = 0;

    if (VAR_6->b_digital)
        return VAR_1;

    VAR_6->f_volume = VAR_5;
    FUNC_1(VAR_4, VAR_5);


    if (!VAR_6->b_mute)
    {
        VAR_7 = FUNC_0(VAR_6->au_unit,
                                        VAR_3,
                                        VAR_2,
                                        0,
                                        VAR_5 * VAR_5 * VAR_5,
                                        0);
    }

    if (FUNC_4(VAR_4, "volume-save"))
        FUNC_2("auhal-volume", FUNC_3(VAR_5 * VAR_0));

    return VAR_7;
}
