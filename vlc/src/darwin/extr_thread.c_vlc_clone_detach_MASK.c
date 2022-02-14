
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_thread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,void* (*) (void*),void*,int) ;

int FUNC_3 (vlc_thread_t *VAR_1, void *(*VAR_2) (void *), void *VAR_3,
                      int VAR_4)
{
    vlc_thread_t VAR_5;
    pthread_attr_t VAR_6;

    if (VAR_1 == ((void*)0))
        VAR_1 = &VAR_5;

    FUNC_0 (&VAR_6);
    FUNC_1 (&VAR_6, VAR_0);
    return FUNC_2 (VAR_1, &VAR_6, VAR_2, VAR_3, VAR_4);
}
