
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_7__ {scalar_t__ i_type; struct TYPE_7__* p_next; } ;
typedef TYPE_1__ MP4_Box_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*) ;

__attribute__((used)) static MP4_Box_t * FUNC_1( MP4_Box_t *VAR_0,
                             vlc_fourcc_t VAR_1, const char *VAR_2,
                             MP4_Box_t *VAR_3 )
{
    if( VAR_3 == ((void*)0) )
        VAR_3 = FUNC_0( VAR_0, VAR_2 );
    else
        VAR_3 = VAR_3->p_next;
    for( ; VAR_3; VAR_3 = VAR_3->p_next )
    {
        if( VAR_3->i_type == VAR_1 )
            return VAR_3;
    }
    return ((void*)0);
}
