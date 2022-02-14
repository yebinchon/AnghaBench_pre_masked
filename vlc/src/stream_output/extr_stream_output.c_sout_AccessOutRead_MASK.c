
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int (* pf_read ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ sout_access_out_t ;
typedef int block_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;

ssize_t FUNC_1( sout_access_out_t *VAR_1, block_t *VAR_2 )
{
    return( VAR_1->pf_read ?
            VAR_1->pf_read( VAR_1, VAR_2 ) : VAR_0 );
}
