
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ vlc_event_t ;
typedef int extension_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2( const vlc_event_t *VAR_2,
                                  void *VAR_3 )
{
    FUNC_1( VAR_2 && VAR_2->type == VAR_1 );

    extension_t *VAR_4 = ( extension_t* ) VAR_3;
    FUNC_1( VAR_4 != ((void*)0) );

    FUNC_0( VAR_4, VAR_0 );
}
