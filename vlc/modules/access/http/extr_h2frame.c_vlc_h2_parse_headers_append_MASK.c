
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ sid; size_t len; int * buf; } ;
struct vlc_h2_parser {TYPE_1__ headers; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int * FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct vlc_h2_parser*,int ) ;

__attribute__((used)) static int FUNC_5(struct vlc_h2_parser *VAR_1,
                                       const uint8_t *VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_1->headers.sid != 0);

    if (VAR_1->headers.len + VAR_3 > 65536)
        return FUNC_4(VAR_1, VAR_0);

    uint8_t *VAR_4 = FUNC_2(VAR_1->headers.buf, VAR_1->headers.len + VAR_3);
    if (FUNC_3(VAR_4 == ((void*)0)))
        return FUNC_4(VAR_1, VAR_0);

    VAR_1->headers.buf = VAR_4;
    FUNC_1(VAR_1->headers.buf + VAR_1->headers.len, VAR_2, VAR_3);
    VAR_1->headers.len += VAR_3;
    return 0;
}
