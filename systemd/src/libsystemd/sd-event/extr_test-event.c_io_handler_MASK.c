
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sd_event_source ;


 void* FUNC_0 (char) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_5, int VAR_6, uint32_t VAR_7, void *VAR_8) {

        FUNC_4("got IO on %c", FUNC_1(VAR_8));

        if (VAR_8 == FUNC_0('a')) {
                FUNC_3(FUNC_5(VAR_5, VAR_0) >= 0);
                FUNC_3(!VAR_2);
                VAR_2 = 1;
        } else if (VAR_8 == FUNC_0('b')) {
                FUNC_3(!VAR_3);
                VAR_3 = 1;
        } else if (VAR_8 == FUNC_0('d')) {
                VAR_4++;
                if (VAR_4 < 2)
                        FUNC_3(FUNC_5(VAR_5, VAR_1) >= 0);
                else
                        FUNC_3(FUNC_5(VAR_5, VAR_0) >= 0);
        } else
                FUNC_2("Yuck!");

        return 1;
}
