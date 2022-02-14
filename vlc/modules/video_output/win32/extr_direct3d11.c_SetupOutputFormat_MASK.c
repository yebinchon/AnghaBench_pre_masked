
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_29__ {TYPE_7__* sys; } ;
typedef TYPE_6__ vout_display_t ;
struct TYPE_28__ {void* textureFormat; } ;
struct TYPE_27__ {TYPE_10__* textureFormat; } ;
struct TYPE_30__ {TYPE_5__ regionQuad; TYPE_4__ picQuad; } ;
typedef TYPE_7__ vout_display_sys_t ;
struct TYPE_31__ {int pixel_bits; int plane_count; int pixel_size; TYPE_3__* p; } ;
typedef TYPE_8__ vlc_chroma_description_t ;
struct TYPE_32__ {scalar_t__ i_chroma; } ;
typedef TYPE_9__ video_format_t ;
typedef int uint8_t ;
struct TYPE_23__ {int formatTexture; scalar_t__ fourcc; int name; } ;
typedef TYPE_10__ d3d_format_t ;
struct TYPE_25__ {int den; } ;
struct TYPE_24__ {int den; } ;
struct TYPE_26__ {TYPE_2__ h; TYPE_1__ w; } ;


 int FUNC_0 (int ,TYPE_9__*) ;
 void* FUNC_1 (TYPE_6__*,int ) ;
 TYPE_10__* FUNC_2 (TYPE_6__*,scalar_t__) ;
 TYPE_10__* FUNC_3 (TYPE_6__*,scalar_t__) ;
 void* FUNC_4 (TYPE_6__*,int,int,int,int,int) ;
 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_6__*,char*,int ,char*) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 TYPE_8__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(vout_display_t *VAR_4, video_format_t *VAR_5)
{
    vout_display_sys_t *VAR_6 = VAR_4->sys;


    VAR_6->picQuad.textureFormat = FUNC_3(VAR_4, VAR_5->i_chroma);


    const d3d_format_t *VAR_7 = ((void*)0);
    if ( !VAR_6->picQuad.textureFormat )
    {
        uint8_t VAR_8;
        uint8_t VAR_9, VAR_10;
        switch (VAR_5->i_chroma)
        {
        case 134:
        case 130:
            VAR_8 = 8;
            VAR_9 = VAR_10 = 2;
            break;
        case 131:
        case 132:
            VAR_8 = 8;
            VAR_9 = VAR_10 = 1;
            break;
        case 133:
        case 129:
            VAR_8 = 10;
            VAR_9 = VAR_10 = 2;
            break;
        case 128:
            VAR_8 = 16;
            VAR_9 = VAR_10 = 2;
            break;
        default:
            {
                const vlc_chroma_description_t *VAR_11 = FUNC_8(VAR_5->i_chroma);
                if (VAR_11 == ((void*)0))
                {
                    VAR_8 = 8;
                    VAR_9 = VAR_10 = 2;
                }
                else
                {
                    VAR_8 = VAR_11->pixel_bits == 0 ? 8 : VAR_11->pixel_bits /
                                                                   (VAR_11->plane_count==1 ? VAR_11->pixel_size : 1);
                    VAR_9 = VAR_10 = 1;
                    for (size_t VAR_12=0; VAR_12<VAR_11->plane_count; VAR_12++)
                    {
                        if (VAR_9 < VAR_11->p[VAR_12].w.den)
                            VAR_9 = VAR_11->p[VAR_12].w.den;
                        if (VAR_10 < VAR_11->p[VAR_12].h.den)
                            VAR_10 = VAR_11->p[1].h.den;
                    }
                }
            }
            break;
        }


        if ( FUNC_5(VAR_5->i_chroma) )
            VAR_7 = FUNC_2(VAR_4, VAR_5->i_chroma);
        else
            VAR_7 = VAR_6->picQuad.textureFormat;

        bool VAR_13 = !FUNC_9(VAR_5->i_chroma);
        VAR_6->picQuad.textureFormat = FUNC_4(VAR_4, VAR_8,
                                                             VAR_9, VAR_10,
                                                             VAR_7!=((void*)0), VAR_13);
        if (!VAR_6->picQuad.textureFormat && VAR_13)
            VAR_6->picQuad.textureFormat = FUNC_4(VAR_4, VAR_8,
                                                                 VAR_9, VAR_10,
                                                                 VAR_7!=((void*)0), 0);
    }


    if ( !VAR_6->picQuad.textureFormat )
        VAR_6->picQuad.textureFormat = FUNC_4(VAR_4, 0, 0, 0, 0, 0);

    if ( !VAR_6->picQuad.textureFormat )
    {
       FUNC_7(VAR_4, "Could not get a suitable texture pixel format");
       return VAR_2;
    }

    FUNC_6( VAR_4, "Using pixel format %s for chroma %4.4s", VAR_6->picQuad.textureFormat->name,
                 (char *)&VAR_5->i_chroma );

    VAR_5->i_chroma = VAR_7 ? VAR_7->fourcc : VAR_6->picQuad.textureFormat->fourcc;
    FUNC_0( VAR_6->picQuad.textureFormat->formatTexture, VAR_5 );


    VAR_6->regionQuad.textureFormat = FUNC_1(VAR_4, VAR_1);
    if (!VAR_6->regionQuad.textureFormat)
        VAR_6->regionQuad.textureFormat = FUNC_1(VAR_4, VAR_0);

    return VAR_3;
}
