
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ raw; scalar_t__ compress; scalar_t__ embed_data; scalar_t__ largeblock; } ;
typedef TYPE_1__ sendflags_t ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum lzc_send_flags
FUNC_0(const sendflags_t *VAR_4)
{
 enum lzc_send_flags VAR_5 = 0;
 if (VAR_4->largeblock)
  VAR_5 |= VAR_2;
 if (VAR_4->embed_data)
  VAR_5 |= VAR_1;
 if (VAR_4->compress)
  VAR_5 |= VAR_0;
 if (VAR_4->raw)
  VAR_5 |= VAR_3;
 return (VAR_5);
}
