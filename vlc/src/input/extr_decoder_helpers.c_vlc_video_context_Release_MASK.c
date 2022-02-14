
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int private_type; TYPE_1__* ops; scalar_t__ device; int rc; } ;
typedef TYPE_2__ vlc_video_context ;
struct TYPE_6__ {int (* destroy ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(vlc_video_context *VAR_0)
{
    if ( FUNC_2( &VAR_0->rc ) )
    {
        if (VAR_0->device)
            FUNC_3( VAR_0->device );
        if ( VAR_0->ops && VAR_0->ops->destroy )
            VAR_0->ops->destroy( FUNC_4(VAR_0, VAR_0->private_type) );
        FUNC_0(VAR_0);
    }
}
