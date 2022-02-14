
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int ,int,int **) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(sd_bus **VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);

        if (*VAR_3)
                return 0;

        VAR_4 = FUNC_1(VAR_2, VAR_1, 0, VAR_3);
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to connect to bus: %m");

        (void) FUNC_3(*VAR_3, VAR_0);

        return 0;
}
