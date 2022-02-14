
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; void* path; } ;
typedef TYPE_1__ sqliterk_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,int,...) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (void*,char const*,size_t) ;

int FUNC_7(const char *VAR_6, sqliterk_file **VAR_7)
{
    if (!VAR_6 || !VAR_6[0] || !VAR_7) {
        return VAR_2;
    }
    int VAR_8 = VAR_4;
    sqliterk_file *VAR_9 = FUNC_3(sizeof(sqliterk_file));
    if (!VAR_9) {
        VAR_8 = VAR_3;
        FUNC_2(VAR_8, "Not enough memory, required %zu bytes.",
                        sizeof(sqliterk_file));
        goto sqliterkOSReadOnlyOpen_Failed;
    }

    size_t VAR_10 = sizeof(char) * (FUNC_5(VAR_6) + 1);
    VAR_9->path = FUNC_3(VAR_10);
    if (!VAR_9->path) {
        VAR_8 = VAR_3;
        FUNC_2(VAR_8, "Not enough memory, required %zu bytes.", VAR_10);
        goto sqliterkOSReadOnlyOpen_Failed;
    }
    FUNC_6(VAR_9->path, VAR_6, VAR_10);


    VAR_9->fd = FUNC_0(VAR_9->path, VAR_0);
    if (VAR_9->fd < 0) {
        VAR_8 = VAR_1;
        FUNC_2(VAR_8, "Cannot open '%s' for reading: %s", VAR_9->path,
                        FUNC_4(VAR_5));
        goto sqliterkOSReadOnlyOpen_Failed;
    }
    *VAR_7 = VAR_9;
    return VAR_4;

sqliterkOSReadOnlyOpen_Failed:
    if (VAR_9) {
        FUNC_1(VAR_9);
    }
    *VAR_7 = ((void*)0);
    return VAR_8;
}
