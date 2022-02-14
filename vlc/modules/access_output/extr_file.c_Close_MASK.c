
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    int *VAR_2 = VAR_1->p_sys, VAR_3 = *VAR_2;

    FUNC_1(VAR_3);
    FUNC_0( VAR_1, "file access output closed" );
}
