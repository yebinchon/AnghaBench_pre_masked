
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,int *) ;

__attribute__((used)) static int FUNC_1( vlc_object_t *VAR_1, access_sys_t *VAR_2 )
{
    int VAR_3 = FUNC_0( VAR_1, VAR_2, ((void*)0), VAR_0, ((void*)0) );
    if( VAR_3 >= 0 )
        VAR_3 /= 100;
    return VAR_3;
}
