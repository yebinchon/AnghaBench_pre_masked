
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_7__ {scalar_t__ fourcc; scalar_t__ bitsPerChannel; scalar_t__ widthDenominator; scalar_t__ heightDenominator; scalar_t__ formatTexture; scalar_t__* resourceFormat; int * name; } ;
typedef TYPE_1__ d3d_format_t ;
struct TYPE_8__ {int d3ddevice; } ;
typedef TYPE_2__ d3d11_device_t ;
typedef int UINT ;
typedef scalar_t__ DXGI_FORMAT ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

const d3d_format_t *FUNC_5(vlc_object_t *VAR_2,
                                    d3d11_device_t *VAR_3,
                                    vlc_fourcc_t VAR_4,
                                    bool VAR_5,
                                    uint8_t VAR_6,
                                    uint8_t VAR_7,
                                    uint8_t VAR_8,
                                    bool VAR_9,
                                    UINT VAR_10)
{
    VAR_10 |= VAR_0;
    for (const d3d_format_t *VAR_11 = FUNC_2();
         VAR_11->name != ((void*)0); ++VAR_11)
    {
        if (VAR_4 && VAR_4 != VAR_11->fourcc)
            continue;
        if (VAR_6 && VAR_6 > VAR_11->bitsPerChannel)
            continue;
        if (!VAR_9 && FUNC_3(VAR_11->fourcc))
            continue;
        if (VAR_5 && FUNC_4(VAR_11->fourcc))
            continue;
        if (VAR_7 && VAR_7 < VAR_11->widthDenominator)
            continue;
        if (VAR_8 && VAR_8 < VAR_11->heightDenominator)
            continue;

        DXGI_FORMAT VAR_12;
        if (VAR_11->formatTexture == VAR_1)
            VAR_12 = VAR_11->resourceFormat[0];
        else
            VAR_12 = VAR_11->formatTexture;

        if( FUNC_1( VAR_3->d3ddevice, VAR_12, VAR_10 ) &&
            FUNC_0(VAR_2, VAR_3, VAR_11->fourcc, VAR_11->formatTexture) )
            return VAR_11;
    }
    return ((void*)0);
}
