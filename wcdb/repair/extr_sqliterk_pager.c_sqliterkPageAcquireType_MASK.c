
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pagesize; int file; } ;
typedef TYPE_1__ sqliterk_pager ;
typedef int sqliterk_page_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,unsigned char*,size_t*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (unsigned char*,int ,int,int*) ;




 int VAR_2 ;

int FUNC_4(sqliterk_pager *VAR_3,
                            int VAR_4,
                            sqliterk_page_type *VAR_5)
{



    if (!VAR_3 || FUNC_2(VAR_3, VAR_4) != VAR_1 ||
        !VAR_5) {
        return VAR_0;
    }
    int VAR_6 = VAR_1;
    unsigned char VAR_7;
    size_t VAR_8 = 1;
    VAR_6 = FUNC_0(VAR_3->file,
                        FUNC_1(VAR_4) +
                            (VAR_4 - 1) * VAR_3->pagesize,
                        &VAR_7, &VAR_8);
    if (VAR_6 != VAR_1) {
        goto sqliterkPageAcquireType_Failed;
    }

    int VAR_9;
    FUNC_3(&VAR_7, 0, 1, &VAR_9);
    switch (VAR_9) {
        case 131:
        case 130:
        case 129:
        case 128:
            *VAR_5 = VAR_9;
            break;
        default:
            *VAR_5 = VAR_2;
            break;
    }
    return VAR_1;

sqliterkPageAcquireType_Failed:
    *VAR_5 = VAR_2;
    return VAR_6;
}
