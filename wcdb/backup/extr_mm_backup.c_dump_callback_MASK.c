
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* condition; } ;
typedef TYPE_1__ mm_backup_tabdesc ;
struct TYPE_6__ {int flags; int writable_schema; int num_tabdesc; scalar_t__ tabdesc; scalar_t__ canceled; } ;
typedef TYPE_2__ mm_backup_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,char const*,char const*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,char const*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*,char const*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_9(void *VAR_6, int VAR_7, char **VAR_8, char **VAR_9)
{
    mm_backup_ctx *VAR_10 = (mm_backup_ctx *) VAR_6;
    const char *VAR_11 = VAR_8[0];
    const char *VAR_12 = VAR_8[1];
    const char *VAR_13 = VAR_8[2];
    int VAR_14;


    if (VAR_10->canceled)
        return -1;


    if (!FUNC_6(VAR_11, "sqlite_sequence")) {
        if (FUNC_2(VAR_10, VAR_2,
                            FUNC_7("DELETE FROM sqlite_sequence;")) !=
            0)
            return -1;
    } else if (!FUNC_5("sqlite_stat?", VAR_11)) {
        if (FUNC_2(VAR_10, VAR_2,
                            FUNC_7("ANALYZE sqlite_master;")))
            return -1;
    } else if (!FUNC_8(VAR_11, "sqlite_", 7)) {
        return 0;
    }


    const char *VAR_15 = ((void*)0);
    if (VAR_10->tabdesc) {
        const mm_backup_tabdesc *VAR_16 = (const mm_backup_tabdesc *) FUNC_0(
            VAR_11, VAR_10->tabdesc, VAR_10->num_tabdesc, sizeof(mm_backup_tabdesc),
            VAR_5);
        if (!VAR_16)
            return 0;

        VAR_15 = VAR_16->condition;
    }

    if (!FUNC_8(VAR_13, "CREATE VIRTUAL TABLE", 20)) {
        if (!(VAR_10->flags & VAR_1)) {
            if (!VAR_10->writable_schema) {
                if (FUNC_2(
                        VAR_10, VAR_2,
                        FUNC_7("PRAGMA writable_schema=ON;")))
                    return -1;
                VAR_10->writable_schema = 1;
            }

            char *VAR_17 = FUNC_4(
                "INSERT INTO sqlite_master(type,name,tbl_name,rootpage,sql)"
                "VALUES('table','%q','%q',0,'%q');",
                VAR_11, VAR_11, VAR_13);
            if (FUNC_2(VAR_10, VAR_2, VAR_17, -1))
                return -1;
            FUNC_3(VAR_17);
        }

        return 0;
    } else if (!(VAR_10->flags & VAR_1)) {
        if (FUNC_2(VAR_10, VAR_2, VAR_13, -1))
            return -1;
    }


    if (!FUNC_6(VAR_12, "table")) {
        VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_15, 0);
        if (VAR_14 == VAR_3 && !VAR_15 &&
            (VAR_10->flags & VAR_0)) {
            VAR_14 = FUNC_1(VAR_10, VAR_11, VAR_15, 1);
            if (VAR_14 == VAR_3)
                VAR_14 = VAR_4;
        }
        if (VAR_14 != VAR_4)
            return -1;
    }
    return 0;
}
