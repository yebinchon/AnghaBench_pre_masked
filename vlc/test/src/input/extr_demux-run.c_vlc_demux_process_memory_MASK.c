
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_run_args {int dummy; } ;
typedef int libvlc_instance_t ;


 int * FUNC_0 (struct vlc_run_args const*) ;
 int FUNC_1 (int *,struct vlc_run_args const*,unsigned char const*,size_t) ;
 int FUNC_2 (int *) ;

int FUNC_3(const struct vlc_run_args *VAR_0,
                             const unsigned char *VAR_1, size_t VAR_2)
{
    libvlc_instance_t *VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 == ((void*)0))
        return -1;

    int VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2);
    FUNC_2(VAR_3);
    return VAR_4;
}
