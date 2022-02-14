
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_4__ {int i_cat; int i_profile; int i_level; int i_id; int b_packetized; int * p_extra; int video; int * p_extra_languages; int * psz_description; int * psz_language; int i_priority; int i_codec; } ;
typedef TYPE_1__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2( es_format_t *VAR_2,
                     int VAR_3, vlc_fourcc_t VAR_4 )
{
    FUNC_0(VAR_2, 0, sizeof (*VAR_2));
    VAR_2->i_cat = VAR_3;
    VAR_2->i_codec = VAR_4;
    VAR_2->i_profile = -1;
    VAR_2->i_level = -1;
    VAR_2->i_id = -1;
    VAR_2->i_priority = VAR_0;
    VAR_2->psz_language = ((void*)0);
    VAR_2->psz_description = ((void*)0);
    VAR_2->p_extra_languages = ((void*)0);

    if (VAR_2->i_cat == VAR_1)
        FUNC_1(&VAR_2->video, 0);

    VAR_2->b_packetized = 1;
    VAR_2->p_extra = ((void*)0);
}
