
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int var_root; int var_lock; } ;
typedef TYPE_1__ vlc_object_internals_t ;
typedef void variable_t ;


 void** FUNC_0 (char const**,int *,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static variable_t *FUNC_3( vlc_object_t *VAR_1, const char *VAR_2 )
{
    vlc_object_internals_t *VAR_3 = FUNC_1( VAR_1 );
    void **VAR_4;

    FUNC_2(&VAR_3->var_lock);
    VAR_4 = FUNC_0( &VAR_2, &VAR_3->var_root, VAR_0 );
    return (VAR_4 != ((void*)0)) ? *VAR_4 : ((void*)0);
}
