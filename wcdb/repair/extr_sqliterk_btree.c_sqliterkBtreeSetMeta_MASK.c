
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sqliterk_btree_type ;
struct TYPE_3__ {scalar_t__ type; int * name; } ;
typedef TYPE_1__ sqliterk_btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,char const*,size_t) ;

int FUNC_7(sqliterk_btree *VAR_6,
                         const char *VAR_7,
                         sqliterk_btree_type VAR_8)
{
    if (!VAR_6) {
        return VAR_0;
    }
    if (VAR_6->name) {
        FUNC_2(VAR_6->name);
        VAR_6->name = ((void*)0);
    }
    if (VAR_7) {
        size_t VAR_9 = FUNC_4(VAR_7);
        VAR_6->name = FUNC_3(sizeof(char) * (VAR_9 + 1));
        if (!VAR_6->name) {
            return VAR_1;
        }
        FUNC_6(VAR_6->name, VAR_7, VAR_9);

        sqliterk_btree_type VAR_10;
        for (VAR_10 = VAR_3;
             VAR_10 < VAR_4; VAR_10++) {
            const char *VAR_11 = FUNC_0(VAR_10);
            if (FUNC_5(VAR_6->name, VAR_11, FUNC_4(VAR_11)) == 0) {
                VAR_6->type = VAR_10;
                break;
            }
        }
    } else {
        VAR_6->name = ((void*)0);
    }
    if (!FUNC_1(VAR_6->type) &&
        VAR_8 != VAR_5) {
        VAR_6->type = VAR_8;
    }
    return VAR_2;
}
