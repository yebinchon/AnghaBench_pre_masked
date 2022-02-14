
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* decoder_create ) (int ,int ,int ,int ,int ,int *) ;} ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ vdp_t ;
typedef int uint32_t ;
typedef int VdpStatus ;
typedef int VdpDevice ;
typedef int VdpDecoderProfile ;
typedef int VdpDecoder ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *) ;

VdpStatus FUNC_2(const vdp_t *VAR_1, VdpDevice VAR_2,
    VdpDecoderProfile VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    VdpDecoder *VAR_7)
{
    FUNC_0(VAR_0);
    return VAR_1->vt.decoder_create(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
