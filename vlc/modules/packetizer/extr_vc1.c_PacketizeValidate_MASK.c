
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int dts; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_3( void *VAR_3, block_t *VAR_4 )
{
    decoder_t *VAR_5 = VAR_3;
    decoder_sys_t *VAR_6 = VAR_5->p_sys;

    if( FUNC_1( &VAR_6->dts ) == VAR_2 )
    {
        FUNC_2( VAR_5, "need a starting pts/dts" );
        return VAR_0;
    }
    FUNC_0(VAR_4);
    return VAR_1;
}
