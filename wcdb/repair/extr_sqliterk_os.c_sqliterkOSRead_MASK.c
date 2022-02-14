
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_3__ {scalar_t__ fd; scalar_t__ error; } ;
typedef TYPE_1__ sqliterk_file ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int,int ) ;
 size_t FUNC_1 (scalar_t__,unsigned char*,size_t) ;

int FUNC_2(sqliterk_file *VAR_7,
                   off_t VAR_8,
                   unsigned char *VAR_9,
                   size_t *VAR_10)
{
    if (!VAR_7 || VAR_7->fd < 0) {
        return VAR_3;
    }
    off_t VAR_11 = FUNC_0(VAR_7->fd, VAR_8, VAR_1);
    if (VAR_11 == -1) {
        VAR_7->error = VAR_6;
        return VAR_2;
    }
    size_t VAR_12 = *VAR_10;
    size_t VAR_13 = 0;
    ssize_t VAR_14 = 0;
    do {
        VAR_14 = FUNC_1(VAR_7->fd, VAR_9, VAR_12);
        if (VAR_14 < 0) {
            if (VAR_6 == VAR_0) {
                VAR_14 = 1;
                continue;
            }
            VAR_7->error = VAR_6;
            return VAR_2;
        } else if (VAR_14 > 0) {
            VAR_12 -= VAR_14;
            VAR_13 += VAR_14;
            VAR_9 = VAR_9 + VAR_14;
        }
    } while (VAR_14 > 0 && VAR_12 > 0);
    *VAR_10 = VAR_13;
    if (VAR_12 > 0) {
        return VAR_5;
    }
    return VAR_4;
}
