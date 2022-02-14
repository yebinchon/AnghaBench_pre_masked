
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqliterk_btree_type ;
const char *FUNC_0(sqliterk_btree_type VAR_0)
{
    char *VAR_1;
    switch (VAR_0) {
        case 133:
            VAR_1 = "sqlite_autoindex";
            break;
        case 130:
            VAR_1 = "sqlite_sequence";
            break;
        case 129:
            VAR_1 = "sqlite_stat";
            break;
        case 131:
            VAR_1 = "sqlite_master";
            break;
        case 128:
            VAR_1 = "table";
            break;
        case 132:
            VAR_1 = "index";
            break;
        default:
            VAR_1 = "unknown";
            break;
    }
    return VAR_1;
}
