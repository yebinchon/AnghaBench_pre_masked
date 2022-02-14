
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ i_previous_nal_type; } ;
struct hxxx_helper {TYPE_1__ hevc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hxxx_helper*) ;

__attribute__((used)) static void
FUNC_1(struct hxxx_helper *VAR_2, uint8_t VAR_3)
{
    if ((VAR_3 <= VAR_0 &&
         VAR_2->hevc.i_previous_nal_type != VAR_1) ||
        (VAR_3 == VAR_1 &&
         VAR_2->hevc.i_previous_nal_type != VAR_1))
        FUNC_0(VAR_2);
    VAR_2->hevc.i_previous_nal_type = VAR_3;
}
