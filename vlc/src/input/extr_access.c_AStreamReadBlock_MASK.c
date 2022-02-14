
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct vlc_access_stream_private {scalar_t__ input; } ;
struct input_stats {int input_bitrate; } ;
struct TYPE_10__ {struct TYPE_10__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_11__ {int i_buffer; } ;
typedef TYPE_2__ block_t ;
struct TYPE_12__ {struct input_stats* stats; } ;


 TYPE_7__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct vlc_access_stream_private* FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static block_t *FUNC_6(stream_t *VAR_0, bool *restrict VAR_1)
{
    stream_t *VAR_2 = VAR_0->p_sys;
    block_t * VAR_3;

    if (FUNC_3(VAR_2))
    {
        *VAR_1 = 1;
        return ((void*)0);
    }
    if (FUNC_2())
        return ((void*)0);

    VAR_3 = FUNC_5(VAR_2);

    if (VAR_3 != ((void*)0))
    {
        struct vlc_access_stream_private *VAR_4 = FUNC_4(VAR_0);
        struct input_stats *VAR_5 =
            VAR_4->input ? FUNC_0(VAR_4->input)->stats : ((void*)0);
        if (VAR_5 != ((void*)0))
            FUNC_1(&VAR_5->input_bitrate, VAR_3->i_buffer);
    }

    return VAR_3;
}
