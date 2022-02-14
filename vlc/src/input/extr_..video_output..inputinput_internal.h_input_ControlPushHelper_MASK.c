
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_value_t ;
typedef int input_thread_t ;
struct TYPE_3__ {int val; } ;
typedef TYPE_1__ input_control_param_t ;


 int FUNC_0 (int *,int,TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_1( input_thread_t *VAR_0, int VAR_1, vlc_value_t *VAR_2 )
{
    if( VAR_2 != ((void*)0) )
    {
        input_control_param_t VAR_3 = { .val = *VAR_2 };
        return FUNC_0( VAR_0, VAR_1, &VAR_3 );
    }
    else
    {
        return FUNC_0( VAR_0, VAR_1, ((void*)0) );
    }
}
