
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int p_cfg; int psz_name; int * p_module; scalar_t__ pace_nocontrol; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_9__ {int i_out_pace_nocontrol; } ;
typedef TYPE_2__ sout_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6( sout_stream_t *VAR_0 )
{
    sout_instance_t *VAR_1 = (sout_instance_t *)FUNC_5(VAR_0);

    FUNC_3( VAR_0, "destroying chain... (name=%s)", VAR_0->psz_name );

    VAR_1->i_out_pace_nocontrol -= VAR_0->pace_nocontrol;

    if( VAR_0->p_module != ((void*)0) )
        FUNC_2( VAR_0, VAR_0->p_module );

    FUNC_0( VAR_0->psz_name );

    FUNC_1( VAR_0->p_cfg );

    FUNC_3( VAR_0, "destroying chain done" );
    FUNC_4(VAR_0);
}
