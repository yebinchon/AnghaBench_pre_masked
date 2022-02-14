
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_api_routines ;
typedef int sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(sqlite3 *VAR_3,
       char **VAR_4,
       const sqlite3_api_routines *VAR_5)
{
    int VAR_6;
    const char *VAR_7;
    FUNC_0(VAR_5);


    if (FUNC_1() != 0) {
        *VAR_4 = FUNC_3("failed to load ICU library.");
        return VAR_0;
    }


    VAR_6 = FUNC_5(VAR_3);
    if (VAR_6 != VAR_1)
        goto bail;


    VAR_6 = FUNC_4(VAR_3, VAR_2);
    if (VAR_6 != VAR_1)
        goto bail;


    VAR_6 = FUNC_6(VAR_3);
    if (VAR_6 != VAR_1)
        goto bail;

    *VAR_4 = ((void*)0);
    return VAR_1;

bail:
    VAR_7 = FUNC_2(VAR_3);
    if (!VAR_7)
        VAR_7 = "";
    *VAR_4 = FUNC_3(
        "Failed to register SQLite functions: %s, ErrCode: %d", VAR_7, VAR_6);
    return VAR_6;
}
