
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_6__ {int const* p_f_chain; int const* p_conv_nonstatic; int const* p_conv_static; int const* p_uf_chain; int const* p_final_conv_static; } ;
typedef TYPE_1__ sout_stream_id_sys_t ;
struct TYPE_7__ {int const format; } ;
typedef TYPE_2__ picture_t ;
typedef int filter_chain_t ;
struct TYPE_8__ {int const video; } ;


 size_t FUNC_0 (int const**) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (int const*) ;

__attribute__((used)) static const video_format_t* FUNC_3( sout_stream_id_sys_t *VAR_0,
                                                  picture_t *VAR_1 )
{
    FUNC_1( VAR_0 && VAR_1 );
    const filter_chain_t * VAR_2[] =
    {
        VAR_0->p_final_conv_static,
        VAR_0->p_uf_chain,
        VAR_0->p_conv_static,
        VAR_0->p_conv_nonstatic,
        VAR_0->p_f_chain,
    };
    for( size_t VAR_3=0; VAR_3<FUNC_0(VAR_2); VAR_3++ )
    {
        if( VAR_2[VAR_3] )
            return &FUNC_2( VAR_2[VAR_3] )->video;
    }
    return &VAR_1->format;
}
