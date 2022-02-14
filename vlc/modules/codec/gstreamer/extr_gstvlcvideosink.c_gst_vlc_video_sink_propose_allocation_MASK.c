
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gsize ;
typedef scalar_t__ gboolean ;
struct TYPE_9__ {int info; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int p_dec; scalar_t__ b_use_pool; } ;
typedef TYPE_1__ GstVlcVideoSink ;
typedef TYPE_2__ GstVideoInfo ;
typedef int GstQuery ;
typedef int GstCaps ;
typedef int GstBufferPool ;
typedef int GstBaseSink ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int,int ) ;
 int FUNC_6 (int *,int **,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,int ,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static gboolean FUNC_10( GstBaseSink* VAR_3,
        GstQuery* VAR_4 )
{
    GstVlcVideoSink *VAR_5 = FUNC_2( VAR_3 );
    GstCaps *VAR_6;
    gboolean VAR_7;
    GstBufferPool* VAR_8 = ((void*)0);
    gsize VAR_9;

    FUNC_6 (VAR_4, &VAR_6, &VAR_7);
    if( VAR_6 == ((void*)0) )
        goto no_caps;

    if( VAR_5->b_use_pool && VAR_7 )
    {
        GstVideoInfo VAR_10;

        if( !FUNC_7( &VAR_10, VAR_6 ))
            goto invalid_caps;

        VAR_8 = (GstBufferPool*) FUNC_8( VAR_5,
                VAR_6, VAR_10.size, 2 );
        if( VAR_8 == ((void*)0) )
            goto no_pool;

        VAR_9 = FUNC_0( &FUNC_1( VAR_8 )->info);
    }

    if( VAR_8 )
    {

        FUNC_5( VAR_4, VAR_8, VAR_9, 2, 0);
        FUNC_3 (VAR_8);
    }


    FUNC_4( VAR_4, VAR_1, ((void*)0) );

    return VAR_2;


no_pool:
    {
        FUNC_9( VAR_5->p_dec, "failed to create the pool" );
        return VAR_0;
    }
no_caps:
    {
        FUNC_9( VAR_5->p_dec, "no caps in allocation query" );
        return VAR_0;
    }
invalid_caps:
    {
        FUNC_9( VAR_5->p_dec, "invalid caps in allocation query" );
        return VAR_0;
    }
}
