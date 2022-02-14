
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int p_meta; } ;
typedef TYPE_1__ input_item_t ;


 scalar_t__ FUNC_0 (char**,char*,char const*,int ,char const*,int ,char const*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static char* FUNC_5( input_item_t* VAR_3 )
{
    FUNC_3( &VAR_3->lock );

    if( !VAR_3->p_meta )
    {
        FUNC_4( &VAR_3->lock );
        return ((void*)0);
    }

    char const* VAR_4 = FUNC_2( VAR_3->p_meta, VAR_1 );
    char const* VAR_5 = FUNC_2( VAR_3->p_meta, VAR_0 );
    char const *VAR_6 = FUNC_2( VAR_3->p_meta, VAR_2 );
    char* VAR_7;





    if( !VAR_4 || !VAR_5 || FUNC_0( &VAR_7, "%s:%d:%s:%d:%s",
          VAR_4, FUNC_1( VAR_4 ), VAR_5, FUNC_1( VAR_5 ),
          VAR_6 ? VAR_6 : "0000" ) < 0 )
    {
        VAR_7 = ((void*)0);
    }
    FUNC_4( &VAR_3->lock );

    return VAR_7;
}
