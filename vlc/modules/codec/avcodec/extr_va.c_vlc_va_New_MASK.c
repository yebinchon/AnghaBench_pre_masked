
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_video_context ;
struct vlc_va_t {int dummy; } ;
typedef struct vlc_va_t vlc_va_t ;
typedef int vlc_object_t ;
typedef int vlc_decoder_device ;
typedef int video_format_t ;
typedef int es_format_t ;
typedef int AVPixFmtDescriptor ;
typedef int AVCodecContext ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct vlc_va_t*,char*,int *,int,int ,struct vlc_va_t*,int *,int const*,int const*,int *,int *,int **) ;
 struct vlc_va_t* FUNC_2 (int *,int) ;
 int FUNC_3 (struct vlc_va_t*) ;
 int VAR_0 ;

vlc_va_t *FUNC_4(vlc_object_t *VAR_1,
                     AVCodecContext *VAR_2, const AVPixFmtDescriptor *VAR_3,
                     const es_format_t *VAR_4, vlc_decoder_device *VAR_5,
                     video_format_t *VAR_6, vlc_video_context **VAR_7)
{
    struct vlc_va_t *VAR_8 = FUNC_2(VAR_1, sizeof (*VAR_8));
    if (FUNC_0(VAR_8 == ((void*)0)))
        return ((void*)0);


    if (FUNC_1(VAR_8, "hw decoder", ((void*)0), 1,
                        VAR_0, VAR_8, VAR_2, VAR_3, VAR_4, VAR_5,
                        VAR_6, VAR_7) == ((void*)0))
    {
        FUNC_3(VAR_8);
        VAR_8 = ((void*)0);
    }

    return VAR_8;
}
