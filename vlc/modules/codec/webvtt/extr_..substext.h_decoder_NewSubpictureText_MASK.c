
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double margin_ratio; int p_default_style; int region; } ;
typedef TYPE_1__ subtext_updater_sys_t ;
struct TYPE_7__ {TYPE_1__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_2__ subpicture_updater_t ;
typedef int subpicture_t ;
typedef int decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int * FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline subpicture_t *FUNC_7(decoder_t *VAR_4)
{
    subtext_updater_sys_t *VAR_5 = FUNC_1(1, sizeof(*VAR_5));
    subpicture_updater_t VAR_6 = {
        .pf_validate = VAR_3,
        .pf_update = VAR_2,
        .pf_destroy = VAR_1,
        .p_sys = VAR_5,
    };
    FUNC_0( &VAR_5->region );
    VAR_5->margin_ratio = 0.04;
    VAR_5->p_default_style = FUNC_4( VAR_0 );
    if(FUNC_6(!VAR_5->p_default_style))
    {
        FUNC_3(VAR_5);
        return ((void*)0);
    }
    subpicture_t *VAR_7 = FUNC_2(VAR_4, &VAR_6);
    if (!VAR_7)
    {
        FUNC_5(VAR_5->p_default_style);
        FUNC_3(VAR_5);
    }
    return VAR_7;
}
