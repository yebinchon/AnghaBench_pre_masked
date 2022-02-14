
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_meta_type_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ input_item_t ;


 char* FUNC_0 (TYPE_1__*,int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

char *FUNC_4( input_item_t *VAR_0, vlc_meta_type_t VAR_1 )
{
    FUNC_2( &VAR_0->lock );
    const char *VAR_2 = FUNC_0( VAR_0, VAR_1 );
    char *VAR_3 = VAR_2 ? FUNC_1( VAR_2 ) : ((void*)0);
    FUNC_3( &VAR_0->lock );
    return VAR_3;
}
