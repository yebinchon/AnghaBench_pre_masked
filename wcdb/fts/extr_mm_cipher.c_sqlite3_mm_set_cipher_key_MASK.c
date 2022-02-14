
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void const*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int **,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(sqlite3 *VAR_2, const void *VAR_3, int VAR_4)
{
    sqlite3_stmt *VAR_5;
    int VAR_6 =
        FUNC_2(VAR_2, "SELECT mm_cipher_key(?)", -1, &VAR_5, ((void*)0));
    if (VAR_6 != VAR_0)
        return VAR_6;

    FUNC_0(VAR_5, 1, VAR_3, VAR_4, VAR_1);
    FUNC_3(VAR_5);

    return FUNC_1(VAR_5);
}
