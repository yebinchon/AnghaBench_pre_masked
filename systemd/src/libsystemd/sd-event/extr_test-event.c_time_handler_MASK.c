
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_event_source ;


 void* FUNC_0 (char) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,int **,int ,void*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(sd_event_source *VAR_4, uint64_t VAR_5, void *VAR_6) {
        FUNC_4("got timer on %c", FUNC_1(VAR_6));

        if (VAR_6 == FUNC_0('c')) {

                if (VAR_2) {
                        sd_event_source *VAR_7;

                        FUNC_3(FUNC_5(FUNC_6(VAR_4), &VAR_7, VAR_1, FUNC_0('d')) >= 0);
                        FUNC_3(FUNC_7(VAR_7, VAR_0) >= 0);
                } else {
                        FUNC_3(!VAR_3);
                        VAR_3 = 1;
                }
        } else
                FUNC_2("Huh?");

        return 2;
}
