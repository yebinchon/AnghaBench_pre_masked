
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_thread_t ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8 (vlc_thread_t *VAR_8, pthread_attr_t *VAR_9,
                           void *(*VAR_10) (void *), void *VAR_11, int VAR_12)
{
    int VAR_13;

    sigset_t VAR_14;
    {
        sigset_t VAR_15;
        FUNC_7 (&VAR_15);
        FUNC_6 (&VAR_15, VAR_0);
        FUNC_5 (&VAR_15, VAR_1);
        FUNC_5 (&VAR_15, VAR_3);
        FUNC_5 (&VAR_15, VAR_4);

        FUNC_5 (&VAR_15, VAR_2);
        FUNC_4 (VAR_5, &VAR_15, &VAR_14);
    }

    (void) VAR_12;




    VAR_13 = FUNC_2 (VAR_9, (128 * sizeof (void *) * 1024));
    FUNC_0 (VAR_13 == 0);


    VAR_13 = FUNC_3 (VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_4 (VAR_6, &VAR_14, ((void*)0));
    FUNC_1 (VAR_9);
    return VAR_13;
}
