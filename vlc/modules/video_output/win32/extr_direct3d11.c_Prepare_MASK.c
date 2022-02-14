
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_18__ {int outside_opaque; scalar_t__ (* startEndRenderingCb ) (int ,int,TYPE_7__*) ;} ;
typedef TYPE_5__ vout_display_sys_t ;
typedef int vlc_tick_t ;
typedef int subpicture_t ;
struct TYPE_15__ {scalar_t__ max_luminance; int min_luminance; int * white_point; int * primaries; } ;
struct TYPE_14__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_16__ {TYPE_2__ mastering; TYPE_1__ lighting; } ;
struct TYPE_19__ {TYPE_3__ format; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_20__ {int MaxFrameAverageLightLevel; int MaxContentLightLevel; scalar_t__ MaxMasteringLuminance; int MinMasteringLuminance; int * WhitePoint; int * RedPrimary; int * BluePrimary; int * GreenPrimary; } ;
typedef TYPE_7__ libvlc_video_direct3d_hdr10_metadata_t ;


 int FUNC_0 (TYPE_4__*,TYPE_6__*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,TYPE_7__*) ;
 scalar_t__ FUNC_3 (int ,int,TYPE_7__*) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0, picture_t *VAR_1,
                    subpicture_t *VAR_2, vlc_tick_t VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_0->sys;

    FUNC_1(VAR_3);

    libvlc_video_direct3d_hdr10_metadata_t VAR_5;
    if (VAR_1->format.mastering.max_luminance)
    {
        VAR_5[0] = VAR_1->format.mastering.primaries[0];
        VAR_5[1] = VAR_1->format.mastering.primaries[1];
        VAR_5[0] = VAR_1->format.mastering.primaries[2];
        VAR_5[1] = VAR_1->format.mastering.primaries[3];
        VAR_5[0] = VAR_1->format.mastering.primaries[4];
        VAR_5[1] = VAR_1->format.mastering.primaries[5];
        VAR_5[0] = VAR_1->format.mastering.white_point[0];
        VAR_5[1] = VAR_1->format.mastering.white_point[1];
        VAR_5 = VAR_1->format.mastering.min_luminance;
        VAR_5 = VAR_1->format.mastering.max_luminance;
        VAR_5 = VAR_1->format.lighting.MaxCLL;
        VAR_5 = VAR_1->format.lighting.MaxFALL;
    }

    if ( VAR_4->startEndRenderingCb( VAR_4->outside_opaque, 1,
                                   VAR_1->format.mastering.max_luminance ? &VAR_5 : ((void*)0)))
    {
        FUNC_0(VAR_0, VAR_1, VAR_2);

        VAR_4->startEndRenderingCb( VAR_4->outside_opaque, 0, ((void*)0) );
    }
}
