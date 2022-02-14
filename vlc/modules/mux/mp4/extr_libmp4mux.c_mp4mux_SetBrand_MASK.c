
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint32_t ;
struct TYPE_5__ {int i_minor; int i_major; } ;
struct TYPE_6__ {TYPE_1__ brands; } ;
typedef TYPE_2__ mp4mux_handle_t ;


 int FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(mp4mux_handle_t *VAR_0, vlc_fourcc_t VAR_1, uint32_t VAR_2)
{
    VAR_0->brands.i_major = VAR_1;
    VAR_0->brands.i_minor = VAR_2;
    FUNC_0(VAR_0, VAR_1);
}
