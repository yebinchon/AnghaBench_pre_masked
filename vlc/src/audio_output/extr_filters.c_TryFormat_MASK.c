
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
typedef int filter_t ;
struct TYPE_6__ {scalar_t__ i_format; } ;
typedef TYPE_1__ audio_sample_format_t ;


 int * FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static filter_t *FUNC_3 (vlc_object_t *VAR_0, vlc_fourcc_t VAR_1,
                            audio_sample_format_t *restrict VAR_2)
{
    audio_sample_format_t VAR_3 = *VAR_2;

    FUNC_2 (VAR_1 != VAR_2->i_format);
    VAR_3.i_format = VAR_1;
    FUNC_1 (&VAR_3);

    filter_t *VAR_4 = FUNC_0 (VAR_0, VAR_2, &VAR_3);
    if (VAR_4 != ((void*)0))
        *VAR_2 = VAR_3;
    return VAR_4;
}
