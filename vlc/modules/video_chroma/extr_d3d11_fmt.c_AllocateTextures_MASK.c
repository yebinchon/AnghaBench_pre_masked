
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int vlc_object_t ;
struct TYPE_23__ {unsigned int plane_count; int pixel_size; TYPE_4__* p; } ;
typedef TYPE_5__ vlc_chroma_description_t ;
struct TYPE_24__ {int i_height; int i_width; int i_visible_height; int i_visible_width; int i_chroma; } ;
typedef TYPE_6__ video_format_t ;
typedef int texDesc ;
struct TYPE_25__ {int i_lines; int i_visible_lines; int i_pitch; int i_visible_pitch; int i_pixel_pitch; } ;
typedef TYPE_7__ plane_t ;
struct TYPE_26__ {scalar_t__ formatTexture; scalar_t__* resourceFormat; } ;
typedef TYPE_8__ d3d_format_t ;
struct TYPE_27__ {int d3ddevice; } ;
typedef TYPE_9__ d3d11_device_t ;
struct TYPE_21__ {int num; int den; } ;
struct TYPE_20__ {int num; int den; } ;
struct TYPE_22__ {TYPE_3__ w; TYPE_2__ h; } ;
struct TYPE_19__ {int Count; } ;
struct TYPE_18__ {int MipLevels; unsigned int ArraySize; scalar_t__ Format; int Height; int Width; scalar_t__ CPUAccessFlags; int Usage; int BindFlags; scalar_t__ MiscFlags; TYPE_1__ SampleDesc; } ;
typedef int ID3D11Texture2D ;
typedef int HRESULT ;
typedef TYPE_10__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_10__*,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_10__*,int) ;
 unsigned int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*,unsigned int,int ) ;
 TYPE_5__* FUNC_10 (int ) ;

int FUNC_11( vlc_object_t *VAR_10, d3d11_device_t *VAR_11,
                      const d3d_format_t *VAR_12, const video_format_t *VAR_13,
                      unsigned VAR_14, ID3D11Texture2D *VAR_15[],
                      plane_t VAR_16[] )
{
    plane_t VAR_17[VAR_7];
    unsigned VAR_18, VAR_19;
    HRESULT VAR_20;
    ID3D11Texture2D *VAR_21 = ((void*)0);
    D3D11_TEXTURE2D_DESC VAR_22;
    FUNC_4(&VAR_22, sizeof(VAR_22));
    VAR_22.MipLevels = 1;
    VAR_22.SampleDesc.Count = 1;
    VAR_22.MiscFlags = 0;
    VAR_22.BindFlags = VAR_1;
    if (FUNC_7(VAR_13->i_chroma)) {
        VAR_22.BindFlags |= VAR_0;
        VAR_22.Usage = VAR_4;
        VAR_22.CPUAccessFlags = 0;
    } else {
        VAR_22.Usage = VAR_5;
        VAR_22.CPUAccessFlags = VAR_2;
    }
    VAR_22.ArraySize = VAR_14;

    const vlc_chroma_description_t *VAR_23 = FUNC_10( VAR_13->i_chroma );
    if( !VAR_23 )
        return VAR_8;

    if (VAR_12->formatTexture == VAR_6) {
        if (VAR_23->plane_count == 0)
        {
            FUNC_8(VAR_10, "failed to get the pixel format planes for %4.4s", (char *)&VAR_13->i_chroma);
            return VAR_8;
        }
        FUNC_6(VAR_23->plane_count <= VAR_3);
        VAR_19 = VAR_23->plane_count;

        VAR_22.Format = VAR_12->resourceFormat[0];
        FUNC_6(VAR_12->resourceFormat[1] == VAR_12->resourceFormat[0]);
        FUNC_6(VAR_12->resourceFormat[2] == VAR_12->resourceFormat[0]);

    } else {
        VAR_19 = FUNC_5(1, VAR_23->plane_count);
        VAR_22.Format = VAR_12->formatTexture;
        VAR_22.Height = VAR_13->i_height;
        VAR_22.Width = VAR_13->i_width;

        VAR_20 = FUNC_1( VAR_11->d3ddevice, &VAR_22, ((void*)0), &VAR_21 );
        if (FUNC_0(VAR_20)) {
            FUNC_9(VAR_10, "CreateTexture2D failed for the %d pool. (hr=0x%lX)", VAR_14, VAR_20);
            goto error;
        }
    }
    for( unsigned VAR_24 = 0; VAR_24 < VAR_23->plane_count; VAR_24++ )
    {
        plane_t *VAR_25 = &VAR_17[VAR_24];

        VAR_25->i_lines = VAR_13->i_height * VAR_23->p[VAR_24].h.num / VAR_23->p[VAR_24].h.den;
        VAR_25->i_visible_lines = VAR_13->i_visible_height * VAR_23->p[VAR_24].h.num / VAR_23->p[VAR_24].h.den;
        VAR_25->i_pitch = VAR_13->i_width * VAR_23->p[VAR_24].w.num / VAR_23->p[VAR_24].w.den * VAR_23->pixel_size;
        VAR_25->i_visible_pitch = VAR_13->i_visible_width * VAR_23->p[VAR_24].w.num / VAR_23->p[VAR_24].w.den * VAR_23->pixel_size;
        VAR_25->i_pixel_pitch = VAR_23->pixel_size;
    }

    for (unsigned VAR_26 = 0; VAR_26 < VAR_14; VAR_26++) {
        for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
        {
            if (VAR_21) {
                VAR_15[VAR_26 * VAR_3 + VAR_18] = VAR_21;
                FUNC_2(VAR_21);
            } else {
                VAR_22.Height = VAR_17[VAR_18].i_lines;
                VAR_22.Width = VAR_17[VAR_18].i_pitch;
                VAR_20 = FUNC_1( VAR_11->d3ddevice, &VAR_22, ((void*)0), &VAR_15[VAR_26 * VAR_3 + VAR_18] );
                if (FUNC_0(VAR_20)) {
                    FUNC_9(VAR_10, "CreateTexture2D failed for the %d pool. (hr=0x%lX)", VAR_14, VAR_20);
                    goto error;
                }
            }
        }
        if (VAR_16)
            for (VAR_18 = 0; VAR_18 < VAR_23->plane_count; VAR_18++)
            {
                VAR_16[VAR_18] = VAR_17[VAR_18];
            }
        for (; VAR_18 < VAR_3; VAR_18++) {
            if (!VAR_12->resourceFormat[VAR_18])
                VAR_15[VAR_26 * VAR_3 + VAR_18] = ((void*)0);
            else
            {
                VAR_15[VAR_26 * VAR_3 + VAR_18] = VAR_15[VAR_26 * VAR_3];
                FUNC_2(VAR_15[VAR_26 * VAR_3 + VAR_18]);
            }
        }
    }

    if (VAR_21)
        FUNC_3(VAR_21);
    return VAR_9;
error:
    if (VAR_21)
        FUNC_3(VAR_21);
    return VAR_8;
}
