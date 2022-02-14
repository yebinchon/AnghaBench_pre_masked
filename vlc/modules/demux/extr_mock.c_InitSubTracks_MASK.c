
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct demux_sys {int sub_packetized; } ;
typedef int es_format_t ;
struct TYPE_4__ {struct demux_sys* p_sys; } ;
typedef TYPE_1__ demux_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(demux_t *VAR_4, int VAR_5, size_t VAR_6)
{
    struct demux_sys *VAR_7 = VAR_4->p_sys;

    if (VAR_6 == 0)
        return VAR_3;

    for (size_t VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
    {
        es_format_t VAR_9;
        FUNC_1(&VAR_9, VAR_0, VAR_1);

        if (FUNC_0(VAR_4, &VAR_9, VAR_5, VAR_7->sub_packetized))
            return VAR_2;
    }

    return VAR_3;
}
