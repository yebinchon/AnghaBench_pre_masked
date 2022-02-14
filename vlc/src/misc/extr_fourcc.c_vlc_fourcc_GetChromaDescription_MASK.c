
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int vlc_chroma_description_t ;
struct TYPE_2__ {scalar_t__* p_fourcc; int const description; } ;


 TYPE_1__* VAR_0 ;

const vlc_chroma_description_t *FUNC_0( vlc_fourcc_t VAR_1 )
{
    for( unsigned VAR_2 = 0; VAR_0[VAR_2].p_fourcc[0]; VAR_2++ )
    {
        const vlc_fourcc_t *VAR_3 = VAR_0[VAR_2].p_fourcc;
        for( unsigned VAR_4 = 0; VAR_4 < 4 && VAR_3[VAR_4] != 0; VAR_4++ )
        {
            if( VAR_3[VAR_4] == VAR_1 )
                return &VAR_0[VAR_2].description;
        }
    }
    return ((void*)0);
}
