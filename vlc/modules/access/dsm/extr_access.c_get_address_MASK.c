
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; } ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_9__ {char const* psz_host; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_11__ {char* netbios_name; TYPE_2__ url; TYPE_6__ addr; int p_ns; } ;
typedef TYPE_4__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct addrinfo*) ;
 scalar_t__ FUNC_1 (char const*,int *,int *,struct addrinfo**) ;
 int FUNC_2 (scalar_t__,char const*,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,char*,char const*) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char const*,int ,int *) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_4 )
{
    access_sys_t *VAR_5 = VAR_4->p_sys;

    if( VAR_5->url.psz_host != ((void*)0) &&
        !FUNC_2( VAR_0, VAR_5->url.psz_host, &VAR_5->addr ) )
    {

        struct addrinfo *VAR_6 = ((void*)0);


        if( FUNC_5( VAR_5->p_ns, VAR_5->url.psz_host,
                                VAR_1,
                                &VAR_5->addr.s_addr) == 0 )
        {
            FUNC_6( VAR_5->netbios_name, VAR_5->url.psz_host, 16);
            return VAR_3;
        }

        else if( FUNC_1( VAR_5->url.psz_host, ((void*)0), ((void*)0), &VAR_6 ) == 0 )
        {
            if( VAR_6->ai_family == VAR_0 )
            {
                struct sockaddr_in *VAR_7 = (struct sockaddr_in *)VAR_6->ai_addr;
                VAR_5->addr.s_addr = VAR_7->sin_addr.s_addr;
            }
            if( VAR_6->ai_family != VAR_0 )
            {
                FUNC_0( VAR_6 );
                return VAR_2;
            }
            FUNC_0( VAR_6 );
        }
        else
            return VAR_2;
    }


    const char *VAR_8 = FUNC_4( VAR_5->p_ns, VAR_5->addr.s_addr );
    if( VAR_8 != ((void*)0) )
        FUNC_6( VAR_5->netbios_name, VAR_8, 16 );
    else
    {
        FUNC_3( VAR_4, "Unable to get netbios name of %s",
            VAR_5->url.psz_host );
        VAR_5->netbios_name[0] = '\0';
    }

    return VAR_3;
}
