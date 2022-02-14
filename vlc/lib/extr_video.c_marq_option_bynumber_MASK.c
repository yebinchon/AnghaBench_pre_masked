
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int optlist ;
struct TYPE_3__ {char* member_0; int const member_1; } ;
typedef TYPE_1__ opt_t ;




 int FUNC_0 (char*) ;

__attribute__((used)) static const opt_t *
FUNC_1(unsigned VAR_0)
{
    static const opt_t VAR_1[] =
    {
        { "marq", 0 },
        { "marq-marquee", 128 },
        { "marq-color", 129 },
        { "marq-opacity", 129 },
        { "marq-position", 129 },
        { "marq-refresh", 129 },
        { "marq-size", 129 },
        { "marq-timeout", 129 },
        { "marq-x", 129 },
        { "marq-y", 129 },
    };
    enum { num_opts = sizeof(VAR_1) / sizeof(*VAR_1) };

    const opt_t *VAR_2 = VAR_0 < num_opts ? VAR_1+VAR_0 : ((void*)0);
    if( !VAR_2 )
        FUNC_0( "Unknown marquee option" );
    return VAR_2;
}
