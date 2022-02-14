
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_cmd_r; scalar_t__ i_cmd_w; } ;
typedef TYPE_1__ ts_storage_t ;



__attribute__((used)) static bool FUNC_0( ts_storage_t *VAR_0 )
{
    return !VAR_0 || VAR_0->i_cmd_r >= VAR_0->i_cmd_w;
}
