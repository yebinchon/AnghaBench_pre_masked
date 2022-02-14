
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_blocks; } ;
struct TYPE_5__ {TYPE_1__ queue; } ;
typedef TYPE_2__ logical_stream_t ;



__attribute__((used)) static inline bool FUNC_0( const logical_stream_t *VAR_0 )
{
    return ( VAR_0->queue.p_blocks != ((void*)0) );
}
