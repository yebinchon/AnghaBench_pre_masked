
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * psz_encoding; } ;
struct TYPE_7__ {scalar_t__ i_extra; scalar_t__ i_cat; scalar_t__ i_extra_languages; TYPE_5__* p_extra_languages; TYPE_1__ subs; int video; int * p_extra; int * psz_description; int * psz_language; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_8__ {int * psz_description; int * psz_language; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(es_format_t *restrict VAR_4, const es_format_t *VAR_5)
{
    int VAR_6 = VAR_3;

    *VAR_4 = *VAR_5;

    if (VAR_5->psz_language != ((void*)0))
    {
        VAR_4->psz_language = FUNC_5(VAR_5->psz_language);
        if (FUNC_6(VAR_4->psz_language == ((void*)0)))
            VAR_6 = VAR_2;
    }
    if (VAR_5->psz_description != ((void*)0))
    {
        VAR_4->psz_description = FUNC_5(VAR_5->psz_description);
        if (FUNC_6(VAR_4->psz_description == ((void*)0)))
            VAR_6 = VAR_2;
    }

    if (VAR_5->i_extra > 0)
    {
        FUNC_0(VAR_5->p_extra != ((void*)0));
        VAR_4->p_extra = FUNC_3( VAR_5->i_extra );

        if( FUNC_2(VAR_4->p_extra != ((void*)0)) )
            FUNC_4(VAR_4->p_extra, VAR_5->p_extra, VAR_5->i_extra);
        else
        {
            VAR_4->i_extra = 0;
            VAR_6 = VAR_2;
        }
    }
    else
        VAR_4->p_extra = ((void*)0);

    if (VAR_5->i_cat == VAR_1)
        VAR_6 = FUNC_7( &VAR_4->video, &VAR_5->video );

    if (VAR_5->i_cat == VAR_0)
    {
        if (VAR_5->subs.psz_encoding != ((void*)0))
        {
            VAR_4->subs.psz_encoding = FUNC_5(VAR_5->subs.psz_encoding);
            if (FUNC_6(VAR_4->subs.psz_encoding == ((void*)0)))
                VAR_6 = VAR_2;
        }
    }

    if (VAR_5->i_extra_languages > 0)
    {
        FUNC_0(VAR_5->p_extra_languages != ((void*)0));
        VAR_4->p_extra_languages = FUNC_1(VAR_4->i_extra_languages,
                                        sizeof (*VAR_4->p_extra_languages));
        if (FUNC_2(VAR_4->p_extra_languages != ((void*)0)))
        {
            for (unsigned VAR_7 = 0; VAR_7 < VAR_4->i_extra_languages; VAR_7++)
            {
                if (VAR_5->p_extra_languages[VAR_7].psz_language != ((void*)0))
                    VAR_4->p_extra_languages[VAR_7].psz_language = FUNC_5(VAR_5->p_extra_languages[VAR_7].psz_language);
                if (VAR_5->p_extra_languages[VAR_7].psz_description != ((void*)0))
                    VAR_4->p_extra_languages[VAR_7].psz_description = FUNC_5(VAR_5->p_extra_languages[VAR_7].psz_description);
            }
            VAR_4->i_extra_languages = VAR_5->i_extra_languages;
        }
        else
        {
            VAR_4->i_extra_languages = 0;
            VAR_6 = VAR_2;
        }
    }
    return VAR_6;
}
