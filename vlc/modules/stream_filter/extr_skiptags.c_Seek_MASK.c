
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct skiptags_sys_t {scalar_t__ header_skip; } ;
struct TYPE_3__ {int s; struct skiptags_sys_t* p_sys; } ;
typedef TYPE_1__ stream_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(stream_t *VAR_0, uint64_t VAR_1)
{
    const struct skiptags_sys_t *VAR_2 = VAR_0->p_sys;

    if (FUNC_0(VAR_1 + VAR_2->header_skip < VAR_1))
        return -1;
    return FUNC_1(VAR_0->s, VAR_2->header_skip + VAR_1);
}
