
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_pid; } ;
typedef TYPE_1__ ts_pid_t ;
struct searchkey {scalar_t__ i_pid; void const* pp_last; } ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    struct searchkey *VAR_2 = (void *)VAR_0;
    ts_pid_t *const *VAR_3 = VAR_1;

    ts_pid_t *VAR_4 = *VAR_3;
    VAR_2->pp_last = VAR_1;
    return ( VAR_2->i_pid >= VAR_4->i_pid ) ? VAR_2->i_pid - VAR_4->i_pid : -1;
}
