
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int filter_t ;
typedef int audio_sample_format_t ;


 int * FUNC_0 (int *,int *,char*,char*,int const*,int const*,int *,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static filter_t *FUNC_3 (vlc_object_t *VAR_0,
                                const audio_sample_format_t *VAR_1,
                                const audio_sample_format_t *VAR_2)
{
    char *VAR_3 = FUNC_2(VAR_0, "audio-resampler");
    filter_t *VAR_4 = FUNC_0(VAR_0, ((void*)0), "audio resampler", VAR_3,
                                    VAR_1, VAR_2, ((void*)0), 1);
    FUNC_1(VAR_3);
    return VAR_4;
}
