
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_lldp_callback_t ;
typedef int sd_lldp ;
typedef int sd_event ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(sd_lldp **VAR_0, sd_event *VAR_1, sd_lldp_callback_t VAR_2, void *VAR_3) {
        int VAR_4;

        VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_3(*VAR_0, 42);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(*VAR_0, VAR_2, VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_0(*VAR_0, VAR_1, 0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_4(*VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        return 0;
}
