
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int psz_path; int p_cfg; int psz_access; scalar_t__ p_module; } ;
typedef TYPE_1__ sout_access_out_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( sout_access_out_t *VAR_0 )
{
    if( VAR_0->p_module )
    {
        FUNC_2( VAR_0, VAR_0->p_module );
    }
    FUNC_1( VAR_0->psz_access );

    FUNC_0( VAR_0->p_cfg );

    FUNC_1( VAR_0->psz_path );

    FUNC_3(VAR_0);
}
