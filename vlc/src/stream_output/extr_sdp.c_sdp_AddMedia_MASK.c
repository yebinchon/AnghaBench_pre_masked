
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct vlc_memstream*,char*,...) ;
 int FUNC_3 (struct vlc_memstream*,char*) ;

void FUNC_4(struct vlc_memstream *restrict VAR_0,
                  const char *VAR_1, const char *VAR_2, int VAR_3,
                  unsigned VAR_4, bool VAR_5, unsigned VAR_6,
                  const char *VAR_7, unsigned VAR_8, unsigned VAR_9,
                  const char *VAR_10)
{

    if (VAR_1 == ((void*)0))
        VAR_1 = "video";
    if (VAR_2 == ((void*)0))
        VAR_2 = "RTP/AVP";
    FUNC_0 (VAR_4 < 128u);

    FUNC_2(VAR_0, "m=%s %u %s %u\r\n", VAR_1, VAR_3, VAR_2, VAR_4);

    if (VAR_6 > 0)
        FUNC_2(VAR_0, "b=%s:%u\r\n",
                             VAR_5 ? "TIAS" : "AS", VAR_6);
    FUNC_2(VAR_0, "b=%s:%u\r\n", "RR", 0);


    if (VAR_7 != ((void*)0))
    {
        FUNC_2(VAR_0, "a=rtpmap:%u %s/%u", VAR_4, VAR_7, VAR_8);
        if ((FUNC_1(VAR_1, "audio") == 0) && (VAR_9 != 1))
            FUNC_2(VAR_0, "/%u", VAR_9);
        FUNC_3(VAR_0, "\r\n");
    }


    if (VAR_10 != ((void*)0))
        FUNC_2(VAR_0, "a=fmtp:%u %s\r\n", VAR_4, VAR_10);
}
