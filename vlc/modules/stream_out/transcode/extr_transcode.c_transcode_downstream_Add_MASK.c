
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int p_next; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_13__ {void* psz_lang; } ;
struct TYPE_15__ {TYPE_1__ aenc_cfg; } ;
typedef TYPE_3__ sout_stream_sys_t ;
struct TYPE_16__ {scalar_t__ i_id; scalar_t__ i_group; void* psz_language; int i_codec; int i_cat; } ;
typedef TYPE_4__ es_format_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__ const*) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 void* FUNC_3 (int ,TYPE_4__*) ;
 void* FUNC_4 (void*) ;

__attribute__((used)) static void *FUNC_5( sout_stream_t *VAR_0,
                                       const es_format_t *VAR_1,
                                       const es_format_t *VAR_2)
{
    sout_stream_sys_t *VAR_3 = VAR_0->p_sys;

    es_format_t VAR_4;
    FUNC_2( &VAR_4, VAR_2->i_cat, VAR_2->i_codec );
    FUNC_1( &VAR_4, VAR_2 );

    if( !VAR_2->psz_language )
    {
        if( VAR_3->aenc_cfg.psz_lang )
            VAR_4.psz_language = FUNC_4( VAR_3->aenc_cfg.psz_lang );
        else if( VAR_1->psz_language )
            VAR_4.psz_language = FUNC_4( VAR_1->psz_language );
    }

    if( VAR_4.i_id != VAR_1->i_id )
        VAR_4.i_id = VAR_1->i_id;
    if( VAR_4.i_group != VAR_1->i_group )
        VAR_4.i_group = VAR_1->i_group;

    void *VAR_5 = FUNC_3( VAR_0->p_next, &VAR_4 );
    FUNC_0( &VAR_4 );
    return VAR_5;
}
