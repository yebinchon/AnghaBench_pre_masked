
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpack_decoder {char** table; int entries; int size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hpack_decoder*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 char** FUNC_4 (char**,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct hpack_decoder *VAR_0,
                            const char *VAR_1, const char *VAR_2)
{
    size_t VAR_3 = FUNC_5(VAR_1), VAR_4 = FUNC_5(VAR_2);
    char *VAR_5 = FUNC_2(VAR_3 + VAR_4 + 2);
    if (VAR_5 == ((void*)0))
        return -1;
    FUNC_3(VAR_5, VAR_1, VAR_3 + 1);
    FUNC_3(VAR_5 + VAR_3 + 1, VAR_2, VAR_4 + 1);

    char **VAR_6 = FUNC_4(VAR_0->table,
                            sizeof (VAR_0->table[0]) * (VAR_0->entries + 1));
    if (VAR_6 == ((void*)0))
    {
        FUNC_0(VAR_5);
        return -1;
    }

    VAR_0->table = VAR_6;
    VAR_0->table[VAR_0->entries] = VAR_5;
    VAR_0->entries++;
    VAR_0->size += 32 + VAR_3 + VAR_4;

    FUNC_1(VAR_0);
    return 0;
}
