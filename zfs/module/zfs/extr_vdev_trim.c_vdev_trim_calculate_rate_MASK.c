
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int trim_bytes_done; scalar_t__ trim_start_time; } ;
typedef TYPE_1__ trim_args_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static uint64_t
FUNC_2(trim_args_t *VAR_0)
{
 return (VAR_0->trim_bytes_done * 1000 /
     (FUNC_0(FUNC_1() - VAR_0->trim_start_time) + 1));
}
