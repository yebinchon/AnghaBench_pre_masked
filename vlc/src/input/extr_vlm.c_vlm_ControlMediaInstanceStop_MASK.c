
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlm_t ;
typedef int vlm_media_sys_t ;
typedef int vlm_media_instance_sys_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,int *,int *) ;

__attribute__((used)) static int FUNC_3( vlm_t *VAR_2, int64_t VAR_3, const char *VAR_4 )
{
    vlm_media_sys_t *VAR_5 = FUNC_0( VAR_2, VAR_3 );
    vlm_media_instance_sys_t *VAR_6;

    if( !VAR_5 )
        return VAR_0;

    VAR_6 = FUNC_1( VAR_5, VAR_4 );
    if( !VAR_6 )
        return VAR_0;

    FUNC_2( VAR_2, VAR_3, VAR_6, VAR_5 );

    return VAR_1;
}
