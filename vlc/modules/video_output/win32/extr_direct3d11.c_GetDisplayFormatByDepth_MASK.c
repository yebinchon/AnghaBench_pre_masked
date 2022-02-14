
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vout_display_t ;
typedef int uint8_t ;
typedef int d3d_format_t ;
typedef int UINT ;
struct TYPE_5__ {int d3d_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (TYPE_2__*,int *,int ,int,int ,int ,int ,int,int ) ;

__attribute__((used)) static const d3d_format_t *FUNC_1(vout_display_t *VAR_2, uint8_t VAR_3,
                                                   uint8_t VAR_4,
                                                   uint8_t VAR_5,
                                                   bool VAR_6,
                                                   bool VAR_7)
{
    UINT VAR_8 = VAR_0;
    if (VAR_6)
        VAR_8 |= VAR_1;
    return FUNC_0( VAR_2, &VAR_2->sys->d3d_dev, 0, VAR_7,
                            VAR_3, VAR_4, VAR_5,
                            0, VAR_8 );
}
