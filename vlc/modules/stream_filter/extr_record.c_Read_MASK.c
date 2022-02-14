
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {scalar_t__ f; } ;
typedef TYPE_2__ stream_sys_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (TYPE_1__*,void*,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2( stream_t *VAR_0, void *VAR_1, size_t VAR_2 )
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;
    void *VAR_4 = VAR_1;
    const ssize_t VAR_5 = FUNC_1( VAR_0->s, VAR_4, VAR_2 );


    if( VAR_3->f )
    {
        if( VAR_4 && VAR_5 > 0 )
            FUNC_0( VAR_0, VAR_4, VAR_5 );
    }

    return VAR_5;
}
