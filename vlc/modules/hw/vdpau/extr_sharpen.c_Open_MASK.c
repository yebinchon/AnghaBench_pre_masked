
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vdp_t ;
typedef int uint32_t ;
struct TYPE_13__ {int video; } ;
struct TYPE_16__ {scalar_t__ i_chroma; } ;
struct TYPE_12__ {TYPE_5__ video; } ;
struct TYPE_14__ {int p_cfg; TYPE_4__* p_sys; int pf_video_filter; TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_15__ {int sigma; } ;
typedef TYPE_4__ filter_sys_t ;
typedef scalar_t__ VdpStatus ;
typedef int VdpDevice ;
typedef scalar_t__ VdpBool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int ) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,char*,int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_7 (int *,int,int **,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 float FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(vlc_object_t *VAR_13)
{
    filter_t *VAR_14 = (filter_t *)VAR_13;

    if (VAR_14->fmt_in.video.i_chroma != VAR_6
     && VAR_14->fmt_in.video.i_chroma != VAR_7
     && VAR_14->fmt_in.video.i_chroma != VAR_8)
        return VAR_9;
    if (!FUNC_10(&VAR_14->fmt_in.video, &VAR_14->fmt_out.video))
        return VAR_9;


    vdp_t *VAR_15;
    VdpDevice VAR_16;
    VdpStatus VAR_17;
    VdpBool VAR_18;

    VAR_17 = FUNC_7(((void*)0), -1, &VAR_15, &VAR_16);
    if (VAR_17 != VAR_3)
        return VAR_9;

    VAR_17 = FUNC_9(VAR_15, VAR_16,
                                       VAR_5, &VAR_18);
    if (VAR_17 != VAR_3)
        VAR_18 = VAR_2;
    FUNC_8(VAR_15);

    if (VAR_18 != VAR_4)
    {
        FUNC_3(VAR_14, "sharpening/blurring not supported by VDPAU device");
        return VAR_9;
    }


    filter_sys_t *VAR_19 = FUNC_2(sizeof (*VAR_19));
    if (FUNC_4(VAR_19 == ((void*)0)))
        return VAR_10;

    VAR_14->pf_video_filter = VAR_0;
    VAR_14->p_sys = VAR_19;

    FUNC_1(VAR_14, "sharpen-", VAR_12, VAR_14->p_cfg);
    FUNC_5(VAR_14, "sharpen-sigma", VAR_1, VAR_19);

    union { uint32_t u; float f; } VAR_20;
    VAR_20.f = FUNC_11(FUNC_6(VAR_14, "sharpen-sigma"));
    FUNC_0(&VAR_19->sigma, VAR_20.u);

    return VAR_11;
}
