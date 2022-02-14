
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* psz_encoding; } ;
struct TYPE_7__ {scalar_t__ i_extra; scalar_t__ i_cat; unsigned int i_extra_languages; TYPE_3__* p_extra_languages; TYPE_1__ subs; int video; TYPE_3__* p_extra; TYPE_3__* psz_description; TYPE_3__* psz_language; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_8__ {struct TYPE_8__* psz_description; struct TYPE_8__* psz_language; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(es_format_t *VAR_3)
{
    FUNC_2(VAR_3->psz_language);
    FUNC_2(VAR_3->psz_description);
    FUNC_0(VAR_3->i_extra == 0 || VAR_3->p_extra != ((void*)0));
    FUNC_2(VAR_3->p_extra);

    if (VAR_3->i_cat == VAR_2)
        FUNC_3( &VAR_3->video );
    if (VAR_3->i_cat == VAR_0)
        FUNC_2(VAR_3->subs.psz_encoding);

    for (unsigned VAR_4 = 0; VAR_4 < VAR_3->i_extra_languages; VAR_4++)
    {
        FUNC_2(VAR_3->p_extra_languages[VAR_4].psz_language);
        FUNC_2(VAR_3->p_extra_languages[VAR_4].psz_description);
    }
    FUNC_2(VAR_3->p_extra_languages);


    FUNC_1(VAR_3, VAR_1, 0);
}
