
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_group; int b_packetized; } ;
struct mock_track {int id; TYPE_1__ fmt; } ;
struct demux_sys {int tracks; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_7__ {int out; struct demux_sys* p_sys; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct mock_track*) ;
 struct mock_track* FUNC_3 (int) ;
 int FUNC_4 (int *,struct mock_track*) ;

__attribute__((used)) static int
FUNC_5(demux_t *VAR_3, const es_format_t *VAR_4, int VAR_5,
                bool VAR_6)
{
    struct demux_sys *VAR_7 = VAR_3->p_sys;
    struct mock_track *VAR_8 = FUNC_3(sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_0;
    VAR_8->fmt = *VAR_4;
    VAR_8->fmt.i_group = VAR_5;
    VAR_8->fmt.b_packetized = VAR_6;
    VAR_8->id = FUNC_1(VAR_3->out, & VAR_8->fmt);
    if (!VAR_8->id)
    {
        FUNC_2(VAR_8);
        return VAR_1;
    }
    bool VAR_9 = FUNC_4(&VAR_7->tracks, VAR_8);
    FUNC_0(VAR_9); (void) VAR_9;
    return VAR_2;
}
