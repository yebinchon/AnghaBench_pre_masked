
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skiptags_sys_t {int * p_tags; scalar_t__ header_skip; } ;


 struct skiptags_sys_t* FUNC_0 (int) ;

__attribute__((used)) static struct skiptags_sys_t * FUNC_1(void)
{
    struct skiptags_sys_t *VAR_0 = FUNC_0(sizeof (*VAR_0));
    if(VAR_0)
    {
        VAR_0->header_skip = 0;
        VAR_0->p_tags = ((void*)0);
    }
    return VAR_0;
}
