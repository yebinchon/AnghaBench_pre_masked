
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {unsigned int i_track_id; int fmt; int i_timescale; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;
struct TYPE_15__ {int tracks; } ;
typedef TYPE_2__ mp4mux_handle_t ;
struct TYPE_16__ {int i_codec; int i_cat; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (int *,TYPE_3__ const*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,TYPE_1__*) ;

mp4mux_trackinfo_t * FUNC_8(mp4mux_handle_t *VAR_0, unsigned VAR_1,
                                      const es_format_t *VAR_2, uint32_t VAR_3)
{
    if(FUNC_6(VAR_1 == 0))
        return ((void*)0);
    mp4mux_trackinfo_t *VAR_4 = FUNC_3(sizeof(*VAR_4));
    if(!VAR_4 || !FUNC_5(VAR_4, 0, 0))
    {
        FUNC_2(VAR_4);
        return ((void*)0);
    }
    VAR_4->i_track_id = VAR_1;
    VAR_4->i_timescale = VAR_3;
    FUNC_1(&VAR_4->fmt, VAR_2->i_cat, VAR_2->i_codec);
    FUNC_0(&VAR_4->fmt, VAR_2);
    FUNC_7(&VAR_0->tracks, VAR_4);
    FUNC_4(VAR_0, VAR_2);
    return VAR_4;
}
