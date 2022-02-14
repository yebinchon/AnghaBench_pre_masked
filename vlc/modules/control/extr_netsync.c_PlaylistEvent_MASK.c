
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * p_address; } ;
typedef TYPE_1__ vlc_value_t ;
typedef char const vlc_object_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_10__ {int * input; scalar_t__ is_master; int thread; } ;
typedef TYPE_3__ intf_sys_t ;
typedef int input_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(vlc_object_t *VAR_4, char const *VAR_5,
                         vlc_value_t VAR_6, vlc_value_t VAR_7, void *VAR_8)
{
    FUNC_0(VAR_5); FUNC_0(VAR_4);
    intf_thread_t *VAR_9 = VAR_8;
    intf_sys_t *VAR_10 = VAR_9->p_sys;
    input_thread_t *VAR_11 = VAR_7.p_address;

    if (VAR_10->input != ((void*)0)) {
        FUNC_2(VAR_9, "InputEvent DEAD");
        FUNC_1(VAR_6.p_address == VAR_10->input);

        FUNC_3(VAR_10->thread);
        FUNC_5(VAR_10->thread, ((void*)0));
    }

    VAR_10->input = VAR_11;

    if (VAR_11 != ((void*)0)) {
        if (FUNC_4(&VAR_10->thread, VAR_10->is_master ? VAR_0 : VAR_1, VAR_9,
                      VAR_3))
            VAR_10->input = ((void*)0);
    }
    return VAR_2;
}
