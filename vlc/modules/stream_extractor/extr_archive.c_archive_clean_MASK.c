
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_archive; int * p_entry; } ;
typedef TYPE_1__ private_sys_t ;
typedef int libarchive_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2( private_sys_t* VAR_1 )
{
    libarchive_t* VAR_2 = VAR_1->p_archive;

    if( VAR_1->p_entry )
        FUNC_0( VAR_1->p_entry );

    if( VAR_2 )
        FUNC_1( VAR_2 );

    VAR_1->p_entry = ((void*)0);
    VAR_1->p_archive = ((void*)0);

    return VAR_0;
}
