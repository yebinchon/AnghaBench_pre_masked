
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int stream_t ;
struct TYPE_7__ {char* psz_ref; int i_ref_type; } ;
struct TYPE_5__ {TYPE_4__* p_rdrf; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,char*,char*,char*) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    uint32_t VAR_4;
    FUNC_4( VAR_0, VAR_1 );

    FUNC_3( VAR_3->data.p_rdrf );
    FUNC_2( VAR_3->data.p_rdrf->i_ref_type );
    FUNC_1( VAR_4 );
    VAR_4++;

    if( VAR_4 > 0 )
    {
        VAR_3->data.p_rdrf->psz_ref = FUNC_6( VAR_4 );
        if( VAR_3->data.p_rdrf->psz_ref == ((void*)0) )
            FUNC_5( 0 );
        VAR_4--;

        for( unsigned VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ )
        {
            FUNC_0( VAR_3->data.p_rdrf->psz_ref[VAR_5] );
        }
        VAR_3->data.p_rdrf->psz_ref[VAR_4] = '\0';
    }
    else
    {
        VAR_3->data.p_rdrf->psz_ref = ((void*)0);
    }







    FUNC_5( 1 );
}
