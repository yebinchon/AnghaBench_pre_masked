
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_list {scalar_t__ i_max; scalar_t__ i_count; int * p_entries; } ;


 int FUNC_0 (int *,scalar_t__) ;

void
FUNC_1(struct ks_list *VAR_0)
{
    FUNC_0(VAR_0->p_entries, VAR_0->i_count);
    VAR_0->p_entries = ((void*)0);
    VAR_0->i_count = 0;
    VAR_0->i_max = 0;
}
