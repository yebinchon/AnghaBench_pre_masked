
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t i_sei_count; TYPE_1__* sei_list; } ;
struct hxxx_helper {scalar_t__ i_codec; TYPE_2__ hevc; } ;
struct TYPE_3__ {int * b; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct hxxx_helper *VAR_1)
{
    if (VAR_1->i_codec != VAR_0)
        return;

    for (uint8_t VAR_2=0; VAR_2<VAR_1->hevc.i_sei_count; VAR_2++)
    {
        if(VAR_1->hevc.sei_list[VAR_2].b)
        {
            FUNC_0(VAR_1->hevc.sei_list[VAR_2].b);
            VAR_1->hevc.sei_list[VAR_2].b = ((void*)0);
        }
    }
    VAR_1->hevc.i_sei_count = 0;
}
