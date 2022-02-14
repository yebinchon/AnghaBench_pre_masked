
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_cat; } ;
struct decoder_owner {int error; int p_resource; int * p_aout; TYPE_1__ fmt; int dec; } ;
typedef int es_format_t ;
typedef enum reload { ____Placeholder_reload } reload ;
typedef int decoder_t ;
typedef int audio_output_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int const*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7( struct decoder_owner *VAR_4, bool VAR_5,
                                 const es_format_t *restrict VAR_6, enum reload VAR_7 )
{

    decoder_t *VAR_8 = &VAR_4->dec;
    es_format_t VAR_9;
    if( FUNC_5( &VAR_9, VAR_6 ) != VAR_3 )
    {
        VAR_4->error = 1;
        return VAR_2;
    }


    FUNC_3( VAR_8 );
    VAR_4->error = 0;

    if( VAR_7 == VAR_1 )
    {
        FUNC_2( VAR_4->fmt.i_cat == VAR_0 );
        audio_output_t *VAR_10 = VAR_4->p_aout;

        VAR_4->p_aout = ((void*)0);
        if( VAR_10 )
        {
            FUNC_1( VAR_10 );
            FUNC_6( VAR_4->p_resource, VAR_10 );
        }
    }

    if( FUNC_0( VAR_8, VAR_5, &VAR_9 ) )
    {
        VAR_4->error = 1;
        FUNC_4( &VAR_9 );
        return VAR_2;
    }
    FUNC_4( &VAR_9 );
    return VAR_3;
}
