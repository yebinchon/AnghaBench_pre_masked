
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int symdir_t ;
struct TYPE_4__ {scalar_t__ dev; scalar_t__ ino; } ;
typedef TYPE_1__ dirkey_t ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(dirkey_t *VAR_4) {



    symdir_t *VAR_5 = ((void*)0);

    if (VAR_4->dev == 0 && VAR_4->ino == 0) {
        return VAR_0;
    }

    FUNC_1(VAR_2, VAR_3, VAR_4, sizeof(dirkey_t), VAR_5);
    if (!VAR_5) {
        FUNC_3("item not found! weird stuff...\n");
        return VAR_0;
    }

    FUNC_0(VAR_2, VAR_3, VAR_5);
    FUNC_2(VAR_5);
    return VAR_1;

}
