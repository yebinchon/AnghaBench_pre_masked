
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_pid; } ;
typedef TYPE_1__ pmt_map_t ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    int VAR_2 = ((pmt_map_t *)VAR_0)->i_pid;
    int VAR_3 = ((pmt_map_t *)VAR_1)->i_pid;

    return VAR_2 - VAR_3;
}
