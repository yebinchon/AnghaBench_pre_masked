
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_7__ {int f_amp; int f_gamma; int f_beta; int f_alpha; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,TYPE_2__*) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3( filter_t *VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_4->p_sys;
    vlc_object_t *VAR_6 = FUNC_2(VAR_4);

    FUNC_1( VAR_6, "equalizer-bands", VAR_0, VAR_5 );
    FUNC_1( VAR_6, "equalizer-preset", VAR_2, VAR_5 );
    FUNC_1( VAR_6, "equalizer-preamp", VAR_1, VAR_5 );
    FUNC_1( VAR_6, "equalizer-2pass", VAR_3, VAR_5 );

    FUNC_0( VAR_5->f_alpha );
    FUNC_0( VAR_5->f_beta );
    FUNC_0( VAR_5->f_gamma );

    FUNC_0( VAR_5->f_amp );
}
