
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int lock; } ;
typedef TYPE_1__ vlc_thumbnailer_request_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( void* VAR_0, void* VAR_1 )
{
    FUNC_0(VAR_0);
    vlc_thumbnailer_request_t *VAR_2 = VAR_1;
    FUNC_1( &VAR_2->lock );
    int VAR_3 = VAR_2->done;
    FUNC_2( &VAR_2->lock );
    return VAR_3;
}
