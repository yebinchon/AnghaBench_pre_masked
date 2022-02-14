
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_4 (vlc_object_t *VAR_2, const char *VAR_3,
                                  vlc_value_t VAR_4, vlc_value_t VAR_5,
                                  void *VAR_6)
{
    const char *VAR_7 = VAR_5.psz_string;

    if (!*VAR_7)
        VAR_7 = "none";



    if (FUNC_1 (VAR_7, "none") && FUNC_1 (VAR_7, "goom")
     && FUNC_1 (VAR_7, "projectm") && FUNC_1 (VAR_7, "vsxu")
     && FUNC_1 (VAR_7, "glspectrum"))
    {
        FUNC_2 (VAR_2, "effect-list", VAR_1);
        FUNC_3 (VAR_2, "effect-list", VAR_7);
        VAR_7 = "visual";
    }

    FUNC_3 (VAR_2, "audio-visual", VAR_7);
    FUNC_0 ((audio_output_t *)VAR_2);
    (void) VAR_3; (void) VAR_4; (void) VAR_6;
    return VAR_0;
}
