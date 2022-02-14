
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_lldp ;
typedef int sd_event_source ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_0, uint64_t VAR_1, void *VAR_2) {
        sd_lldp *VAR_3 = VAR_2;
        int VAR_4;

        VAR_4 = FUNC_0(VAR_3, 0);
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to make space: %m");

        VAR_4 = FUNC_1(VAR_3, ((void*)0));
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to restart timer: %m");

        return 0;
}
