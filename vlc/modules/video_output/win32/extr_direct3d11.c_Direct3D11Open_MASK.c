
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ i_chroma; } ;
struct TYPE_21__ {scalar_t__ force; } ;
struct TYPE_26__ {TYPE_9__ source; TYPE_1__ obj; TYPE_6__* sys; } ;
typedef TYPE_5__ vout_display_t ;
struct TYPE_24__ {int i_width; int i_height; } ;
struct TYPE_22__ {TYPE_3__ texture_source; } ;
struct TYPE_25__ {int i_width; int i_height; TYPE_2__* textureFormat; } ;
struct TYPE_27__ {scalar_t__ swapCb; int outside_opaque; int sys; TYPE_20__ area; TYPE_4__ picQuad; int legacy_shader; } ;
typedef TYPE_6__ vout_display_sys_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_28__ {scalar_t__ i_chroma; int i_width; int i_height; } ;
typedef TYPE_7__ video_format_t ;
struct TYPE_23__ {scalar_t__ formatTexture; } ;


 int FUNC_0 (int ,TYPE_20__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,TYPE_9__*) ;
 scalar_t__* FUNC_10 (scalar_t__) ;
 scalar_t__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(vout_display_t *VAR_5, video_format_t *VAR_6)
{
    vout_display_sys_t *VAR_7 = VAR_5->sys;
    video_format_t VAR_8;
    FUNC_9(&VAR_8, &VAR_5->source);
    int VAR_9 = FUNC_4(VAR_5, &VAR_8);
    if (VAR_9 != VAR_4)
    {
        if (!FUNC_6(VAR_5->source.i_chroma)

            && VAR_5->obj.force

                )
        {
            const vlc_fourcc_t *VAR_10 = FUNC_12(VAR_5->source.i_chroma) ?
                        FUNC_11(VAR_5->source.i_chroma) :
                        FUNC_10(VAR_5->source.i_chroma);
            for (unsigned VAR_11 = 0; VAR_10[VAR_11] != 0; VAR_11++) {
                VAR_8.i_chroma = VAR_10[VAR_11];
                if (VAR_8.i_chroma == VAR_5->source.i_chroma)
                    continue;
                VAR_9 = FUNC_4(VAR_5, &VAR_8);
                if (VAR_9 == VAR_4)
                    break;
            }
        }
        if (VAR_9 != VAR_4)
        {
            if ( VAR_7->swapCb == VAR_2 )
                FUNC_2( VAR_7->outside_opaque );
            return VAR_9;
        }
    }


    VAR_7->picQuad.i_width = VAR_8.i_width;
    VAR_7->picQuad.i_height = VAR_8.i_height;
    if (!VAR_7->legacy_shader && FUNC_6(VAR_8.i_chroma))
    {
        VAR_7->picQuad.i_width = (VAR_7->picQuad.i_width + 0x7F) & ~0x7F;
        VAR_7->picQuad.i_height = (VAR_7->picQuad.i_height + 0x7F) & ~0x7F;
    }
    else
    if ( VAR_7->picQuad.textureFormat->formatTexture != VAR_1 &&
         VAR_7->picQuad.textureFormat->formatTexture != VAR_0 )
    {
        VAR_7->picQuad.i_width = (VAR_7->picQuad.i_width + 0x01) & ~0x01;
        VAR_7->picQuad.i_height = (VAR_7->picQuad.i_height + 0x01) & ~0x01;
    }

    VAR_7->area.texture_source.i_width = VAR_7->picQuad.i_width;
    VAR_7->area.texture_source.i_height = VAR_7->picQuad.i_height;

    FUNC_0(FUNC_5(VAR_5), &VAR_7->area, &VAR_7->sys);

    VAR_9 = FUNC_3(VAR_5, &VAR_8);
    if (VAR_9 != VAR_4) {
        FUNC_7(VAR_5, "Could not update the backbuffer");
        return VAR_9;
    }

    if (FUNC_1(VAR_5)) {
        FUNC_7(VAR_5, "Failed to allocate resources");
        if ( VAR_7->swapCb == VAR_2 )
            FUNC_2( VAR_7->outside_opaque );
        return VAR_3;
    }

    FUNC_8(VAR_6);
    *VAR_6 = VAR_8;

    return VAR_4;
}
