
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct params_s {int i_rate_num; int i_rate_den; int i_frame_count; int b_extra; int i_read_size; int codec; int obj; TYPE_1__* vlc; } ;
struct TYPE_4__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_5(void)
{
    FUNC_4();

    libvlc_instance_t *VAR_4 = FUNC_2(0, ((void*)0));
    if(!VAR_4)
        return 1;

    struct params_s VAR_5;
    VAR_5.vlc = VAR_4;
    VAR_5.obj = FUNC_1(VAR_4->p_libvlc_int);
    VAR_5.codec = VAR_0;
    VAR_5.i_rate_num = 0;
    VAR_5.i_rate_den = 0;
    VAR_5.i_frame_count = 2*25;
    VAR_5.b_extra = 0;

    VAR_5.i_read_size = 500;
    FUNC_0("block 500", VAR_1,
        VAR_2, VAR_3, 0);

    VAR_5.i_rate_num = 60000;
    VAR_5.i_rate_den = 1001;
    VAR_5.i_read_size = 8;
    FUNC_0("block 8", VAR_1,
        VAR_2, VAR_3, 0);

    VAR_5.i_frame_count = 1*25;
    VAR_5.i_read_size = 500;
    FUNC_0("skip 1st Iframe", VAR_1,
        VAR_2 + 100, VAR_3 - 100, 0);

    FUNC_3(VAR_4);
    return 0;
}
