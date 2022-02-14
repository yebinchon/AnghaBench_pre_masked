
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint_fast32_t ;
struct TYPE_2__ {scalar_t__ sid; int eos; scalar_t__ len; } ;
struct vlc_h2_parser {TYPE_1__ headers; int parser; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vlc_h2_parser *VAR_1,
                                       uint_fast32_t VAR_2, bool VAR_3)
{
    FUNC_0(VAR_2 != 0);
    FUNC_0(VAR_1->headers.sid == 0);

    VAR_1->parser = VAR_0;
    VAR_1->headers.sid = VAR_2;
    VAR_1->headers.eos = VAR_3;
    VAR_1->headers.len = 0;
}
