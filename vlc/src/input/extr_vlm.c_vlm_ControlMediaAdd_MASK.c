
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int vod_t ;
struct TYPE_23__ {int media; int i_media; int i_id; TYPE_5__* p_vod; } ;
typedef TYPE_3__ vlm_t ;
struct TYPE_24__ {int psz_name; scalar_t__ b_vod; } ;
typedef TYPE_4__ vlm_media_t ;
struct TYPE_26__ {int psz_name; scalar_t__ id; } ;
struct TYPE_22__ {int * p_media; int p_item; } ;
struct TYPE_21__ {int * logger; } ;
struct TYPE_25__ {TYPE_6__ cfg; int instance; int i_instance; TYPE_2__ vod; TYPE_1__ obj; int pf_media_control; TYPE_3__* p_data; int p_module; } ;
typedef TYPE_5__ vlm_media_sys_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ,int ,TYPE_5__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_5__*,char*,char*) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 int * FUNC_9 (int *,char*) ;
 void* FUNC_10 (int ,int,char*) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_3__*,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_16 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_17( vlm_t *VAR_3, vlm_media_t *VAR_4, int64_t *VAR_5 )
{
    vlm_media_sys_t *VAR_6;
    char *VAR_7;

    if( FUNC_13( VAR_3, VAR_4 ) || FUNC_12( VAR_3, VAR_4->psz_name ) )
    {
        FUNC_8( VAR_3, "invalid media description" );
        return VAR_0;
    }

    if( VAR_4->b_vod && !VAR_3->p_vod )
    {
        VAR_3->p_vod = FUNC_10( FUNC_2(VAR_3), sizeof( vod_t ),
                                          "vod server" );
        VAR_3->p_vod->p_module = FUNC_7( VAR_3->p_vod, "vod server", "vod-server" );
        if( !VAR_3->p_vod->p_module )
        {
            FUNC_8( VAR_3, "cannot find vod server" );
            FUNC_11(VAR_3->p_vod);
            VAR_3->p_vod = ((void*)0);
            return VAR_0;
        }

        VAR_3->p_vod->p_data = VAR_3;
        VAR_3->p_vod->pf_media_control = VAR_2;
    }

    VAR_6 = FUNC_10( FUNC_2(VAR_3), sizeof( *VAR_6 ),
                                 "media" );
    if( !VAR_6 )
        return VAR_1;

    if( FUNC_4( &VAR_7, FUNC_3("Media: %s"), VAR_4->psz_name ) == -1 )
    {
        FUNC_11(VAR_6);
        return VAR_1;
    }

    VAR_6->obj.logger = FUNC_9( VAR_6->obj.logger, VAR_7 );
    FUNC_5( VAR_7 );

    if( VAR_6->obj.logger == ((void*)0) )
    {
        FUNC_11(VAR_6);
        return VAR_1;
    }

    FUNC_16( &VAR_6->cfg, VAR_4 );
    VAR_6->cfg.id = VAR_3->i_id++;


    VAR_6->vod.p_item = FUNC_6( ((void*)0), ((void*)0) );

    VAR_6->vod.p_media = ((void*)0);
    FUNC_1( VAR_6->i_instance, VAR_6->instance );


    FUNC_0( VAR_3->i_media, VAR_3->media, VAR_6 );

    if( VAR_5 )
        *VAR_5 = VAR_6->cfg.id;


    FUNC_15( VAR_3, VAR_6->cfg.id, VAR_6->cfg.psz_name );
    return FUNC_14( VAR_3, VAR_6 );
}
