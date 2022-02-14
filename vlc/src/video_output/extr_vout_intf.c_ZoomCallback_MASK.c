
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {int f_float; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_1, char const *VAR_2,
                         vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5 )
{
    vout_thread_t *VAR_6 = (vout_thread_t *)VAR_1;

    (void) VAR_2; (void) VAR_3; (void) VAR_5;
    FUNC_0(VAR_6, 1000 * VAR_4.f_float, 1000);
    return VAR_0;
}
