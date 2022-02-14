
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hxxx_helper_nal {int * b; } ;
struct TYPE_2__ {scalar_t__ i_sps_count; size_t i_current_sps; struct hxxx_helper_nal* sps_list; } ;
struct hxxx_helper {TYPE_1__ h264; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static const struct hxxx_helper_nal *
FUNC_1(const struct hxxx_helper *VAR_0)
{
    if (VAR_0->h264.i_sps_count == 0)
        return ((void*)0);

    const struct hxxx_helper_nal *VAR_1 =
        &VAR_0->h264.sps_list[VAR_0->h264.i_current_sps];
    FUNC_0(VAR_1->b != ((void*)0));
    return VAR_1;
}
