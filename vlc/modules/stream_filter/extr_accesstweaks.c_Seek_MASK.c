
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int b_seek; } ;
typedef TYPE_2__ stream_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2( stream_t *VAR_0, uint64_t VAR_1 )
{
    stream_sys_t *VAR_2 = VAR_0->p_sys;

    FUNC_0( VAR_2->b_seek );
    return FUNC_1( VAR_0->s, VAR_1 );
}
