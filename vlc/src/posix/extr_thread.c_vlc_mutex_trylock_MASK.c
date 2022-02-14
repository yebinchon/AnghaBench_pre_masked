
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_mutex_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(vlc_mutex_t *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 != VAR_0) {
        FUNC_0("locking mutex");
        FUNC_2(VAR_1);
    }

    return VAR_2;
}
