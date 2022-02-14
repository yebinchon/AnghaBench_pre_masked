
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_output {int closing; int lock; int wait; int thread; } ;


 int FUNC_0 (struct vlc_h2_output*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vlc_h2_output*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct vlc_h2_output *VAR_0)
{
    FUNC_7(&VAR_0->lock);
    VAR_0->closing = 1;
    FUNC_3(&VAR_0->wait);
    FUNC_8(&VAR_0->lock);

    FUNC_1(VAR_0->thread);
    FUNC_5(VAR_0->thread, ((void*)0));

    FUNC_2(&VAR_0->wait);
    FUNC_6(&VAR_0->lock);


    FUNC_4(VAR_0);
    FUNC_0(VAR_0);
}
