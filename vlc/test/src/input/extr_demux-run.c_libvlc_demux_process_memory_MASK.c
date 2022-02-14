
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_run_args {int dummy; } ;
typedef int stream_t ;
struct TYPE_3__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_run_args const*,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int ,void*,size_t,int) ;

int FUNC_4(libvlc_instance_t *VAR_1,
                                const struct vlc_run_args *VAR_2,
                                const unsigned char *VAR_3, size_t VAR_4)
{
    stream_t *VAR_5 = FUNC_3(FUNC_0(VAR_1->p_libvlc_int),
                                       (void *)VAR_3, VAR_4, 1);
    if (VAR_5 == ((void*)0))
        FUNC_2(VAR_0, "Error: cannot create input stream\n");

    return FUNC_1(VAR_2, VAR_5);
}
