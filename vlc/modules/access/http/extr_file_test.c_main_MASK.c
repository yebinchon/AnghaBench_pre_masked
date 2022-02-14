
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vlc_http_resource {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int * VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vlc_http_resource*) ;
 struct vlc_http_resource* FUNC_6 (int *,char*,int *,int *) ;
 int FUNC_7 (struct vlc_http_resource*) ;
 char* FUNC_8 (struct vlc_http_resource*) ;
 int FUNC_9 (struct vlc_http_resource*) ;
 int FUNC_10 (struct vlc_http_resource*) ;
 char* FUNC_11 (struct vlc_http_resource*) ;
 int * FUNC_12 (struct vlc_http_resource*) ;
 int FUNC_13 (struct vlc_http_resource*,int) ;
 int FUNC_14 (struct vlc_http_resource*) ;
 int FUNC_15 (struct vlc_http_resource*,char*,char*) ;

int FUNC_16(void)
{
    struct vlc_http_resource *VAR_11;
    char *VAR_12;

    VAR_1 = FUNC_4();


    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_15(VAR_11, ((void*)0), ((void*)0));
    FUNC_15(VAR_11, "john", ((void*)0));
    FUNC_15(VAR_11, ((void*)0), ((void*)0));
    FUNC_15(VAR_11, "john", "secret");
    FUNC_15(VAR_11, ((void*)0), ((void*)0));
    FUNC_13(VAR_11, 0);
    FUNC_0(FUNC_10(VAR_11) < 0);
    FUNC_0(FUNC_8(VAR_11) == ((void*)0));
    FUNC_0(FUNC_9(VAR_11) == (uintmax_t)-1);
    FUNC_0(!FUNC_5(VAR_11));
    FUNC_0(FUNC_11(VAR_11) == ((void*)0));
    FUNC_0(FUNC_12(VAR_11) == ((void*)0));
    FUNC_14(VAR_11);


    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "ETag: \"foobar42\"\r\n"
                 "Content-Type: video/mpeg\r\n"
                 "\r\n";

    VAR_3 = 0;
    VAR_0 = 1;
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(FUNC_10(VAR_11) == 200);
    FUNC_0(!FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == (uintmax_t)-1);
    VAR_12 = FUNC_11(VAR_11);
    FUNC_0(VAR_12 != ((void*)0) && !FUNC_2(VAR_12, "video/mpeg"));
    FUNC_1(VAR_12);


    VAR_4[0] = "HTTP/1.1 200 OK\r\nETag: \"foobar42\"\r\n\r\n";

    FUNC_0(FUNC_13(VAR_11, VAR_3 = 1234) < 0);
    FUNC_7(VAR_11);


    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: bytes 0-2344/2345\r\n"
                 "ETag: W/\"foobar42\"\r\n"
                 "Last-Modified: Mon, 21 Oct 2013 20:13:22 GMT\r\n"
                 "\r\n";

    VAR_3 = 0;
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == 2345);
    FUNC_0(FUNC_12(VAR_11) == ((void*)0));


    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: bytes 1234-3455/3456\r\n"
                 "ETag: W/\"foobar42\"\r\n"
                 "Last-Modified: Mon, 21 Oct 2013 20:13:22 GMT\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, VAR_3 = 1234) == 0);
    FUNC_0(FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == 3456);
    FUNC_0(FUNC_12(VAR_11) == ((void*)0));


    VAR_4[0] = "HTTP/1.1 416 Range Not Satisfiable\r\n"
                 "Content-Range: bytes */4567\r\n"
                 "ETag: W/\"foobar42\"\r\n"
                 "Last-Modified: Mon, 21 Oct 2013 20:13:22 GMT\r\n"
                 "\r\n";
    FUNC_13(VAR_11, VAR_3 = 5678);
    FUNC_0(FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == 4567);
    FUNC_0(FUNC_12(VAR_11) == ((void*)0));
    FUNC_7(VAR_11);


    VAR_4[0] = "HTTP/1.1 301 Permanent Redirect\r\n"
                 "Location: /somewhere/else/#here\r\n"
                 "\r\n";

    VAR_3 = 0;
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(!FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == (uintmax_t)-1);
    VAR_12 = FUNC_8(VAR_11);
    FUNC_0(VAR_12 != ((void*)0));
    FUNC_0(!FUNC_2(VAR_12, "https://www.example.com:8443/somewhere/else/"));
    FUNC_1(VAR_12);
    FUNC_7(VAR_11);


    VAR_4[0] = "HTTP/1.1 100 Standby\r\n"
                 "\r\n";
    VAR_4[1] = "HTTP/1.1 200 OK\r\n"
                 "Content-Length: 9999\r\n"
                 "\r\n";
    VAR_3 = 0;
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(FUNC_9(VAR_11) == 9999);
    FUNC_0(FUNC_8(VAR_11) == ((void*)0));
    FUNC_7(VAR_11);


    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: bytes 0-2344/2345\r\n"
                 "Last-Modified: Mon, 21 Oct 2013 20:13:22 GMT\r\n"
                 "\r\n";

    VAR_3 = 0;
    VAR_0 = 0;
    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(FUNC_5(VAR_11));

    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: bytes 1234-3455/3456\r\n"
                 "Last-Modified: Mon, 21 Oct 2013 20:13:22 GMT\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, VAR_3 = 1234) == 0);
    FUNC_7(VAR_11);


    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Type: multipart/byteranges\r\n"
                 "\r\n";
    VAR_3 = 0;

    VAR_11 = FUNC_6(((void*)0), VAR_7, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(FUNC_9(VAR_11) == (uintmax_t)-1);

    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: seconds 60-120/180\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, 0) == -1);


    VAR_4[0] = "HTTP/1.1 206 Partial Content\r\n"
                 "Content-Range: bytes 0-1233/*\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, 0) == 0);
    FUNC_0(FUNC_9(VAR_11) == 1234);


    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "Content-Range: bytes 0-1233/1234\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, 0) == 0);
    FUNC_0(FUNC_9(VAR_11) == (uintmax_t)-1);


    VAR_4[0] = "HTTP/1.1 406 Not Acceptable\r\n"
                 "\r\n";
    VAR_4[1] = "HTTP/1.1 206 OK\r\n"
                 "Content-Range: bytes 0-1/2\r\n"
                 "\r\n";
    VAR_2 = 1;
    FUNC_0(FUNC_13(VAR_11, 0) == 0);
    FUNC_0(FUNC_5(VAR_11));
    FUNC_0(FUNC_9(VAR_11) == 2);


    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "Pragma: features\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, 0) == 0);
    FUNC_0(FUNC_8(VAR_11) == ((void*)0));

    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "Icy-Name:CraptasticRadio\r\n"
                 "\r\n";
    FUNC_0(FUNC_13(VAR_11, 0) == 0);
    FUNC_0(FUNC_8(VAR_11) == ((void*)0));

    FUNC_7(VAR_11);

    VAR_5 = 0;
    VAR_2 = -1;
    VAR_11 = FUNC_6(((void*)0), VAR_8, VAR_6, ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));


    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "Pragma: features\r\n"
                 "\r\n";
    VAR_12 = FUNC_8(VAR_11);
    FUNC_0(VAR_12 != ((void*)0) && FUNC_2(VAR_12, VAR_10) == 0);
    FUNC_1(VAR_12);

    VAR_4[0] = "HTTP/1.1 200 OK\r\n"
                 "Icy-Name:CraptasticRadio\r\n"
                 "\r\n";
    FUNC_13(VAR_11, 0);
    VAR_12 = FUNC_8(VAR_11);
    FUNC_0(VAR_12 != ((void*)0) && FUNC_2(VAR_12, VAR_9) == 0);
    FUNC_1(VAR_12);

    FUNC_7(VAR_11);


    VAR_11 = FUNC_6(((void*)0), "ftp://localhost/foo", ((void*)0), ((void*)0));
    FUNC_0(VAR_11 == ((void*)0));
    VAR_11 = FUNC_6(((void*)0), "/foo", ((void*)0), ((void*)0));
    FUNC_0(VAR_11 == ((void*)0));
    VAR_11 = FUNC_6(((void*)0), "http://www.example.com", ((void*)0), ((void*)0));
    FUNC_0(VAR_11 != ((void*)0));
    FUNC_7(VAR_11);

    FUNC_3(VAR_1);
    return 0;
}
