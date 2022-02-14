
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;
typedef int sd_event_source ;


 void* FUNC_0 (float) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(sd_event_source *VAR_0, const siginfo_t *VAR_1, void *VAR_2) {

        FUNC_2(*VAR_0);
        FUNC_2(VAR_1);

        FUNC_3("got child on %c", FUNC_1(VAR_2));

        FUNC_2(VAR_2 == FUNC_0('f'));

        FUNC_2(FUNC_4(FUNC_5(VAR_0), 0) >= 0);
        FUNC_6(VAR_0);

        return 1;
}
