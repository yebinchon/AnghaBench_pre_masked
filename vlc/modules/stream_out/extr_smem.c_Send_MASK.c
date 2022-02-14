
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {TYPE_1__ format; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
typedef int block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2( sout_stream_t *VAR_3, void *VAR_4, block_t *VAR_5 )
{
    sout_stream_id_sys_t *VAR_6 = (sout_stream_id_sys_t *)VAR_4;
    if ( VAR_6->format.i_cat == VAR_1 )
        return FUNC_1( VAR_3, VAR_6, VAR_5 );
    else if ( VAR_6->format.i_cat == VAR_0 )
        return FUNC_0( VAR_3, VAR_6, VAR_5 );
    return VAR_2;
}
