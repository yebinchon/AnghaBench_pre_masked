
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hxxx_helper_nal {int dummy; } ;
struct TYPE_2__ {size_t i_sei_count; struct hxxx_helper_nal* sei_list; } ;
struct hxxx_helper {scalar_t__ i_codec; TYPE_1__ hevc; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hxxx_helper_nal*,int const*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct hxxx_helper *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    if(VAR_2->i_codec != VAR_1)
        return;

    if(VAR_2->hevc.i_sei_count == VAR_0)
        return;

    struct hxxx_helper_nal *VAR_5 = &VAR_2->hevc.sei_list[VAR_2->hevc.i_sei_count];
    if (FUNC_0(VAR_5, VAR_3, VAR_4))
        return;
    VAR_2->hevc.i_sei_count++;
}
