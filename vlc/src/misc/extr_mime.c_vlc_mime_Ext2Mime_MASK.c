
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* psz_mime; scalar_t__* psz_ext; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__*,char*) ;
 char* FUNC_1 (char const*,char) ;

const char *FUNC_2( const char *VAR_1 )
{

    char *VAR_2;

    VAR_2 = FUNC_1( VAR_1, '.' );
    if( VAR_2 )
    {
        int VAR_3;

        for( VAR_3 = 0; VAR_0[VAR_3].psz_ext[0] ; VAR_3++ )
        {
            if( !FUNC_0( VAR_0[VAR_3].psz_ext, VAR_2 ) )
            {
                return VAR_0[VAR_3].psz_mime;
            }
        }
    }
    return "application/octet-stream";
}
