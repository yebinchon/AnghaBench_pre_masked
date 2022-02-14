
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_int; } ;
typedef TYPE_1__ vlc_value_t ;



__attribute__((used)) static int FUNC_0( vlc_value_t VAR_0, vlc_value_t VAR_1 )
{
    return VAR_0.i_int == VAR_1.i_int ? 0 : VAR_0.i_int > VAR_1.i_int ? 1 : -1;
}
