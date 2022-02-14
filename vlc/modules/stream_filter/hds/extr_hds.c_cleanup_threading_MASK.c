
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abst_lock; int dl_cond; int dl_lock; } ;
typedef TYPE_1__ hds_stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( hds_stream_t *VAR_0 )
{
    FUNC_1( &VAR_0->dl_lock );
    FUNC_0( &VAR_0->dl_cond );
    FUNC_1( &VAR_0->abst_lock );
}
