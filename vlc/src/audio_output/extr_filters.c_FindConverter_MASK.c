
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int filter_t ;
typedef int audio_sample_format_t ;


 int * FUNC_0 (int *,int *,char*,int *,int const*,int const*,int *,int) ;

__attribute__((used)) static filter_t *FUNC_1 (vlc_object_t *VAR_0,
                                const audio_sample_format_t *VAR_1,
                                const audio_sample_format_t *VAR_2)
{
    return FUNC_0(VAR_0, ((void*)0), "audio converter", ((void*)0), VAR_1, VAR_2,
                        ((void*)0), 1);
}
