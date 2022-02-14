
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_list_callback_t ;
struct TYPE_3__ {void* p_data; int pf_list_callback; } ;
typedef TYPE_1__ callback_entry_t ;


 int FUNC_0 (int *,char const*,TYPE_1__*,int ) ;
 int VAR_0 ;

void (FUNC_1)(vlc_object_t *VAR_1, const char *VAR_2,
                           vlc_list_callback_t VAR_3, void *VAR_4)
{
    callback_entry_t VAR_5;

    VAR_5.pf_list_callback = VAR_3;
    VAR_5.p_data = VAR_4;
    FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_0);
}
