
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlm_t ;
typedef int vlm_media_t ;
struct TYPE_3__ {int cfg; } ;
typedef TYPE_1__ vlm_media_sys_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2( vlm_t *VAR_2, int64_t VAR_3, vlm_media_t **VAR_4 )
{
    vlm_media_sys_t *VAR_5 = FUNC_0( VAR_2, VAR_3 );
    if( !VAR_5 )
        return VAR_0;

    *VAR_4 = FUNC_1( &VAR_5->cfg );
    return VAR_1;
}
