
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine_info {int dummy; } ;
typedef int sd_bus ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct machine_info*,int) ;
 int FUNC_2 (int *,struct machine_info**,int ) ;
 int FUNC_3 (struct machine_info*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char**,int) ;
 int FUNC_6 (struct machine_info*,int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, char *VAR_4[], void *VAR_5) {
        struct machine_info *VAR_6 = ((void*)0);
        sd_bus *VAR_7;
        int VAR_8;

        VAR_8 = FUNC_0(VAR_0, &VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_2(VAR_7, &VAR_6, FUNC_5(VAR_4, 1));
        if (VAR_8 < 0)
                return VAR_8;

        (void) FUNC_4(VAR_1);

        FUNC_6(VAR_6, VAR_8, VAR_2);
        FUNC_3(VAR_6, VAR_8);
        FUNC_1(VAR_6, VAR_8);

        return 0;
}
