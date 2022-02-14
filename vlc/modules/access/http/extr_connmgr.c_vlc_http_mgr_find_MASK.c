
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_mgr {struct vlc_http_conn* conn; } ;
struct vlc_http_conn {int dummy; } ;



__attribute__((used)) static struct vlc_http_conn *FUNC_0(struct vlc_http_mgr *VAR_0,
                                               const char *VAR_1, unsigned VAR_2)
{
    (void) VAR_1; (void) VAR_2;
    return VAR_0->conn;
}
