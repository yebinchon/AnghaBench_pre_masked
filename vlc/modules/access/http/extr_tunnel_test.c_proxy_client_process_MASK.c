
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,char*,unsigned int*,...) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char const*) ;
 int * FUNC_6 (char*,char*,size_t) ;
 int * FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int,char const*,size_t) ;

__attribute__((used)) static void FUNC_9(int VAR_1)
{
    char VAR_2[1024];
    size_t VAR_3 = 0;
    ssize_t VAR_4;


    while (FUNC_6(VAR_2, "\r\n\r\n", VAR_3) == ((void*)0))
    {
        VAR_4 = FUNC_1(VAR_1, VAR_2 + VAR_3, sizeof (VAR_2) - VAR_3 - 1, 0);
        if (VAR_4 <= 0)
            FUNC_0(!"Incomplete request");
        VAR_3 += VAR_4;
    }

    VAR_2[VAR_3] = '\0';

    char VAR_5[64];
    unsigned VAR_6, VAR_7;
    int VAR_8;

    FUNC_0(FUNC_3(VAR_2, "CONNECT %63[^:]:%u HTTP/1.%1u%n", VAR_5, &VAR_6, &VAR_7,
                  &VAR_8) == 3);
    FUNC_0(!FUNC_4(VAR_5, "www.example.com"));
    FUNC_0(VAR_6 == 443);
    FUNC_0(VAR_7 == 1);

    FUNC_0(FUNC_3(VAR_2 + VAR_8 + 2, "Host: %63[^:]:%u", VAR_5, &VAR_6) == 2);
    FUNC_0(!FUNC_4(VAR_5, "www.example.com"));
    FUNC_0(VAR_6 == 443);

    FUNC_0(FUNC_7(VAR_2, "\r\nProxy-Authorization: Basic "
                  "QWxhZGRpbjpvcGVuIHNlc2FtZQ==\r\n") != ((void*)0));

    const char VAR_9[] = "HTTP/1.1 500 Failure\r\n\r\n";

    VAR_4 = FUNC_8(VAR_1, VAR_9, FUNC_5(VAR_9));
    FUNC_0((size_t)VAR_4 == FUNC_5(VAR_9));
    FUNC_2(VAR_1, VAR_0);
}
