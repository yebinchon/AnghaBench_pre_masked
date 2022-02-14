
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqliterk_cipher_conf ;
struct TYPE_6__ {int onParseColumn; int onEndParseBtree; int onBeginParseBtree; int onEndParsePage; int onBeginParsePage; } ;
struct TYPE_7__ {int recursive; TYPE_1__ listen; int pager; } ;
typedef TYPE_2__ sqliterk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,char const*,char*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (char const*,int const*,int *) ;

int FUNC_5(const char *VAR_8,
                 const sqliterk_cipher_conf *VAR_9,
                 sqliterk **VAR_10)
{
    if (!VAR_10) {
        return VAR_0;
    }
    int VAR_11 = VAR_2;
    sqliterk *VAR_12 = FUNC_3(sizeof(sqliterk));
    if (!VAR_12) {
        VAR_11 = VAR_1;
        FUNC_1(VAR_11, "Not enough memory, required: %zu bytes",
                        sizeof(sqliterk));
        goto sqliterkOpen_Failed;
    }

    VAR_11 = FUNC_4(VAR_8, VAR_9, &VAR_12->pager);
    if (VAR_11 != VAR_2) {
        goto sqliterkOpen_Failed;
    }

    VAR_12->listen.onBeginParsePage = VAR_4;
    VAR_12->listen.onEndParsePage = VAR_6;
    VAR_12->listen.onBeginParseBtree = VAR_3;
    VAR_12->listen.onEndParseBtree = VAR_5;
    VAR_12->listen.onParseColumn = VAR_7;
    VAR_12->recursive = 1;

    *VAR_10 = VAR_12;
    FUNC_2(VAR_2, "RepairKit on '%s' opened, %s.", VAR_8,
                   VAR_9 ? "encrypted" : "plain-text");
    return VAR_2;

sqliterkOpen_Failed:
    if (VAR_12) {
        FUNC_0(VAR_12);
    }
    *VAR_10 = ((void*)0);
    return VAR_11;
}
