
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {TYPE_3__* p_decoder; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int block_t ;
struct TYPE_7__ {int (* pf_decode ) (TYPE_3__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_2( sout_stream_t *VAR_3, void *VAR_4, block_t *VAR_5 )
{
    sout_stream_sys_t *VAR_6 = VAR_3->p_sys;

    if ( (sout_stream_sys_t *)VAR_4 != VAR_6 )
    {
        FUNC_0( VAR_5 );
        return VAR_2;
    }

    int VAR_7 = VAR_6->p_decoder->pf_decode( VAR_6->p_decoder, VAR_5 );
    return VAR_7 == VAR_0 ? VAR_2 : VAR_1;
}
