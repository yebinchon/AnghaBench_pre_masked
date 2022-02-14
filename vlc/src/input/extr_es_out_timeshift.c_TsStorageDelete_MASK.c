
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_cmd_r; scalar_t__ i_cmd_w; struct TYPE_6__* psz_file; int p_filew; int p_filer; struct TYPE_6__* p_cmd; } ;
typedef TYPE_1__ ts_storage_t ;
typedef int ts_cmd_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5( ts_storage_t *VAR_0 )
{
    while( VAR_0->i_cmd_r < VAR_0->i_cmd_w )
    {
        ts_cmd_t VAR_1;

        FUNC_1( VAR_0, &VAR_1, 1 );

        FUNC_0( &VAR_1 );
    }
    FUNC_3( VAR_0->p_cmd );

    FUNC_2( VAR_0->p_filer );
    FUNC_2( VAR_0->p_filew );




    FUNC_3( VAR_0 );
}
