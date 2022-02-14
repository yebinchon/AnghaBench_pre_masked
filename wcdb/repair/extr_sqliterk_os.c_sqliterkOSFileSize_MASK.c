
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_3__ {scalar_t__ fd; int error; } ;
typedef TYPE_1__ sqliterk_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct stat*) ;

int FUNC_1(sqliterk_file *VAR_4, size_t *VAR_5)
{
    if (!VAR_4 || VAR_4->fd < 0) {
        return VAR_1;
    }
    struct stat VAR_6;
    if (FUNC_0(VAR_4->fd, &VAR_6) != 0) {
        VAR_4->error = VAR_3;
        return VAR_0;
    }
    *VAR_5 = (size_t) VAR_6.st_size;
    return VAR_2;
}
