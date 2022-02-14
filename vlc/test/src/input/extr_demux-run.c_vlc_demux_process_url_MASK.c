
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vlc_run_args {int dummy; } ;
typedef int stream_t ;
struct TYPE_4__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_run_args const*,int *) ;
 int FUNC_2 (int ,char*,char const*) ;
 TYPE_1__* FUNC_3 (struct vlc_run_args const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_5 (int ,char const*) ;

int FUNC_6(const struct vlc_run_args *VAR_1, const char *VAR_2)
{
    libvlc_instance_t *VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 == ((void*)0))
        return -1;

    stream_t *VAR_4 = FUNC_5(FUNC_0(VAR_3->p_libvlc_int), VAR_2);
    if (VAR_4 == ((void*)0))
        FUNC_2(VAR_0, "Error: cannot create input stream: %s\n", VAR_2);

    int VAR_5 = FUNC_1(VAR_1, VAR_4);
    FUNC_4(VAR_3);
    return VAR_5;
}
