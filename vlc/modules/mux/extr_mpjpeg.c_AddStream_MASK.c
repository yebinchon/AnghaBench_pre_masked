
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i_nb_inputs; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_9__ {TYPE_1__* p_fmt; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_7__ {scalar_t__ i_codec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_1( sout_mux_t *VAR_3, sout_input_t *VAR_4 )
{
    if( VAR_3->i_nb_inputs > 1 )
    {
        FUNC_0( VAR_3, "only 1 input allowed" );
        return VAR_1;
    }

    FUNC_0( VAR_3, "adding input" );
    if( VAR_4->p_fmt->i_codec != VAR_0 )
        return VAR_1;

    return VAR_2;
}
