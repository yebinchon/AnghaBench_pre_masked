
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int key; } ;
typedef TYPE_1__ symdir_t ;
struct stat {int st_ino; int st_dev; } ;
struct TYPE_10__ {int ino; int dev; } ;
typedef TYPE_2__ dirkey_t ;


 int FUNC_0 (int ,int ,int ,int,TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (char const*,struct stat*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(const char *VAR_6, dirkey_t *VAR_7) {



    struct stat VAR_8;
    symdir_t *VAR_9 = ((void*)0);
    symdir_t *VAR_10 = ((void*)0);

    FUNC_5(VAR_7, 0, sizeof(dirkey_t));
    VAR_7->dev = 0;
    VAR_7->ino = 0;

    int VAR_11 = FUNC_6(VAR_6, &VAR_8);
    if (VAR_11 != 0) {
        FUNC_3("Error stat()ing: %s", VAR_6);
        return VAR_0;
    }

    VAR_7->dev = VAR_8.st_dev;
    VAR_7->ino = VAR_8.st_ino;

    FUNC_1(VAR_3, VAR_5, VAR_7, sizeof(dirkey_t), VAR_9);
    if (VAR_9) {
        return VAR_1;
    }

    VAR_10 = (symdir_t *)FUNC_2(sizeof(symdir_t));
    FUNC_4(&VAR_10->key, VAR_7, sizeof(dirkey_t));
    FUNC_0(VAR_3, VAR_5, VAR_4, sizeof(dirkey_t), VAR_10);
    return VAR_2;

}
