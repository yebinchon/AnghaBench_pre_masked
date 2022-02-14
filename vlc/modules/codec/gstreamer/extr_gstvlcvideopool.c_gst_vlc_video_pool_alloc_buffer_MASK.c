
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int stride; int offset; } ;
struct TYPE_8__ {int p_dec; scalar_t__ b_add_metavideo; int p_allocator; TYPE_2__ info; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef TYPE_2__ GstVideoInfo ;
typedef int GstFlowReturn ;
typedef int GstBufferPoolAcquireParams ;
typedef int GstBufferPool ;
typedef int GstBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static GstFlowReturn FUNC_11( GstBufferPool *VAR_3,
        GstBuffer **VAR_4, GstBufferPoolAcquireParams *VAR_5)
{
    FUNC_5( VAR_5 );

    GstVlcVideoPool *VAR_6 = FUNC_4( VAR_3 );
    GstVideoInfo *VAR_7 = &VAR_6->info;

    *VAR_4 = FUNC_7( );

    if( !FUNC_8( VAR_6->p_allocator,
                *VAR_4 ))
    {
        FUNC_10( VAR_6->p_dec, "buffer allocation failed" );
        return VAR_0;
    }

    if( VAR_6->b_add_metavideo )
    {
        FUNC_9( VAR_6->p_dec, "meta video enabled" );
        FUNC_6( *VAR_4, VAR_2,
                FUNC_0( VAR_7 ), FUNC_3( VAR_7 ),
                FUNC_1( VAR_7 ),
                FUNC_2( VAR_7 ),
                VAR_7->offset, VAR_7->stride );
    }

    FUNC_9( VAR_6->p_dec, "allocated buffer %p", *VAR_4 );

    return VAR_1;
}
