
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_device ;
struct TYPE_3__ {int dev_db_clone; int * dev; } ;
typedef TYPE_1__ UdevEvent ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(UdevEvent *VAR_0) {
        sd_device *VAR_1 = VAR_0->dev;
        int VAR_2;

        if (VAR_0->dev_db_clone &&
            FUNC_3(VAR_1, ((void*)0)) < 0) {
                VAR_2 = FUNC_1(VAR_1, VAR_0->dev_db_clone);
                if (VAR_2 < 0)
                        FUNC_2(VAR_1, VAR_2, "Failed to copy properties from cloned sd_device object, ignoring: %m");
        }


        VAR_2 = FUNC_0(VAR_1, "ID_RENAMING", ((void*)0));
        if (VAR_2 < 0)
                return FUNC_2(VAR_1, VAR_2, "Failed to remove 'ID_RENAMING' property: %m");

        return 0;
}
