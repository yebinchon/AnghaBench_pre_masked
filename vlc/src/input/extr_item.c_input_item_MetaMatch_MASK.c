
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_meta_type_t ;
struct TYPE_3__ {int lock; int p_meta; } ;
typedef TYPE_1__ input_item_t ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4( input_item_t *VAR_0,
                           vlc_meta_type_t VAR_1, const char *VAR_2 )
{
    FUNC_2( &VAR_0->lock );

    if( !VAR_0->p_meta )
    {
        FUNC_3( &VAR_0->lock );
        return 0;
    }
    const char *VAR_3 = FUNC_1( VAR_0->p_meta, VAR_1 );
    bool VAR_4 = VAR_3 && FUNC_0( VAR_3, VAR_2 );

    FUNC_3( &VAR_0->lock );

    return VAR_4;
}
