
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sout_instance_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ input_resource_t ;


 int * FUNC_0 (TYPE_1__*,int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

sout_instance_t *FUNC_3( input_resource_t *VAR_0, sout_instance_t *VAR_1, const char *VAR_2 )
{
    FUNC_1( &VAR_0->lock );
    sout_instance_t *VAR_3 = FUNC_0( VAR_0, VAR_1, VAR_2 );
    FUNC_2( &VAR_0->lock );

    return VAR_3;
}
