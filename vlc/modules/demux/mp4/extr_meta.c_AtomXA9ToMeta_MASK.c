
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_meta_type_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ xa9_type; char* metadata; int meta_type; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_1( uint32_t VAR_2,
    vlc_meta_type_t const** VAR_3, char const** VAR_4 )
{
    *VAR_3 = ((void*)0);
    *VAR_4 = ((void*)0);

    for( size_t VAR_5 = 0; !*VAR_3 && VAR_5 < FUNC_0( VAR_1 ); ++VAR_5 )
        if( VAR_1[VAR_5].xa9_type == VAR_2 )
            *VAR_3 = &VAR_1[VAR_5].meta_type;

    for( size_t VAR_6 = 0; !*VAR_4 && VAR_6 < FUNC_0( VAR_0 ); ++VAR_6 )
        if( VAR_0[VAR_6].xa9_type == VAR_2 )
            *VAR_4 = VAR_0[VAR_6].metadata;

    return *VAR_3 || *VAR_4;
}
