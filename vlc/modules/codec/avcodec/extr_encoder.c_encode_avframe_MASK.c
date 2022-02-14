
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int encoder_t ;
struct TYPE_13__ {TYPE_5__* p_context; } ;
typedef TYPE_2__ encoder_sys_t ;
typedef int block_t ;
struct TYPE_12__ {int den; } ;
struct TYPE_15__ {TYPE_1__ time_base; } ;
struct TYPE_14__ {int duration; scalar_t__ size; int * data; } ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (TYPE_3__*,int,TYPE_5__*) ;

__attribute__((used)) static block_t *FUNC_8( encoder_t *VAR_1, encoder_sys_t *VAR_2, AVFrame *VAR_3 )
{
    AVPacket VAR_4;
    VAR_4.data = ((void*)0);
    VAR_4.size = 0;

    FUNC_1( &VAR_4 );

    int VAR_5 = FUNC_4( VAR_2->p_context, VAR_3 );
    if( VAR_3 && VAR_5 != 0 && VAR_5 != FUNC_0(VAR_0) )
    {
        FUNC_5( VAR_1, "cannot send one frame to encoder %d", VAR_5 );
        return ((void*)0);
    }
    VAR_5 = FUNC_3( VAR_2->p_context, &VAR_4 );
    if( VAR_5 != 0 && VAR_5 != FUNC_0(VAR_0) )
    {
        FUNC_5( VAR_1, "cannot encode one frame" );
        return ((void*)0);
    }

    block_t *VAR_6 = FUNC_7( &VAR_4,
            VAR_4.duration / VAR_2->p_context->time_base.den, VAR_2->p_context );
    if( FUNC_6(VAR_6 == ((void*)0)) )
    {
        FUNC_2( &VAR_4 );
        return ((void*)0);
    }
    return VAR_6;
}
