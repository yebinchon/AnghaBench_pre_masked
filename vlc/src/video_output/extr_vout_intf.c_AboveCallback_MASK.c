
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_4__ {scalar_t__ b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_3, char const *VAR_4,
                          vlc_value_t VAR_5, vlc_value_t VAR_6, void *VAR_7 )
{
    FUNC_0((vout_thread_t *)VAR_3,
        VAR_6.b_bool ? VAR_1 : VAR_2);
    (void) VAR_4; (void) VAR_5; (void) VAR_7;
    return VAR_0;
}
