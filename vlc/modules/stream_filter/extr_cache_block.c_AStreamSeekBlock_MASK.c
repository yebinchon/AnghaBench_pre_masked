
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int cache; } ;
typedef TYPE_2__ stream_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(stream_t *VAR_2, uint64_t VAR_3)
{
    stream_sys_t *VAR_4 = VAR_2->p_sys;

    if( FUNC_2( &VAR_4->cache, VAR_3) == VAR_1 )
        return VAR_1;



    if (FUNC_3(VAR_2->s, VAR_3)) return VAR_0;

    FUNC_1( &VAR_4->cache );


    if (FUNC_0(VAR_2))
        return VAR_0;

    return VAR_1;
}
