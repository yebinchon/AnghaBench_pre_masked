
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_8__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_10__ {size_t i_total; scalar_t__ p_chain; scalar_t__* pp_last; } ;
struct TYPE_7__ {size_t read_bytes; int read_time; } ;
struct TYPE_9__ {TYPE_4__ cache; TYPE_1__ stat; } ;
typedef TYPE_3__ stream_sys_t ;
typedef int block_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int *,int *,size_t*,int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ const FUNC_6 () ;

__attribute__((used)) static int FUNC_7(stream_t *VAR_3)
{
    stream_sys_t *VAR_4 = VAR_3->p_sys;
    size_t VAR_5 = VAR_4->cache.i_total;


    if (VAR_5 >= VAR_0)
    {
        FUNC_0( &VAR_4->cache );
        VAR_5 = VAR_4->cache.i_total;
    }
    if (VAR_5 >= VAR_0 &&
        VAR_4->cache.p_chain != *VAR_4->cache.pp_last)
    {

        return VAR_2;
    }


    const vlc_tick_t VAR_6 = FUNC_6();
    block_t *VAR_7;

    for (;;)
    {
        if (FUNC_3())
            return VAR_1;


        if ((VAR_7 = FUNC_5(VAR_3->s)))
            break;
        if (FUNC_4(VAR_3->s))
            return VAR_1;
    }
    VAR_4->stat.read_time += FUNC_6() - VAR_6;
    size_t VAR_8;
    FUNC_2( VAR_7, ((void*)0), &VAR_8, ((void*)0) );
    VAR_4->stat.read_bytes += VAR_8;

    FUNC_1( &VAR_4->cache, VAR_7 );
    return VAR_2;
}
