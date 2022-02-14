
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sys; } ;
typedef TYPE_2__ vout_display_t ;
typedef int vlc_fourcc_t ;
typedef int d3d_format_t ;
typedef int UINT ;
struct TYPE_5__ {int d3d_dev; } ;


 int VAR_0 ;
 int const* FUNC_0 (TYPE_2__*,int *,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const d3d_format_t *FUNC_2(vout_display_t *VAR_1, vlc_fourcc_t VAR_2)
{
    UINT VAR_3 = VAR_0;
    return FUNC_0( VAR_1, &VAR_1->sys->d3d_dev, VAR_2, 0, 0, 0, 0, FUNC_1(VAR_2), VAR_3 );
}
