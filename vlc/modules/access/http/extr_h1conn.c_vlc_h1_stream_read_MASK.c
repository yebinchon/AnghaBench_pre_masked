
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vlc_http_stream {int dummy; } ;
struct TYPE_7__ {int * tls; } ;
struct vlc_h1_conn {size_t content_length; TYPE_1__ conn; int active; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 struct vlc_h1_conn* FUNC_4 (struct vlc_http_stream*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_5 (int *,int ,size_t,int) ;

__attribute__((used)) static block_t *FUNC_6(struct vlc_http_stream *VAR_4)
{
    struct vlc_h1_conn *VAR_5 = FUNC_4(VAR_4);
    size_t VAR_6 = 2048;

    FUNC_0(VAR_5->active);

    if (VAR_5->conn.tls == ((void*)0))
        return VAR_3;

    if (VAR_6 > VAR_5->content_length)
        VAR_6 = VAR_5->content_length;
    if (VAR_6 == 0)
        return ((void*)0);

    block_t *VAR_7 = FUNC_1(VAR_6);
    if (FUNC_3(VAR_7 == ((void*)0)))
        return VAR_3;

    ssize_t VAR_8 = FUNC_5(VAR_5->conn.tls, VAR_7->p_buffer, VAR_6, 0);
    if (VAR_8 <= 0)
    {
        FUNC_2(VAR_7);
        if (VAR_8 < 0)
            return VAR_3;
        if (VAR_5->content_length != VAR_1)
        {
            VAR_2 = VAR_0;
            return VAR_3;
        }
        return ((void*)0);
    }

    VAR_7->i_buffer = VAR_8;
    if (VAR_5->content_length != VAR_1)
        VAR_5->content_length -= VAR_8;

    return VAR_7;
}
