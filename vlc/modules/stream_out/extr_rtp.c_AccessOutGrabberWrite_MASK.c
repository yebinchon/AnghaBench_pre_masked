
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ssize_t ;
typedef int sout_stream_t ;
struct TYPE_7__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; } ;
typedef TYPE_2__ block_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ssize_t FUNC_2( sout_access_out_t *VAR_1,
                                      block_t *VAR_2 )
{
    sout_stream_t *VAR_3 = (sout_stream_t*)VAR_1->p_sys;

    while( VAR_2 )
    {
        block_t *VAR_4;

        FUNC_0( VAR_3, VAR_2 );

        VAR_4 = VAR_2->p_next;
        FUNC_1( VAR_2 );
        VAR_2 = VAR_4;
    }

    return VAR_0;
}
