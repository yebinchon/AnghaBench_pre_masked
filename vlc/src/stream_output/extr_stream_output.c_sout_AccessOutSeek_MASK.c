
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_seek ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ sout_access_out_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1( sout_access_out_t *VAR_1, off_t VAR_2 )
{
    if (VAR_1->pf_seek == ((void*)0))
        return VAR_0;
    return VAR_1->pf_seek( VAR_1, VAR_2 );
}
