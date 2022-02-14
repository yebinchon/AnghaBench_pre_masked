
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toxav_thread_data {int sig; int BobAV; int AliceAV; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;

void *FUNC_10 (void *VAR_3)
{
    struct toxav_thread_data *VAR_4 = VAR_3;




    while (VAR_4->sig == 0) {
        FUNC_8(VAR_4->AliceAV);
        FUNC_8(VAR_4->BobAV);
        int VAR_5 = FUNC_0(FUNC_9(VAR_4->AliceAV), FUNC_9(VAR_4->BobAV));

        FUNC_6("\rIteration interval: %d            ", VAR_5);
        FUNC_5(VAR_1);
        FUNC_1(VAR_5);

    }

    VAR_4->sig = 1;





    FUNC_7(((void*)0));
}
