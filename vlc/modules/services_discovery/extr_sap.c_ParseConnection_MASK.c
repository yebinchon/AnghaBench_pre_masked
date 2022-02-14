
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
typedef struct in_addr in6_addr ;
struct TYPE_6__ {scalar_t__ mediac; int i_media_type; int rtcp_port; int psz_uri; TYPE_1__* mediav; } ;
typedef TYPE_2__ sdp_t ;
typedef int psz_uri ;
typedef int psz_source ;
struct TYPE_5__ {int n_addr; scalar_t__ addrlen; char const* fmt; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_2__*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,char const*,char const*,...) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,struct in_addr*,char*,int) ;
 int FUNC_5 (int ,char*,struct in_addr*) ;
 scalar_t__ FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (char const*,char*,unsigned int*,char*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 char* FUNC_13 (char const*) ;
 size_t FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (struct sockaddr*,scalar_t__,char*,int,int*,int ) ;

__attribute__((used)) static int FUNC_16( vlc_object_t *VAR_6, sdp_t *VAR_7 )
{
    if (VAR_7->mediac == 0)
    {
        FUNC_7 (VAR_6, "Ignoring SDP with no media");
        return VAR_3;
    }

    for (unsigned VAR_8 = 1; VAR_8 < VAR_7->mediac; VAR_8++)
    {
        if ((VAR_7->mediav[VAR_8].n_addr != VAR_7->mediav->n_addr)
         || (VAR_7->mediav[VAR_8].addrlen != VAR_7->mediav->addrlen)
         || FUNC_6 (&VAR_7->mediav[VAR_8].addr, &VAR_7->mediav->addr,
                    VAR_7->mediav->addrlen))
        {
            FUNC_7 (VAR_6, "Multiple media ports not supported -> live555");
            return VAR_3;
        }
    }

    if (VAR_7->mediav->n_addr != 1)
    {
        FUNC_7 (VAR_6, "Layered encoding not supported -> live555");
        return VAR_3;
    }

    char VAR_9[1026];
    const char *VAR_10;
    int VAR_11;

    VAR_9[0] = '[';
    if (FUNC_15 ((struct sockaddr *)&(VAR_7->mediav->addr),
                         VAR_7->mediav->addrlen, VAR_9 + 1,
                         sizeof (VAR_9) - 2, &VAR_11, VAR_2))
        return VAR_3;

    if (FUNC_11 (VAR_9 + 1, ':'))
    {
        VAR_10 = VAR_9;
        FUNC_10 (VAR_9, "]");
    }
    else
        VAR_10 = VAR_9 + 1;


    char *VAR_12 = FUNC_13 (VAR_7->mediav[0].fmt);
    if (VAR_12 == ((void*)0))
        return VAR_4;

    char *VAR_13 = FUNC_11 (VAR_12, ' ');
    if (VAR_13 == ((void*)0))
    {
        FUNC_7 (VAR_6, "missing SDP media subtype: %s", VAR_12);
        FUNC_3 (VAR_12);
        return VAR_3;
    }
    else
    {
        *VAR_13++ = '\0';


        if (!FUNC_9 (VAR_12, "udp"))
            VAR_7->i_media_type = 33;
        else
            VAR_7->i_media_type = FUNC_2 (VAR_13);
    }



    static const char VAR_14[] =
        "udp\0" "udp\0\0"
        "RTP/AVP\0" "rtp\0\0"
        "UDPLite/RTP/AVP\0" "udplite\0\0"
        "DCCP/RTP/AVP\0" "dccp\0\1"
        "TCP/RTP/AVP\0" "rtptcp\0\1"
        "\0";

    const char *VAR_15 = ((void*)0);
    uint8_t VAR_16 = 0;
    for (const char *VAR_17 = VAR_14; *VAR_17;)
    {
        if (FUNC_9 (VAR_17, VAR_12) == 0)
        {
            VAR_15 = VAR_17 + FUNC_14 (VAR_17) + 1;
            VAR_16 = VAR_15[FUNC_14 (VAR_15) + 1];
            break;
        }
        VAR_17 += FUNC_14 (VAR_17) + 1;
        VAR_17 += FUNC_14 (VAR_17) + 2;
    }

    FUNC_3 (VAR_12);
    if (VAR_15 == ((void*)0))
    {
        FUNC_7 (VAR_6, "unknown SDP media protocol: %s",
                 VAR_7->mediav[0].fmt);
        return VAR_3;
    }

    if (!FUNC_12 (VAR_15, "udp") || FUNC_0 (VAR_7, 0, "rtcp-mux"))
        VAR_7->rtcp_port = 0;
    else
    {
        const char *VAR_18 = FUNC_0 (VAR_7, 0, "rtcp");
        if (VAR_18)
            VAR_7->rtcp_port = FUNC_2 (VAR_18);
        else
        if (VAR_11 & 1)
            VAR_7->rtcp_port = VAR_11++;
        else
            VAR_7->rtcp_port = VAR_11 + 1;
    }

    if (VAR_16 & 1)
    {

        const char *VAR_19 = FUNC_0 (VAR_7, 0, "setup");
        if (VAR_19 == ((void*)0))
            VAR_19 = "active";

        if (FUNC_12 (VAR_19, "actpass") && FUNC_12 (VAR_19, "passive"))
        {
            FUNC_7 (VAR_6, "unsupported COMEDIA mode: %s", VAR_19);
            return VAR_3;
        }

        if (FUNC_1 (&VAR_7->psz_uri, "%s://%s:%d", VAR_15,
                      VAR_10, VAR_11) == -1)
            return VAR_4;
    }
    else
    {

        char VAR_20[258] = "";
        const char *VAR_21 = FUNC_0 (VAR_7, 0, "source-filter");
        if (VAR_21 != ((void*)0))
        {
            char VAR_22[256];
            unsigned VAR_23;

            if (FUNC_8 (VAR_21, " incl IN IP%u %*s %255s ", &VAR_23,
                        VAR_22) == 2)
            {


                switch (VAR_23)
                {
                    case 4:
                    {
                        struct in_addr VAR_24;
                        if ((FUNC_5 (VAR_0, VAR_22, &VAR_24) > 0)
                        && (FUNC_4 (VAR_0, &VAR_24, VAR_20,
                                        sizeof (VAR_20)) == ((void*)0)))
                            *VAR_20 = '\0';
                        break;
                    }
                }
            }
        }

        if (FUNC_1 (&VAR_7->psz_uri, "%s://%s@%s:%i", VAR_15, VAR_20,
                     VAR_10, VAR_11) == -1)
            return VAR_4;
    }

    return VAR_5;
}
