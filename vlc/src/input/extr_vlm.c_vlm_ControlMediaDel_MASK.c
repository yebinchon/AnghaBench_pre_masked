
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_21__ {int media; int i_media; TYPE_15__* p_vod; } ;
typedef TYPE_4__ vlm_t ;
struct TYPE_20__ {int logger; } ;
struct TYPE_19__ {scalar_t__ p_media; int p_item; } ;
struct TYPE_23__ {int b_enabled; int psz_name; scalar_t__ b_vod; } ;
struct TYPE_22__ {scalar_t__ i_instance; TYPE_3__ obj; TYPE_2__ vod; TYPE_6__ cfg; TYPE_1__** instance; } ;
typedef TYPE_5__ vlm_media_sys_t ;
typedef int int64_t ;
struct TYPE_18__ {int psz_name; } ;
struct TYPE_17__ {int (* pf_media_del ) (TYPE_15__*,scalar_t__) ;} ;


 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_15__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ) ;
 TYPE_5__* FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_10( vlm_t *VAR_3, int64_t VAR_4 )
{
    vlm_media_sys_t *VAR_5 = FUNC_6( VAR_3, VAR_4 );

    if( !VAR_5 )
        return VAR_0;

    while( VAR_5->i_instance > 0 )
        FUNC_5( VAR_3, VAR_2, VAR_4, VAR_5->instance[0]->psz_name );

    if( VAR_5->cfg.b_vod )
    {
        VAR_5->cfg.b_enabled = 0;
        FUNC_7( VAR_3, VAR_5 );
    }


    FUNC_8( VAR_3, VAR_4, VAR_5->cfg.psz_name );

    FUNC_9( &VAR_5->cfg );

    FUNC_1( VAR_5->vod.p_item );

    if( VAR_5->vod.p_media )
        VAR_3->p_vod->pf_media_del( VAR_3->p_vod, VAR_5->vod.p_media );

    FUNC_0( VAR_3->i_media, VAR_3->media, VAR_5 );
    FUNC_3( VAR_5->obj.logger );
    FUNC_4(VAR_5);

    return VAR_1;
}
