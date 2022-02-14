
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqliterk_page_type ;







const char *FUNC_0(sqliterk_page_type VAR_0)
{
    char *VAR_1;
    switch (VAR_0) {
        case 131:
            VAR_1 = "interior-index btree";
            break;
        case 130:
            VAR_1 = "interior-table btree";
            break;
        case 129:
            VAR_1 = "leaf-index btree";
            break;
        case 128:
            VAR_1 = "leaf-table btree";
            break;
        default:
            VAR_1 = "unknown page";
            break;
    }
    return VAR_1;
}
