
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ vlc_thread_t ;
struct sched_param {scalar_t__ sched_priority; } ;
typedef int sigset_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct sched_param*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_7 (int ,int *,int *) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13 (vlc_thread_t *VAR_13, pthread_attr_t *VAR_14,
                           void *(*VAR_15) (void *), void *VAR_16, int VAR_17)
{
    int VAR_18;
    sigset_t VAR_19;
    {
        sigset_t VAR_20;
        FUNC_12 (&VAR_20);
        FUNC_11 (&VAR_20, VAR_3);
        FUNC_10 (&VAR_20, VAR_4);
        FUNC_10 (&VAR_20, VAR_6);
        FUNC_10 (&VAR_20, VAR_7);

        FUNC_10 (&VAR_20, VAR_5);
        FUNC_7 (VAR_8, &VAR_20, &VAR_19);
    }
    (void) VAR_17;
    VAR_18 = FUNC_5 (VAR_14, (128 * sizeof (void *) * 1024));
    FUNC_0 (VAR_18 == 0);


    VAR_18 = FUNC_6(&VAR_13->handle, VAR_14, VAR_15, VAR_16);
    FUNC_7 (VAR_9, &VAR_19, ((void*)0));
    FUNC_1 (VAR_14);
    return VAR_18;
}
