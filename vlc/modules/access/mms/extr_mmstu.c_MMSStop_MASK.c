
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int i_command_level; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*,int,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_0 )
{
    access_sys_t *VAR_1 = VAR_0->p_sys;


    FUNC_0( VAR_0,
                     0x09,
                     VAR_1->i_command_level,
                     0x001fffff,
                     ((void*)0), 0 );
    return( 0 );
}
