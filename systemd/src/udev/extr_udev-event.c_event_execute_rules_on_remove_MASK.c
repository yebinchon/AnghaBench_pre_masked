
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
typedef int sd_device ;
typedef int UdevRules ;
struct TYPE_4__ {int * dev; } ;
typedef TYPE_1__ UdevEvent ;
typedef int Hashmap ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int,char*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
                UdevEvent *VAR_0,
                usec_t VAR_1,
                Hashmap *VAR_2,
                UdevRules *VAR_3) {

        sd_device *VAR_4 = VAR_0->dev;
        int VAR_5;

        VAR_5 = FUNC_1(VAR_4, 1);
        if (VAR_5 < 0)
                FUNC_3(VAR_4, VAR_5, "Failed to read database under /run/udev/data/: %m");

        VAR_5 = FUNC_2(VAR_4, ((void*)0), 0);
        if (VAR_5 < 0)
                FUNC_3(VAR_4, VAR_5, "Failed to remove corresponding tag files under /run/udev/tag/, ignoring: %m");

        VAR_5 = FUNC_0(VAR_4);
        if (VAR_5 < 0)
                FUNC_3(VAR_4, VAR_5, "Failed to delete database under /run/udev/data/, ignoring: %m");

        if (FUNC_4(VAR_4, ((void*)0)) >= 0)
                (void) FUNC_7(VAR_4);

        (void) FUNC_6(VAR_3, VAR_0, VAR_1, VAR_2);

        if (FUNC_4(VAR_4, ((void*)0)) >= 0)
                (void) FUNC_5(VAR_4);
}
