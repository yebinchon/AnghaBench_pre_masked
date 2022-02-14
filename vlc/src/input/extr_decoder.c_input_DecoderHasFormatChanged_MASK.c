
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
struct decoder_owner {int lock; scalar_t__ p_description; int fmt; int b_fmt_description; } ;
typedef int es_format_t ;
typedef int decoder_t ;


 int FUNC_0 (int *,int,int ) ;
 struct decoder_owner* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

bool FUNC_7( decoder_t *VAR_1, es_format_t *VAR_2, vlc_meta_t **VAR_3 )
{
    struct decoder_owner *VAR_4 = FUNC_1( VAR_1 );

    if( !FUNC_0( &VAR_4->b_fmt_description, 0,
                                   VAR_0 ) )
        return 0;

    FUNC_5( &VAR_4->lock );
    if( VAR_2 != ((void*)0) )
        FUNC_2( VAR_2, &VAR_4->fmt );

    if( VAR_3 )
    {
        *VAR_3 = ((void*)0);
        if( VAR_4->p_description )
        {
            *VAR_3 = FUNC_4();
            if( *VAR_3 )
                FUNC_3( *VAR_3, VAR_4->p_description );
        }
    }
    FUNC_6( &VAR_4->lock );
    return 1;
}
