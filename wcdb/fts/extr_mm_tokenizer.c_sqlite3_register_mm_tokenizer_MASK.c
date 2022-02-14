
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_tokenizer_module ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int const**,int,int ) ;
 int FUNC_1 (int *,int,char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int **,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(sqlite3 *VAR_3)
{
    const sqlite3_tokenizer_module *VAR_4 = &VAR_2;
    sqlite3_stmt *VAR_5 = ((void*)0);
    int VAR_6;

    VAR_6 =
        FUNC_3(VAR_3, "SELECT fts3_tokenizer(?, ?)", -1, &VAR_5, 0);
    if (VAR_6 != VAR_0)
        return VAR_6;

    FUNC_1(VAR_5, 1, "mmicu", -1, VAR_1);
    FUNC_0(VAR_5, 2, &VAR_4, sizeof(sqlite3_tokenizer_module *),
                      VAR_1);
    FUNC_4(VAR_5);

    return FUNC_2(VAR_5);
}
