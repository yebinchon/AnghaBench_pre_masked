
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int delivery; void* inner_fec; void* coderate_hp; void* coderate_lp; } ;
typedef TYPE_1__ scan_tuner_config_t ;
struct TYPE_7__ {int type; } ;
typedef TYPE_2__ scan_parameter_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1( scan_tuner_config_t *VAR_5, const scan_parameter_t *VAR_6 )
{
    FUNC_0( VAR_5, 0, sizeof(*VAR_5) );
    VAR_5->coderate_lp = VAR_0;
    VAR_5->coderate_hp = VAR_0;
    VAR_5->inner_fec = VAR_0;
    switch(VAR_6->type)
    {
        case 128: VAR_5->delivery = VAR_3; break;
        case 129: VAR_5->delivery = VAR_2; break;
        case 130: VAR_5->delivery = VAR_1; break;
        default: VAR_5->delivery = VAR_4; break;
    }
    VAR_5->type = VAR_6->type;
}
