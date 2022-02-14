
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {scalar_t__ p_chain; } ;
struct TYPE_8__ {TYPE_3__ cache; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (size_t,int ,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(stream_t *VAR_1, void *VAR_2, size_t VAR_3)
{
    stream_sys_t *VAR_4 = VAR_1->p_sys;

    ssize_t VAR_5 = FUNC_2( &VAR_4->cache );
    size_t VAR_6 = FUNC_1((size_t)VAR_5, 0, VAR_3);






    if( VAR_6 == 0 )
    {


        if( FUNC_0(VAR_1) == VAR_0 )
            return 0;
    }


    if( FUNC_3( &VAR_4->cache, VAR_2, VAR_6 ) )
        return -1;



    if( VAR_6 == 0 && VAR_4->cache.p_chain )
        return FUNC_4( VAR_1, VAR_2, VAR_3 );

    return VAR_6;
}
