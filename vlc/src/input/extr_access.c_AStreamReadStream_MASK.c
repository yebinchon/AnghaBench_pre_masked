
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vlc_access_stream_private {scalar_t__ input; } ;
struct input_stats {int input_bitrate; } ;
struct TYPE_7__ {struct TYPE_7__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;
struct TYPE_8__ {struct input_stats* stats; } ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct vlc_access_stream_private* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_t *VAR_3 = VAR_0->p_sys;

    if (FUNC_3(VAR_3))
        return 0;
    if (FUNC_2())
        return -1;

    ssize_t VAR_4 = FUNC_5(VAR_3, VAR_1, VAR_2);

    if (VAR_4 > 0)
    {
        struct vlc_access_stream_private *VAR_5 = FUNC_4(VAR_0);
        struct input_stats *VAR_6 =
            VAR_5->input ? FUNC_0(VAR_5->input)->stats : ((void*)0);
        if (VAR_6 != ((void*)0))
            FUNC_1(&VAR_6->input_bitrate, VAR_4);
    }

    return VAR_4;
}
