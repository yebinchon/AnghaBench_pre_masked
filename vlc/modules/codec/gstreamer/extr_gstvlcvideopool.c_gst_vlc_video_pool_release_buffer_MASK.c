
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* release_buffer ) (int *,int *) ;} ;
struct TYPE_4__ {int p_allocator; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef int GstBufferPool ;
typedef int GstBuffer ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4( GstBufferPool *VAR_1,
        GstBuffer *VAR_2 )
{
    GstVlcVideoPool* VAR_3 = FUNC_1( VAR_1 );

    FUNC_2( VAR_3->p_allocator, VAR_2 );

    FUNC_0( VAR_0 )->release_buffer( VAR_1, VAR_2 );

    return;
}
