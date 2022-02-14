
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {scalar_t__ i_width; scalar_t__ i_height; } ;
typedef TYPE_1__ video_format_t ;
typedef int vdp_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ VdpStatus ;
typedef int VdpRGBAFormat ;
typedef int VdpDevice ;
typedef int VdpBool ;


 unsigned int FUNC_0 (int const*) ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ,int const,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(vlc_object_t *VAR_2, vdp_t *VAR_3, VdpDevice VAR_4,
                             const video_format_t *VAR_5,
                             VdpRGBAFormat *restrict VAR_6)
{
    static const VdpRGBAFormat VAR_7[] = {
        129, 131,
        130, 128,
    };

    for (unsigned VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++)
    {
        uint32_t VAR_9, VAR_10;
        VdpBool VAR_11;

        VdpStatus VAR_12 = FUNC_4(VAR_3, VAR_4,
                                                     VAR_7[VAR_8], &VAR_11, &VAR_9, &VAR_10);
        if (VAR_12 != VAR_0)
        {
            FUNC_2(VAR_2, "%s capabilities query failure: %s", "output surface",
                    FUNC_3(VAR_3, VAR_12));
            continue;
        }

        if (!VAR_11 || VAR_9 < VAR_5->i_width || VAR_10 < VAR_5->i_height)
            continue;

        *VAR_6 = VAR_7[VAR_8];
        FUNC_1(VAR_2, "using RGBA format %u", *VAR_6);
        return 0;
    }

    FUNC_2(VAR_2, "no supported output surface format");
    return VAR_1;
}
