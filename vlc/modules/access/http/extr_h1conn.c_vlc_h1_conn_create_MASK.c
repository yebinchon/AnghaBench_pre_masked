
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tls_t ;
struct vlc_http_conn {int * tls; int * cbs; } ;
struct TYPE_2__ {int * cbs; } ;
struct vlc_h1_conn {int active; int released; int proxy; struct vlc_http_conn conn; void* opaque; TYPE_1__ stream; } ;


 struct vlc_h1_conn* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

struct vlc_http_conn *FUNC_2(void *VAR_2, vlc_tls_t *VAR_3, bool VAR_4)
{
    struct vlc_h1_conn *VAR_5 = FUNC_0(sizeof (*VAR_5));
    if (FUNC_1(VAR_5 == ((void*)0)))
        return ((void*)0);

    VAR_5->conn.cbs = &VAR_0;
    VAR_5->conn.tls = VAR_3;
    VAR_5->stream.cbs = &VAR_1;
    VAR_5->active = 0;
    VAR_5->released = 0;
    VAR_5->proxy = VAR_4;
    VAR_5->opaque = VAR_2;

    return &VAR_5->conn;
}
