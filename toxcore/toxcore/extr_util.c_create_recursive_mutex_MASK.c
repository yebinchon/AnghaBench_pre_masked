
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;
typedef int pthread_mutex_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

int FUNC_4(pthread_mutex_t *VAR_1)
{
    pthread_mutexattr_t VAR_2;

    if (FUNC_2(&VAR_2) != 0)
        return -1;

    if (FUNC_3(&VAR_2, VAR_0) != 0) {
        FUNC_1(&VAR_2);
        return -1;
    }


    if (FUNC_0(VAR_1, &VAR_2) != 0) {
        FUNC_1(&VAR_2);
        return -1;
    }

    FUNC_1(&VAR_2);

    return 0;
}
