
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int ssize_t ;
struct TYPE_6__ {int i_smb; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3( stream_t *VAR_1, void *VAR_2, size_t VAR_3 )
{
    access_sys_t *VAR_4 = VAR_1->p_sys;
    int VAR_5;

    VAR_5 = FUNC_1( VAR_4->i_smb, VAR_2, VAR_3 );
    if( VAR_5 < 0 )
    {
        FUNC_0( VAR_1, "read failed (%s)", FUNC_2(VAR_0) );
        VAR_5 = 0;
    }

    return VAR_5;
}
