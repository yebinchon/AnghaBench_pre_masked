
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int i_ssa_styles; int i_images; struct TYPE_6__** pp_images; struct TYPE_6__* psz_filename; scalar_t__ p_pic; struct TYPE_6__** pp_ssa_styles; int p_style; struct TYPE_6__* psz_stylename; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( vlc_object_t *VAR_0 )
{
    decoder_t *VAR_1 = (decoder_t *)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2->pp_ssa_styles )
    {
        for( int VAR_3 = 0; VAR_3 < VAR_2->i_ssa_styles; VAR_3++ )
        {
            if( !VAR_2->pp_ssa_styles[VAR_3] )
                continue;

            FUNC_1( VAR_2->pp_ssa_styles[VAR_3]->psz_stylename );
            FUNC_3( VAR_2->pp_ssa_styles[VAR_3]->p_style );
            FUNC_1( VAR_2->pp_ssa_styles[VAR_3] );
        }
        FUNC_0( VAR_2->i_ssa_styles, VAR_2->pp_ssa_styles );
    }
    if( VAR_2->pp_images )
    {
        for( int VAR_4 = 0; VAR_4 < VAR_2->i_images; VAR_4++ )
        {
            if( !VAR_2->pp_images[VAR_4] )
                continue;

            if( VAR_2->pp_images[VAR_4]->p_pic )
                FUNC_2( VAR_2->pp_images[VAR_4]->p_pic );
            FUNC_1( VAR_2->pp_images[VAR_4]->psz_filename );

            FUNC_1( VAR_2->pp_images[VAR_4] );
        }
        FUNC_0( VAR_2->i_images, VAR_2->pp_images );
    }

    FUNC_1( VAR_2 );
}
