
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int (* pf_write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ sout_access_out_t ;
typedef int block_t ;


 int FUNC_0 (TYPE_1__*,int *) ;

ssize_t FUNC_1( sout_access_out_t *VAR_0, block_t *VAR_1 )
{
    return VAR_0->pf_write( VAR_0, VAR_1 );
}
