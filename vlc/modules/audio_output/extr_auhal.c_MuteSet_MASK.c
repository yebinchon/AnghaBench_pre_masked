
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_6__ {int b_mute; float f_volume; int au_unit; scalar_t__ b_digital; } ;
typedef TYPE_2__ aout_sys_t ;
typedef scalar_t__ OSStatus ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,float,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(audio_output_t * VAR_5, bool VAR_6)
{
    aout_sys_t *VAR_7 = VAR_5->sys;

    if(VAR_7->b_digital)
        return VAR_0;

    VAR_7->b_mute = VAR_6;
    FUNC_1(VAR_5, VAR_6);

    float VAR_8 = .0;
    if (!VAR_6)
        VAR_8 = VAR_7->f_volume;

    OSStatus VAR_9 =
        FUNC_0(VAR_7->au_unit, VAR_3,
                              VAR_2, 0,
                              VAR_8 * VAR_8 * VAR_8, 0);

    return VAR_9 == VAR_4 ? VAR_1 : VAR_0;
}
