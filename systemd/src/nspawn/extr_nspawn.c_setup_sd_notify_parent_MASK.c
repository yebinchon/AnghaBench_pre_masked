
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_event_source ;
typedef int sd_event ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int **,int,int ,int ,int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(sd_event *VAR_2, int VAR_3, pid_t *VAR_4, sd_event_source **VAR_5) {
        int VAR_6;

        VAR_6 = FUNC_1(VAR_2, VAR_5, VAR_3, VAR_0, VAR_1, VAR_4);
        if (VAR_6 < 0)
                return FUNC_0(VAR_6, "Failed to allocate notify event source: %m");

        (void) FUNC_2(*VAR_5, "nspawn-notify");

        return 0;
}
