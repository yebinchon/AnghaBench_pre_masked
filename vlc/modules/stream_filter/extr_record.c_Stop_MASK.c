
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int * f; } ;
typedef TYPE_2__ stream_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_1 )
{
    stream_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->f );

    FUNC_2( VAR_1, "Recording completed" );
    FUNC_1( VAR_2->f );
    VAR_2->f = ((void*)0);
    return VAR_0;
}
