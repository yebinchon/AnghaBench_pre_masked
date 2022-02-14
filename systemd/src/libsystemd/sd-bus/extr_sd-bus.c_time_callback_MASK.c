
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_event_source ;
typedef int sd_bus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_0, uint64_t VAR_1, void *VAR_2) {
        sd_bus *VAR_3 = VAR_2;
        int VAR_4;

        FUNC_0(VAR_3);

        VAR_4 = FUNC_3(VAR_3, ((void*)0));
        if (VAR_4 < 0) {
                FUNC_2(VAR_4, "Processing of bus failed, closing down: %m");
                FUNC_1(VAR_3);
        }

        return 1;
}
