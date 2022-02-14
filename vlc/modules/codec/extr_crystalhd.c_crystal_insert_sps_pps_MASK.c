
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {scalar_t__ p_sps_pps_buf; int i_nal_size; scalar_t__ i_sps_pps_size; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_1( decoder_t *VAR_2,
                                   uint8_t *VAR_3,
                                   uint32_t VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;

    VAR_5->i_sps_pps_size = 0;
    VAR_5->p_sps_pps_buf = FUNC_0( VAR_3, VAR_4,
                           &VAR_5->i_sps_pps_size, &VAR_5->i_nal_size );

    return (VAR_5->p_sps_pps_buf) ? VAR_1 : VAR_0;
}
