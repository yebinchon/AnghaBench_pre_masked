
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_event_source ;


 void* FUNC_0 (char) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int **,int ,int ,void*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ,int *,int ,int) ;

__attribute__((used)) static int FUNC_10(sd_event_source *VAR_4, void *VAR_5) {
        sd_event_source *VAR_6 = ((void*)0);

        FUNC_2(*VAR_4);

        FUNC_3("got defer on %c", FUNC_1(VAR_5));

        FUNC_2(VAR_5 == FUNC_0('d'));

        FUNC_2(FUNC_9(VAR_2, ((void*)0), VAR_1, -1) >= 0);

        FUNC_2(FUNC_5(FUNC_6(VAR_4), &VAR_6, VAR_1, VAR_3, FUNC_0('e')) >= 0);
        FUNC_2(FUNC_7(VAR_6, VAR_0) >= 0);
        FUNC_4(VAR_1);

        FUNC_8(VAR_4);

        return 1;
}
