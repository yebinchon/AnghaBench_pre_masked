
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqliterk_btree ;
struct TYPE_5__ {int (* didParsePage ) (TYPE_2__*,int) ;} ;
struct TYPE_6__ {TYPE_1__ notify; int pager; } ;
typedef TYPE_2__ sqliterk ;




 int VAR_0 ;

 int FUNC_0 (int const,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4(sqliterk *VAR_4,
                                          sqliterk_btree *VAR_5,
                                          int VAR_6,
                                          int VAR_7)
{
    if (!VAR_4) {
        return;
    }
    switch (VAR_7) {
        case 128:
            FUNC_2(VAR_4->pager, VAR_6, VAR_1);
            break;
        case 129:
            FUNC_2(VAR_4->pager, VAR_6, VAR_2);
            break;
        case 130:
            FUNC_0(130, "Cancelled parsing page %d.",
                            VAR_6);
            break;
        default:
            FUNC_1(VAR_0,
                              "Cannot parse page %d. Invalid type.", VAR_6);
            FUNC_2(VAR_4->pager, VAR_6, VAR_3);
            break;
    }

    if (VAR_4->notify.didParsePage) {
        VAR_4->notify.didParsePage(VAR_4, VAR_6);
    }
}
