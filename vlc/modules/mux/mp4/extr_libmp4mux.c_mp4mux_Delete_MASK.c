
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int extra; } ;
struct TYPE_9__ {TYPE_1__ brands; int tracks; } ;
typedef TYPE_2__ mp4mux_trackinfo_t ;
typedef TYPE_2__ mp4mux_handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,size_t) ;

void FUNC_6(mp4mux_handle_t *VAR_0)
{
    for(size_t VAR_1=0; VAR_1<FUNC_4(&VAR_0->tracks); VAR_1++)
    {
        mp4mux_trackinfo_t *VAR_2 = FUNC_5(&VAR_0->tracks, VAR_1);
        FUNC_2(VAR_2);
        FUNC_1(VAR_2);
    }
    FUNC_3(&VAR_0->tracks);
    FUNC_0(VAR_0->brands.extra);
    FUNC_1(VAR_0);
}
