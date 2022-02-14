
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {unsigned int i_track_id; int fmt; int i_timescale; } ;
typedef TYPE_1__ mp4mux_trackinfo_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool FUNC_2(mp4mux_trackinfo_t *VAR_0, unsigned VAR_1,
                                  uint32_t VAR_2)
{
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->i_track_id = VAR_1;

    VAR_0->i_timescale = VAR_2;
    FUNC_0(&VAR_0->fmt, 0, 0);

    return 1;
}
