
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {int (* pf_control ) (TYPE_1__*,int,int ) ;} ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (TYPE_1__*,int,int ) ;

int FUNC_1( demux_t *VAR_0, int VAR_1, va_list VAR_2 )
{
    return VAR_0->pf_control( VAR_0, VAR_1, VAR_2 );
}
