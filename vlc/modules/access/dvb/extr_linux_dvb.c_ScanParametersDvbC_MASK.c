
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_step; int i_max; int i_min; } ;
struct TYPE_10__ {int b_exhaustive; int b_modulation_set; int i_symbolrate; TYPE_1__ frequency; int type; } ;
typedef TYPE_3__ scan_parameter_t ;
struct TYPE_9__ {int caps; int frequency_stepsize; int frequency_max; int frequency_min; } ;
struct TYPE_11__ {TYPE_2__ info; } ;
typedef TYPE_4__ frontend_t ;
struct TYPE_12__ {TYPE_4__* p_frontend; } ;
typedef TYPE_5__ dvb_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_3, dvb_sys_t *VAR_4, scan_parameter_t *VAR_5 )
{
    const frontend_t *VAR_6 = VAR_4->p_frontend;

    VAR_5->type = VAR_1;
    VAR_5->b_exhaustive = 0;


    VAR_5->frequency.i_min = VAR_6->info.frequency_min;
    VAR_5->frequency.i_max = VAR_6->info.frequency_max;
    VAR_5->frequency.i_step = VAR_6->info.frequency_stepsize;


    VAR_5->b_modulation_set = ( VAR_6->info.caps & VAR_0 );



    VAR_5->i_symbolrate = FUNC_0( VAR_3, "dvb-srate" );

    return VAR_2;
}
