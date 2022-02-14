
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {scalar_t__ i_new_selected_dev; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(audio_output_t *VAR_1, const char *VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;

    if (VAR_2)
        VAR_3->i_new_selected_dev = FUNC_2(VAR_2);
    else
        VAR_3->i_new_selected_dev = 0;

    VAR_3->i_new_selected_dev = VAR_3->i_new_selected_dev;

    FUNC_0(VAR_1, VAR_2);
    FUNC_1(VAR_1, VAR_0);

    return 0;
}
