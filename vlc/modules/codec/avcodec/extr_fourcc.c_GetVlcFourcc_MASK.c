
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_5__ {unsigned int i_codec; int i_fourcc; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

vlc_fourcc_t FUNC_1( unsigned VAR_5 )
{
    for( size_t VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++ )
    {
        if( VAR_5 == VAR_0 )
            return VAR_1;
        if( VAR_4[VAR_6].i_codec == VAR_5 )
            return VAR_4[VAR_6].i_fourcc;
    }
    for( size_t VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++ )
    {
        if( VAR_2[VAR_7].i_codec == VAR_5 )
            return VAR_2[VAR_7].i_fourcc;
    }
    for( size_t VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++ )
    {
        if( VAR_3[VAR_8].i_codec == VAR_5 )
            return VAR_3[VAR_8].i_fourcc;
    }
    return VAR_1;
}
