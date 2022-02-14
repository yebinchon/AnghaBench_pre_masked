
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ color_range; int space; int primaries; int transfer; } ;
typedef TYPE_1__ video_format_t ;
struct TYPE_6__ {int VideoLighting; int VideoTransferFunction; int VideoPrimaries; int VideoTransferMatrix; int NominalRange; } ;
typedef TYPE_2__ DXVA2_ExtendedFormat ;





 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




__attribute__((used)) static void FUNC_0( const video_format_t *VAR_16,
                                DXVA2_ExtendedFormat *VAR_17 )
{
    VAR_17->NominalRange = VAR_16->color_range == VAR_0 ?
                VAR_1 : VAR_2;
    switch (VAR_16->space)
    {
    case 132:
        VAR_17->VideoTransferMatrix = VAR_13;
        break;
    case 131:
        VAR_17->VideoTransferMatrix = VAR_14;
        break;
    default:
        VAR_17->VideoTransferMatrix = VAR_15;
        break;
    }
    VAR_17->VideoLighting = VAR_3;
    switch (VAR_16->primaries)
    {
    case 134:
        VAR_17->VideoPrimaries = VAR_6;
        break;
    case 135:
        VAR_17->VideoPrimaries = VAR_5;
        break;
    case 133:
        VAR_17->VideoPrimaries = VAR_7;
        break;
    default:
        VAR_17->VideoPrimaries = VAR_8;
        break;
    }
    switch (VAR_16->transfer)
    {
    case 130:
        VAR_17->VideoTransferFunction = VAR_10;
        break;
    case 129:
        VAR_17->VideoTransferFunction = VAR_9;
        break;
    case 128:
        VAR_17->VideoTransferFunction = VAR_12;
        break;
    default:
        VAR_17->VideoTransferFunction = VAR_11;
        break;
    }
    VAR_17->VideoLighting = VAR_4;
}
