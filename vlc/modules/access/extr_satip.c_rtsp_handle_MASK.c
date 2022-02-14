
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef enum rtsp_result { ____Placeholder_rtsp_result } rtsp_result ;
typedef int buffer ;
struct TYPE_7__ {char* content_base; int tcp_sock; void* stream_id; int keepalive_interval; int session_id; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int,size_t) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (TYPE_1__*,int ,int *,int ) ;
 char* FUNC_4 (int *,int ,int,int*) ;
 int FUNC_5 (char*,int ,int,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

__attribute__((used)) static enum rtsp_result FUNC_10(stream_t *VAR_1, bool *VAR_2) {
    access_sys_t *VAR_3 = VAR_1->p_sys;
    uint8_t VAR_4[512];
    int VAR_5 = 0;
    bool VAR_6 = 0;
    size_t VAR_7 = 0;
    size_t VAR_8 = 0;
    char *VAR_9, *VAR_10;


    while (!VAR_6) {
        VAR_9 = FUNC_4((vlc_object_t*)VAR_1, VAR_3->tcp_sock, 5000,
                VAR_2);
        if (VAR_9 == ((void*)0))
            break;

        if (FUNC_9(VAR_9, "RTSP/1.0 ", 9) == 0) {
            VAR_5 = FUNC_1(VAR_9 + 9);
        } else if (FUNC_9(VAR_9, "Content-Base:", 13) == 0) {
            FUNC_2(VAR_3->content_base);

            VAR_10 = VAR_9 + 13;
            FUNC_7(VAR_10);

            VAR_3->content_base = FUNC_8(VAR_10);
        } else if (FUNC_9(VAR_9, "Content-Length:", 15) == 0) {
            VAR_10 = VAR_9 + 16;
            FUNC_7(VAR_10);

            VAR_7 = FUNC_1(VAR_10);
        } else if (FUNC_9("Session:", VAR_9, 8) == 0) {
            VAR_10 = VAR_9 + 8;
            FUNC_7(VAR_10);

            FUNC_5(VAR_10, VAR_3->session_id, 64, &VAR_3->keepalive_interval);
        } else if (FUNC_9("Transport:", VAR_9, 10) == 0) {
            VAR_10 = VAR_9 + 10;
            FUNC_7(VAR_10);

            if (FUNC_6(VAR_1, VAR_10) != 0) {
                VAR_5 = VAR_0;
                break;
            }
        } else if (FUNC_9("com.ses.streamID:", VAR_9, 17) == 0) {
            VAR_10 = VAR_9 + 17;
            FUNC_7(VAR_10);

            VAR_3->stream_id = FUNC_1(VAR_10);
        } else if (VAR_9[0] == '\0') {
            VAR_6 = 1;
        }

        FUNC_2(VAR_9);
    }


    while (VAR_7 > 0 &&
            (VAR_8 = FUNC_3(VAR_1, VAR_3->tcp_sock, VAR_4, FUNC_0(sizeof(VAR_4), VAR_7))))
        VAR_7 -= VAR_8;

    return VAR_5;
}
