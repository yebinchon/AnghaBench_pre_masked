
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int db; scalar_t__ canceled; } ;
typedef TYPE_1__ mm_backup_ctx ;


 int FUNC_0 (char*,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,char const*,int ,TYPE_1__*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (size_t,char*,char*,char const*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(mm_backup_ctx *VAR_8, const char *VAR_9)
{

    if (VAR_8->canceled)
        return VAR_1;


    char *VAR_10 = ((void*)0);
    int VAR_11 = FUNC_3(VAR_8->db, VAR_9, VAR_7, VAR_8, &VAR_10);
    if (VAR_11 == VAR_4) {

        if (VAR_10)
            FUNC_4(VAR_10);
        return (VAR_8->canceled) ? VAR_1 : VAR_2;
    }

    if (VAR_11 == VAR_5 && (VAR_8->flags & VAR_0)) {

        if (VAR_10) {
            FUNC_0("SQL execution failed: %s [SQL: %s]", VAR_10, VAR_9);
            FUNC_4(VAR_10);
            VAR_10 = ((void*)0);
        }

        size_t VAR_12 = FUNC_6(VAR_9);
        char *VAR_13 = (char *) FUNC_2(VAR_12 + 32);
        if (!VAR_13)
            return VAR_11;
        FUNC_5(VAR_12 + 32, VAR_13, "%s ORDER BY rowid DESC",
                         VAR_9);

        VAR_11 = FUNC_3(VAR_8->db, VAR_13, VAR_7, VAR_8,
                           &VAR_10);
        FUNC_1(VAR_13);
    }

    if (VAR_10) {
        FUNC_0("SQL execution failed: %s [SQL: %s]", VAR_10, VAR_9);
        FUNC_4(VAR_10);
    }
    return (VAR_11 == VAR_6) ? VAR_3 : VAR_2;
}
