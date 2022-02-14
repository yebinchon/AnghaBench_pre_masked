
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int guint ;
typedef int gboolean ;
struct TYPE_12__ {int (* set_config ) (int *,int *) ;} ;
struct TYPE_11__ {int i_extra_picture_buffers; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {int b_add_metavideo; TYPE_3__* p_dec; int align; TYPE_2__ info; int p_caps; void* b_need_aligned; scalar_t__ p_allocator; } ;
typedef TYPE_1__ GstVlcVideoPool ;
typedef TYPE_2__ GstVideoInfo ;
typedef int GstVideoAlignment ;
typedef int GstStructure ;
typedef int GstCaps ;
typedef int GstBufferPool ;
typedef int GstAllocator ;
typedef int GstAllocationParams ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int **,int *) ;
 int FUNC_4 (int *,int **,int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 int FUNC_16 (scalar_t__,TYPE_2__*,int *,int *) ;
 int FUNC_17 (TYPE_3__*,char*,int ,int ,int ,int ) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 int VAR_3 ;
 int FUNC_19 (int *,int *) ;

__attribute__((used)) static gboolean FUNC_20( GstBufferPool *VAR_4,
        GstStructure *VAR_5 )
{
    GstVlcVideoPool *VAR_6 = FUNC_2( VAR_4 );
    GstCaps *VAR_7;
    GstVideoInfo VAR_8;
    GstVideoAlignment VAR_9;
    guint VAR_10, VAR_11, VAR_12;
    GstAllocator *VAR_13;
    GstAllocationParams VAR_14;

    if( !FUNC_4( VAR_5, &VAR_7, &VAR_10,
                &VAR_11, &VAR_12 ))
        goto wrong_config;
    if( VAR_7 == ((void*)0) )
        goto no_caps;

    FUNC_3( VAR_5, &VAR_13, &VAR_14 );
    if( VAR_13 )
    {
        if( !FUNC_1( VAR_13 ))
            goto unsupported_allocator;
        else
        {
            if( VAR_6->p_allocator )
                FUNC_13( VAR_6->p_allocator );
            VAR_6->p_allocator = FUNC_12 ( VAR_13 );
        }
    }


    if ( !FUNC_15( &VAR_8, VAR_7 ))
        goto wrong_caps;


    VAR_6->b_add_metavideo =
        FUNC_6( VAR_5,
                VAR_2 );

    VAR_6->b_need_aligned =
        FUNC_6( VAR_5,
                VAR_1 );

    if( VAR_6->b_need_aligned )
    {
        VAR_6->b_add_metavideo = 1;
        FUNC_5( VAR_5, &VAR_9 );
    }
    else
         FUNC_14( &VAR_9 );






    VAR_6->p_dec->i_extra_picture_buffers = 16;

    if( !FUNC_16( VAR_6->p_allocator,
                &VAR_8, &VAR_9, VAR_7))
        goto unknown_format;

    if( VAR_6->b_need_aligned )
        FUNC_8( VAR_5, &VAR_9);

    if( VAR_6->p_caps )
        FUNC_11( VAR_6->p_caps );
    VAR_6->p_caps = FUNC_9( VAR_7 );
    VAR_6->info = VAR_8;
    VAR_6->align = VAR_9;

    FUNC_17( VAR_6->p_dec, "setting the following config on the pool: %s,             size: %lu, min buffers: %u, max buffers: %u", FUNC_10( VAR_7 ),

            VAR_8.size, VAR_11, VAR_12 );

    FUNC_7( VAR_5, VAR_7, VAR_8.size,
            VAR_11, VAR_12 );

    return FUNC_0 (VAR_3)->set_config( VAR_4, VAR_5 );


wrong_config:
    {
        FUNC_18(VAR_6->p_dec, "wrong pool config" );
        return VAR_0;
    }
no_caps:
    {
        FUNC_18(VAR_6->p_dec, "no input caps in config" );
        return VAR_0;
    }
wrong_caps:
    {
        FUNC_18(VAR_6->p_dec, "invalid caps" );
        return VAR_0;
    }
unknown_format:
    {
        FUNC_18(VAR_6->p_dec, "format unsupported" );
        return VAR_0;
    }
unsupported_allocator:
    {
        FUNC_18(VAR_6->p_dec, "allocator unsupported" );
        return VAR_0;
    }
}
