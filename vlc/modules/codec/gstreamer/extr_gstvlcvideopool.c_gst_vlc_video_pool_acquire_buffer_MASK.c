
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* acquire_buffer ) (int *,int **,int *) ;} ;
struct TYPE_4__ {int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef scalar_t__ GstFlowReturn ;
typedef int GstBufferPoolAcquireParams ;
typedef int GstBufferPool ;
typedef int GstBuffer ;


 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int **,int *) ;

__attribute__((used)) static GstFlowReturn FUNC_4( GstBufferPool *VAR_3,
        GstBuffer **VAR_4, GstBufferPoolAcquireParams *VAR_5 )
{
    GstVlcVideoPool *VAR_6 = FUNC_1( VAR_3 );
    GstFlowReturn VAR_7;

    VAR_7 = FUNC_0( VAR_2)->acquire_buffer( VAR_3,
            VAR_4, VAR_5 );

    if( VAR_7 == VAR_1 &&
            !FUNC_2( VAR_6->p_allocator,
                *VAR_4 ))
        VAR_7 = VAR_0;

    return VAR_7;
}
