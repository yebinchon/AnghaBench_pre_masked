
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlogo_optlist ;
struct TYPE_3__ {char* member_0; int const member_1; } ;
typedef TYPE_1__ opt_t ;




 int FUNC_0 (char*) ;

__attribute__((used)) static const opt_t *
FUNC_1( unsigned VAR_0 )
{
    static const opt_t VAR_1[] =

    {
        { "logo", 0 },
        { "logo-file", 128 },
        { "logo-x", 129 },
        { "logo-y", 129 },
        { "logo-delay", 129 },
        { "logo-repeat", 129 },
        { "logo-opacity", 129 },
        { "logo-position", 129 },
    };
    enum { num_vlogo_opts = sizeof(VAR_1) / sizeof(*VAR_1) };

    const opt_t *VAR_2 = VAR_0 < num_vlogo_opts ? VAR_1+VAR_0 : ((void*)0);
    if( !VAR_2 )
        FUNC_0( "Unknown logo option" );
    return VAR_2;
}
