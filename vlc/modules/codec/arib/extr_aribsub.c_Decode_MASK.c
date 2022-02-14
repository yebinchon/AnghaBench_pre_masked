
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int p_arib_instance; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int i_flags; int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;
typedef int arib_parser_t ;
typedef int arib_decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,int *,int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6( decoder_t *VAR_2, block_t *VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;

    if( VAR_3 == ((void*)0) )
        return VAR_1;

    if( VAR_3->i_flags & VAR_0 )
    {
        FUNC_3( VAR_3 );
        return VAR_1;
    }

    arib_parser_t *VAR_5 = FUNC_1( VAR_4->p_arib_instance );
    arib_decoder_t *VAR_6 = FUNC_0( VAR_4->p_arib_instance );
    if ( VAR_5 && VAR_6 )
    {
        FUNC_2( VAR_5, VAR_3->p_buffer, VAR_3->i_buffer );
        subpicture_t *VAR_7 = FUNC_5( VAR_2, VAR_5, VAR_6, VAR_3 );
        if( VAR_7 != ((void*)0) )
            FUNC_4( VAR_2, VAR_7 );
    }

    FUNC_3( VAR_3 );
    return VAR_1;
}
