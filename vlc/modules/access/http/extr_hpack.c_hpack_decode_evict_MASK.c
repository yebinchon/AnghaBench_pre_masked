
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpack_decoder {scalar_t__ size; scalar_t__ max_size; size_t entries; scalar_t__* table; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 size_t FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hpack_decoder *VAR_0)
{

    size_t VAR_1 = 0;
    while (VAR_0->size > VAR_0->max_size)
    {
        FUNC_0(VAR_1 < VAR_0->entries);

        size_t VAR_2 = FUNC_3(VAR_0->table[VAR_1]);
        size_t VAR_3 = FUNC_3(VAR_0->table[VAR_1] + VAR_2 + 1);

        FUNC_0(VAR_0->size >= 32 + VAR_2 + VAR_3);
        VAR_0->size -= 32 + VAR_2 + VAR_3;
        VAR_1++;
    }


    if (VAR_1 > 0)
    {
        for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
            FUNC_1(VAR_0->table[VAR_4]);

        VAR_0->entries -= VAR_1;
        FUNC_2(VAR_0->table, VAR_0->table + VAR_1,
                sizeof (VAR_0->table[0]) * VAR_0->entries);
    }
}
