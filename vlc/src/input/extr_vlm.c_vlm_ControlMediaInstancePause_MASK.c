
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlm_t ;
typedef int vlm_media_sys_t ;
struct TYPE_3__ {int player; } ;
typedef TYPE_1__ vlm_media_instance_sys_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5( vlm_t *VAR_2, int64_t VAR_3, const char *VAR_4 )
{
    vlm_media_sys_t *VAR_5 = FUNC_3( VAR_2, VAR_3 );
    vlm_media_instance_sys_t *VAR_6;
    if( !VAR_5 )
        return VAR_0;

    VAR_6 = FUNC_4( VAR_5, VAR_4 );
    if( !VAR_6 )
        return VAR_0;

    FUNC_0(VAR_6->player);
    FUNC_1(VAR_6->player);
    FUNC_2(VAR_6->player);

    return VAR_1;
}
