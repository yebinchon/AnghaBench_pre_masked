
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_long ;
struct hostent {int h_length; scalar_t__ h_addrtype; char* h_name; scalar_t__ h_addr; } ;
struct addrinfo {int ai_flags; scalar_t__ ai_family; int ai_socktype; int ai_protocol; struct addrinfo* ai_next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 () ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*) ;
 struct addrinfo* FUNC_5 (int const,int,int ,scalar_t__,char const*) ;
 unsigned long FUNC_6 (char const*,char**,int ) ;

int
FUNC_7 (const char *VAR_17, const char *VAR_18,
             const struct addrinfo *VAR_19, struct addrinfo **VAR_20)
{
    struct addrinfo *VAR_21;
    u_long VAR_22;
    u_short VAR_23;
    int VAR_24 = 0, VAR_25 = 0;
    const char *VAR_26 = ((void*)0);

    if (VAR_19 != ((void*)0))
    {
        VAR_25 = VAR_19->ai_flags;

        if (VAR_25 & ~VAR_15)
            return VAR_4;

        if (VAR_19->ai_family && (VAR_19->ai_family != VAR_0))
            return VAR_5;


        switch (VAR_19->ai_socktype)
        {
            case 128:
                VAR_24 = VAR_13;
                break;

            case 130:
                VAR_24 = VAR_14;
                break;


            case 129:

            case 0:
                break;

            default:
                return VAR_7;
        }
        if (VAR_19->ai_protocol && VAR_24
         && (VAR_24 != VAR_19->ai_protocol))
            return VAR_6;
    }

    *VAR_20 = ((void*)0);


    if (VAR_17 == ((void*)0))
    {
        if (VAR_25 & VAR_3)
            VAR_22 = FUNC_2 (VAR_10);
        else
            VAR_22 = FUNC_2 (VAR_11);
    }
    else
    if ((VAR_22 = FUNC_4 (VAR_17)) == VAR_12)
    {
        struct hostent *VAR_27 = ((void*)0);


        if (!(VAR_25 & VAR_2))
            VAR_27 = FUNC_1 (VAR_17);

        if (VAR_27 == ((void*)0))
            return FUNC_0 ();

        if ((VAR_27->h_length != 4) || (VAR_27->h_addrtype != VAR_0))
            return VAR_5;

        VAR_22 = *((u_long *) VAR_27->h_addr);
        if (VAR_25 & VAR_1)
            VAR_26 = VAR_27->h_name;
    }

    if ((VAR_25 & VAR_1) && (VAR_26 == ((void*)0)))
        VAR_26 = VAR_17;


    if (VAR_18 == ((void*)0))
        VAR_23 = 0;
    else
    {
        unsigned long VAR_28;
        char *VAR_29;

        VAR_28 = FUNC_6 (VAR_18, &VAR_29, 0);
        if (VAR_29[0] || (VAR_28 > 65535u))
            return VAR_6;

        VAR_23 = FUNC_3 ((u_short)VAR_28);
    }


    if ((!VAR_24) || (VAR_24 == VAR_14))
    {
        VAR_21 = FUNC_5 (130, VAR_14, VAR_22, VAR_23, VAR_26);
        if (VAR_21 == ((void*)0))
        {
            VAR_16 = VAR_9;
            return VAR_8;
        }
        if (VAR_25 & VAR_3)
            VAR_21->ai_flags |= VAR_3;
        *VAR_20 = VAR_21;
    }
    if ((!VAR_24) || (VAR_24 == VAR_13))
    {
        VAR_21 = FUNC_5 (128, VAR_13, VAR_22, VAR_23, VAR_26);
        if (VAR_21 == ((void*)0))
        {
            VAR_16 = VAR_9;
            return VAR_8;
        }
        VAR_21->ai_next = *VAR_20;
        if (VAR_25 & VAR_3)
            VAR_21->ai_flags |= VAR_3;
        *VAR_20 = VAR_21;
    }

    return 0;
}
