
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_h2_stream {struct vlc_h2_stream* older; } ;
struct vlc_h2_parser {int dummy; } ;
struct vlc_h2_frame {int dummy; } ;
struct TYPE_2__ {int tls; } ;
struct vlc_h2_conn {int lock; struct vlc_h2_stream* streams; TYPE_1__ conn; } ;


 int FUNC_0 (struct vlc_h2_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct vlc_h2_parser*) ;
 int FUNC_4 (int ,struct vlc_h2_frame*,char*) ;
 struct vlc_h2_frame* FUNC_5 (int ) ;
 int FUNC_6 (struct vlc_h2_parser*,struct vlc_h2_frame*) ;
 int FUNC_7 (struct vlc_h2_parser*) ;
 struct vlc_h2_parser* FUNC_8 (struct vlc_h2_conn*,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct vlc_h2_stream*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;

__attribute__((used)) static void *FUNC_15(void *VAR_3)
{
    struct vlc_h2_conn *VAR_4 = VAR_3;
    struct vlc_h2_frame *VAR_5;
    struct vlc_h2_parser *VAR_6;
    int VAR_7, VAR_8;

    VAR_7 = FUNC_14();
    VAR_6 = FUNC_8(VAR_4, &VAR_2);
    if (FUNC_1(VAR_6 == ((void*)0)))
        goto fail;

    FUNC_3(VAR_1, VAR_6);
    do
    {
        FUNC_13(VAR_7);
        VAR_5 = FUNC_5(VAR_4->conn.tls);
        VAR_7 = FUNC_14();

        if (VAR_5 == ((void*)0))
        {
            FUNC_10(FUNC_0(VAR_4), "connection shutdown");
            break;
        }

        FUNC_4(FUNC_0(VAR_4), VAR_5, "in");
        FUNC_11(&VAR_4->lock);
        VAR_8 = FUNC_6(VAR_6, VAR_5);
        FUNC_12(&VAR_4->lock);
    }
    while (VAR_8 == 0);

    FUNC_2();
    FUNC_7(VAR_6);
fail:

    FUNC_11(&VAR_4->lock);
    for (struct vlc_h2_stream *VAR_9 = VAR_4->streams; VAR_9 != ((void*)0); VAR_9 = VAR_9->older)
        FUNC_9(VAR_9, VAR_0);
    FUNC_12(&VAR_4->lock);
    return ((void*)0);
}
