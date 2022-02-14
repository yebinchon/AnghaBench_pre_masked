
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ PaDeviceInfo ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*) ;

int FUNC_3()
{
    int VAR_0 = 0;

    for (VAR_0 = 0; VAR_0 < FUNC_0(); ++VAR_0) {
        const PaDeviceInfo *VAR_1 = FUNC_1(VAR_0);

        if (VAR_1)
            FUNC_2("%d) %s\n", VAR_0, VAR_1->name);
    }

    return 0;
}
