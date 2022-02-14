
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; scalar_t__ ai_family; int ai_protocol; int ai_socktype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,struct addrinfo*,struct addrinfo**) ;

__attribute__((used)) static bool FUNC_7(char *VAR_7)
{
    int VAR_8;
    int VAR_9 = 0;

    struct addrinfo VAR_10 = {
        .ai_socktype = VAR_6,
        .ai_protocol = VAR_5,
        .ai_flags = VAR_3 | VAR_2 | VAR_4,
    }, *VAR_11;

    VAR_8 = FUNC_6(VAR_7, 0, &VAR_10, &VAR_11);
    if (VAR_8) {
        return 0;
    } else if(VAR_11->ai_family == VAR_0) {
        unsigned long VAR_12 = FUNC_3(FUNC_2(VAR_7));
        VAR_9 = FUNC_0(VAR_12);
    } else if (VAR_11->ai_family == VAR_1) {
        if (FUNC_4(VAR_7) >= 5 && (FUNC_5("[ff00", VAR_7, 5) == 0 ||
                    FUNC_5("[FF00", VAR_7, 5) == 0))
            VAR_9 = 1;
    }

    FUNC_1(VAR_11);

    return VAR_9;
}
