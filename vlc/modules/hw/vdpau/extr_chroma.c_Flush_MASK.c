
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* history; } ;
typedef TYPE_2__ vlc_vdp_mixer_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_5__ {int * field; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(filter_t *VAR_2)
{
    vlc_vdp_mixer_t *VAR_3 = VAR_2->p_sys;

    for (unsigned VAR_4 = 0; VAR_4 < VAR_1 + VAR_0; VAR_4++)
        if (VAR_3->history[VAR_4].field != ((void*)0))
        {
            FUNC_0(VAR_3->history[VAR_4].field);
            VAR_3->history[VAR_4].field = ((void*)0);
        }
}
