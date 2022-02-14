
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_7__ {int i_size; scalar_t__* p_elems; } ;
struct TYPE_5__ {TYPE_4__ extra; } ;
struct TYPE_6__ {TYPE_1__ brands; } ;
typedef TYPE_2__ mp4mux_handle_t ;


 int FUNC_0 (TYPE_4__,scalar_t__) ;

void FUNC_1(mp4mux_handle_t *VAR_0, vlc_fourcc_t VAR_1)
{
    for(int VAR_2=0; VAR_2<VAR_0->brands.extra.i_size; VAR_2++)
        if(VAR_0->brands.extra.p_elems[VAR_2] == VAR_1)
            return;
    FUNC_0(VAR_0->brands.extra, VAR_1);
}
