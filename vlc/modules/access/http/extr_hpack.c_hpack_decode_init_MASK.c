
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpack_decoder {size_t max_size; scalar_t__ size; scalar_t__ entries; int * table; } ;


 struct hpack_decoder* FUNC_0 (int) ;

struct hpack_decoder *FUNC_1(size_t VAR_0)
{
    struct hpack_decoder *VAR_1 = FUNC_0(sizeof (*VAR_1));
    if (VAR_1 == ((void*)0))
        return ((void*)0);

    VAR_1->table = ((void*)0);
    VAR_1->entries = 0;
    VAR_1->size = 0;
    VAR_1->max_size = VAR_0;
    return VAR_1;
}
