
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ b_bool; } ;
typedef TYPE_1__ vlc_value_t ;



__attribute__((used)) static int FUNC_0( vlc_value_t VAR_0, vlc_value_t VAR_1 )
{
    return VAR_0.b_bool ? VAR_1.b_bool ? 0 : 1 : VAR_1.b_bool ? -1 : 0;
}
