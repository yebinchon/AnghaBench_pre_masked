
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_10__ {scalar_t__ b_vod; int id; } ;
typedef TYPE_1__ vlm_media_t ;
struct TYPE_12__ {scalar_t__ b_vod; } ;
struct TYPE_11__ {TYPE_3__ cfg; } ;
typedef TYPE_2__ vlm_media_sys_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5( vlm_t *VAR_1, vlm_media_t *VAR_2 )
{
    vlm_media_sys_t *VAR_3 = FUNC_0( VAR_1, VAR_2->id );


    if( !VAR_3 || FUNC_1( VAR_1, VAR_2 ) )
        return VAR_0;
    if( ( VAR_3->cfg.b_vod && !VAR_2->b_vod ) || ( !VAR_3->cfg.b_vod && VAR_2->b_vod ) )
        return VAR_0;

    if( 0 )
    {

    }

    FUNC_3( &VAR_3->cfg );
    FUNC_4( &VAR_3->cfg, VAR_2 );

    return FUNC_2( VAR_1, VAR_3 );
}
