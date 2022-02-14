
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_10__ {scalar_t__ p_spu; int encoder; void* p_uf_chain; void* p_f_chain; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;
struct TYPE_9__ {char* psz_deinterlace; scalar_t__ psz_spu_sources; int b_reorient; int * p_deinterlace_cfg; } ;
struct TYPE_11__ {TYPE_1__ video; scalar_t__ psz_filters; } ;
typedef TYPE_3__ sout_filters_config_t ;
struct TYPE_12__ {TYPE_2__* sys; int * video; } ;
typedef TYPE_4__ filter_owner_t ;
typedef int es_format_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (void*,char*,int *,int const*) ;
 int FUNC_2 (void*,scalar_t__) ;
 int * FUNC_3 (void*) ;
 void* FUNC_4 (int *,int,TYPE_4__*) ;
 int FUNC_5 (void*,int const*,int const*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int *,TYPE_2__*,int const**,int const*,int ) ;

__attribute__((used)) static int FUNC_11( sout_stream_t *VAR_3,
                                         const sout_filters_config_t *VAR_4,
                                         bool VAR_5,
                                         const es_format_t *VAR_6,
                                         const es_format_t *VAR_7,
                                         sout_stream_id_sys_t *VAR_8 )
{

    filter_owner_t VAR_9 = {
        .video = &VAR_2,
        .sys = VAR_8,
    };
    VAR_8->p_f_chain = FUNC_4( VAR_3, 0, &VAR_9 );
    if( !VAR_8->p_f_chain )
        return VAR_0;
    FUNC_5( VAR_8->p_f_chain, VAR_6, VAR_6 );


    if( VAR_4->video.psz_deinterlace != ((void*)0) )
    {
        FUNC_1( VAR_8->p_f_chain,
                                   VAR_4->video.psz_deinterlace,
                                   VAR_4->video.p_deinterlace_cfg,
                                   VAR_6 );
        VAR_6 = FUNC_3( VAR_8->p_f_chain );
    }

    if( VAR_5 )
    {
        FUNC_1( VAR_8->p_f_chain, "fps", ((void*)0), VAR_7 );
        VAR_6 = FUNC_3( VAR_8->p_f_chain );
    }


    if( FUNC_10( VAR_3, VAR_8, &VAR_6, VAR_7,
                                         VAR_4->video.b_reorient ) != VAR_1 )
        return VAR_0;


    if( VAR_4->psz_filters )
    {
        FUNC_6( VAR_3, "adding user filters" );
        VAR_8->p_uf_chain = FUNC_4( VAR_3, 1, &VAR_9 );
        if(!VAR_8->p_uf_chain)
            return VAR_0;
        FUNC_5( VAR_8->p_uf_chain, VAR_6, VAR_7 );
        FUNC_2( VAR_8->p_uf_chain, VAR_4->psz_filters );
        VAR_6 = FUNC_3( VAR_8->p_uf_chain );
        FUNC_0( VAR_3, VAR_6 );
   }


    FUNC_9( VAR_8->encoder, VAR_6 );


    if( VAR_4->video.psz_spu_sources )
    {
        if( VAR_8->p_spu || (VAR_8->p_spu = FUNC_8( VAR_3, ((void*)0) )) )
            FUNC_7( VAR_8->p_spu, VAR_4->video.psz_spu_sources );
    }

    return VAR_1;
}
